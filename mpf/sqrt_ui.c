/* mpf_sqrt_ui -- Compute the square root of an unsigned integer.

Copyright 1993, 1994, 1996, 2000, 2001, 2004 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */

#include <stdio.h> /* for NULL */
#include "gmp.h"
#include "gmp-impl.h"


/* As usual the aim is to produce PREC(r) limbs of result with the high limb
   non-zero.  That high limb will end up floor(sqrt(u)), and limbs below are
   produced by padding the input with zeros, two for each desired result
   limb, being 2*(prec-1) for a total 2*prec-1 limbs passed to mpn_sqrtrem.
   The way mpn_sqrtrem calculates floor(sqrt(x)) ensures the root is correct
   to the intended accuracy, ie. truncated to prec limbs.

   u==0 is a special case so the rest of the code can assume the result is
   non-zero (ie. will have a non-zero high limb on the result).

   Not done:

   No attempt is made to identify perfect squares.  It's considered this can
   be left to an application if it might occur with any frequency.  As it
   stands, mpn_sqrtrem does it's normal amount of work on a perfect square
   followed by zero limbs, though of course only an mpn_sqrtrem1 would be
   actually needed.  We also end up leaving our mpf result with lots of low
   trailing zeros, slowing down subsequent operations.

   We're not aware of any optimizations that can be made using the fact the
   input has lots of trailing zeros (apart from the perfect square
   case).  */

void
mpf_sqrt_ui (mpf_ptr r, unsigned long int u)
{
  mp_size_t rsize;
  mp_ptr tp;
  mp_size_t prec;
  TMP_DECL (marker);

  if (UNLIKELY (u == 0))
    {
      r->_mp_size = 0;
      r->_mp_exp = 0;
      return;
    }

  TMP_MARK (marker);

  prec = r->_mp_prec;
  rsize = 2 * prec - 1;

  tp = (mp_ptr) TMP_ALLOC (rsize * BYTES_PER_MP_LIMB);

  MPN_ZERO (tp, rsize - 1);
  tp[rsize - 1] = u;

  mpn_sqrtrem (r->_mp_d, NULL, tp, rsize);

  r->_mp_size = prec;
  r->_mp_exp = 1;
  TMP_FREE (marker);
}
