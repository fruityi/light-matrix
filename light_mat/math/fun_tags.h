/**
 * @file fun_tags.h
 *
 * Function tags
 * 
 * @author Dahua Lin 
 */

#ifdef _MSC_VER
#pragma once
#endif

#ifndef LIGHTMAT_FUN_TAGS_H_
#define LIGHTMAT_FUN_TAGS_H_

#include <light_mat/common/prim_types.h>
#include <light_mat/common/mask_type.h>

// macros to declare fun tags

#define LMAT_DEFINE_GENERIC_FUNTAG_1( Tag ) \
	struct Tag { };

#define LMAT_DEFINE_GENERIC_FUNTAG_2( Tag ) \
	struct Tag { };

#define LMAT_DEFINE_GENERIC_FUNTAG_3( Tag ) \
	struct Tag { };

#define LMAT_DEFINE_COMPARISON_FUNTAG( Tag ) \
	struct Tag { };

#define LMAT_DEFINE_REAL_FUNTAG_1( Tag ) \
	struct Tag { };

#define LMAT_DEFINE_REAL_FUNTAG_2( Tag ) \
	struct Tag { };

#define LMAT_DEFINE_REAL_FUNTAG_3( Tag ) \
	struct Tag { };

#define LMAT_DEFINE_LOGICAL_FUNTAG_1( Tag ) \
	struct Tag { };

#define LMAT_DEFINE_LOGICAL_FUNTAG_2( Tag ) \
	struct Tag { };

#define LMAT_DEFINE_REALPRED_FUNTAG_1( Tag ) \
	struct Tag { };


namespace lmat {


	// arithmetic

	LMAT_DEFINE_GENERIC_FUNTAG_2( add_ )
	LMAT_DEFINE_GENERIC_FUNTAG_2( sub_ )
	LMAT_DEFINE_GENERIC_FUNTAG_2( mul_ )
	LMAT_DEFINE_GENERIC_FUNTAG_2( div_ )
	LMAT_DEFINE_GENERIC_FUNTAG_1( neg_ )

	LMAT_DEFINE_GENERIC_FUNTAG_1( abs_ )
	LMAT_DEFINE_GENERIC_FUNTAG_1( sqr_ )
	LMAT_DEFINE_GENERIC_FUNTAG_1( cube_ )

	LMAT_DEFINE_GENERIC_FUNTAG_2( max_ )
	LMAT_DEFINE_GENERIC_FUNTAG_2( min_ )
	LMAT_DEFINE_GENERIC_FUNTAG_3( clamp_ )

	// comparison

	LMAT_DEFINE_COMPARISON_FUNTAG( eq_ )
	LMAT_DEFINE_COMPARISON_FUNTAG( ne_ )
	LMAT_DEFINE_COMPARISON_FUNTAG( ge_ )
	LMAT_DEFINE_COMPARISON_FUNTAG( gt_ )
	LMAT_DEFINE_COMPARISON_FUNTAG( le_ )
	LMAT_DEFINE_COMPARISON_FUNTAG( lt_ )

	// logical

	LMAT_DEFINE_LOGICAL_FUNTAG_1( logical_not_ )
	LMAT_DEFINE_LOGICAL_FUNTAG_2( logical_and_ )
	LMAT_DEFINE_LOGICAL_FUNTAG_2( logical_or_ )
	LMAT_DEFINE_LOGICAL_FUNTAG_2( logical_eq_ )
	LMAT_DEFINE_LOGICAL_FUNTAG_2( logical_ne_ )


	// real math

	LMAT_DEFINE_REAL_FUNTAG_3( fma_ )
	LMAT_DEFINE_REAL_FUNTAG_1( rcp_ )
	LMAT_DEFINE_REAL_FUNTAG_1( sqrt_ )
	LMAT_DEFINE_REAL_FUNTAG_1( rsqrt_ )
	LMAT_DEFINE_REAL_FUNTAG_2( pow_ )

	LMAT_DEFINE_REAL_FUNTAG_1( floor_ )
	LMAT_DEFINE_REAL_FUNTAG_1( ceil_ )

	LMAT_DEFINE_REAL_FUNTAG_1( exp_ )
	LMAT_DEFINE_REAL_FUNTAG_1( log_ )
	LMAT_DEFINE_REAL_FUNTAG_1( log10_ )
	LMAT_DEFINE_REAL_FUNTAG_1( xlogx_ )
	LMAT_DEFINE_REAL_FUNTAG_2( xlogy_ )

	LMAT_DEFINE_REAL_FUNTAG_1( sin_ )
	LMAT_DEFINE_REAL_FUNTAG_1( cos_ )
	LMAT_DEFINE_REAL_FUNTAG_1( tan_ )

	LMAT_DEFINE_REAL_FUNTAG_1( asin_ )
	LMAT_DEFINE_REAL_FUNTAG_1( acos_ )
	LMAT_DEFINE_REAL_FUNTAG_1( atan_ )
	LMAT_DEFINE_REAL_FUNTAG_2( atan2_ )

	LMAT_DEFINE_REAL_FUNTAG_1( sinh_ )
	LMAT_DEFINE_REAL_FUNTAG_1( cosh_ )
	LMAT_DEFINE_REAL_FUNTAG_1( tanh_ )

	// C++11 real math

	LMAT_DEFINE_REAL_FUNTAG_1( cbrt_ )
	LMAT_DEFINE_REAL_FUNTAG_2( hypot_ )

	LMAT_DEFINE_REAL_FUNTAG_1( round_ )
	LMAT_DEFINE_REAL_FUNTAG_1( trunc_ )

	LMAT_DEFINE_REAL_FUNTAG_1( exp2_ )
	LMAT_DEFINE_REAL_FUNTAG_1( log2_ )
	LMAT_DEFINE_REAL_FUNTAG_1( expm1_ )
	LMAT_DEFINE_REAL_FUNTAG_1( log1p_ )

	LMAT_DEFINE_REAL_FUNTAG_1( asinh_ )
	LMAT_DEFINE_REAL_FUNTAG_1( acosh_ )
	LMAT_DEFINE_REAL_FUNTAG_1( atanh_ )

	LMAT_DEFINE_REAL_FUNTAG_1( erf_ )
	LMAT_DEFINE_REAL_FUNTAG_1( erfc_ )
	LMAT_DEFINE_REAL_FUNTAG_1( lgamma_ )
	LMAT_DEFINE_REAL_FUNTAG_1( tgamma_ )

	// numeric predicates

	LMAT_DEFINE_REALPRED_FUNTAG_1( signbit_ )
	LMAT_DEFINE_REALPRED_FUNTAG_1( isfinite_ )
	LMAT_DEFINE_REALPRED_FUNTAG_1( isinf_ )
	LMAT_DEFINE_REALPRED_FUNTAG_1( isnan_ )

	struct cond_ { };

}

#endif 
