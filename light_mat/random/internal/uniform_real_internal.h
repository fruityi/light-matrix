/**
 * @file uniform_real_internal.h
 *
 * @brief Internal implementation of uniform real distribution
 *
 * @author Dahua Lin
 */

#ifdef _MSC_VER
#pragma once
#endif

#ifndef LIGHTMAT_UNIFORM_REAL_INTERNAL_H_
#define LIGHTMAT_UNIFORM_REAL_INTERNAL_H_

#include <light_mat/random/distr_fwd.h>

namespace lmat { namespace random { namespace internal {

	// core routines to convert from random bits to real value in [1, 2)

	LMAT_ENSURE_INLINE
	inline float randbits_to_c1o2_f32(uint32_t u)
	{
		union {
			uint32_t u32;
			float f32;
		} x;

		x.u32 = (u & 0x007fffff) | (0x3f800000);
		return x.f32;
	}

	LMAT_ENSURE_INLINE
	inline double randbits_to_c1o2_f64(uint64_t u)
	{
		union {
			uint64_t u64;
			double f64;
		} x;

		x.u64 = (u & 0x000fffffffffffffULL) | (0x3ff0000000000000);
		return x.f64;
	}

	LMAT_ENSURE_INLINE
	inline __m128 randbits_to_c1o2_f32(const __m128i& u, sse_t)
	{
		return _mm_or_ps(
			_mm_set1_ps(1.0f),
			_mm_andnot_ps(_mm_set1_ps(-2.0f), _mm_castsi128_ps(u)));
	}

	LMAT_ENSURE_INLINE
	inline __m128d randbits_to_c1o2_f64(const __m128i& u, sse_t)
	{
		return _mm_or_pd(
			_mm_set1_pd(1.0),
			_mm_andnot_pd(_mm_set1_pd(-2.0), _mm_castsi128_pd(u)));
	}

#ifdef LMAT_HAS_AVX

	LMAT_ENSURE_INLINE
	inline __m256 randbits_to_c1o2_f32(const __m256i& u, avx_t)
	{
		return _mm256_or_ps(
			_mm256_set1_ps(1.0f),
			_mm256_andnot_ps(_mm256_set1_ps(-2.0f), _mm256_castsi256_ps(u)));
	}

	LMAT_ENSURE_INLINE
	inline __m256d randbits_to_c1o2_f64(const __m256i& u, avx_t)
	{
		return _mm256_or_pd(
			_mm256_set1_pd(1.0),
			_mm256_andnot_pd(_mm256_set1_pd(-2.0), _mm256_castsi256_pd(u)));
	}

#endif

} } }

#endif
