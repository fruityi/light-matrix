/**
 * @file test_uniform_int.cpp
 *
 * @brief Test uniform integer distribution
 *
 * @author Dahua Lin
 */

#include "distr_test_base.h"
#include <light_mat/random/uniform_int_distr.h>

default_rand_stream rstream;
const index_t N = 200000;


T_CASE( test_std_uniform_int )
{
	const T b = 5;
	std_uniform_int_distr<T> distr(b);

	const T s = b + 1;

	ASSERT_EQ( distr.a(), 0 );
	ASSERT_EQ( distr.b(), b );
	ASSERT_EQ( distr.span(), s );
	ASSERT_EQ( distr.mean(), double(b) / 2 );
	ASSERT_EQ( distr.var(),  double((s * s - 1)) / 12 );

	double ptol = get_p_tol(N);
	test_discrete_rng(distr, rstream, N, b+1, ptol);
}

T_CASE( test_uniform_int )
{
	const T a = 2;
	const T b = 6;
	uniform_int_distr<T> distr(a, b);

	const T s = b - a + 1;

	ASSERT_EQ( distr.a(), a );
	ASSERT_EQ( distr.b(), b );
	ASSERT_EQ( distr.span(), s );
	ASSERT_EQ( distr.mean(), double(a + b) / 2 );
	ASSERT_EQ( distr.var(),  double((s * s - 1)) / 12 );

	double ptol = get_p_tol(N);
	test_discrete_rng(distr, rstream, N, b+1, ptol);
}

AUTO_TPACK( test_uniform_int )
{
	ADD_T_CASE( test_std_uniform_int, uint32_t )
	ADD_T_CASE( test_std_uniform_int, int32_t )

	ADD_T_CASE( test_uniform_int, uint32_t )
	ADD_T_CASE( test_uniform_int, int32_t )
}

