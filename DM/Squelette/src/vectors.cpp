#include "vectors.hpp"

namespace dm{
  namespace vectors {

    typedef union {
      __m128 m128_vec;    // Le registre.
      float  m128_f32[4]; // Ce même registre vu comme un tableau de taille 4.
    } xmm_t;


    /**********
     * rotate *
     **********/

    void
    rotate(double a[],
	   const size_t& n)
    {
      const double tmp= a[0];
      for (size_t i = 0; i < n-2; i+=2) {
	a[i]=a[i+1];
	a[i+1]=a[i+2];
      }
      a[n-2]=a[n-1];
      a[n-1]= tmp;

    }


    /************
     *rotateSSE2*
     ************/

    void
    rotateSSE2(double a[],const size_t& n) {
      __m128d pk_first = _mm_load_pd(a);
      __m128d pk_here;
      __m128d pk_next;
      for (size_t i = 0; i < n-2; i+=2) {
	pk_here = _mm_load_pd(a + i);
	pk_next = _mm_load_pd(a + i + 2);
	pk_here = _mm_shuffle_pd(pk_here,pk_next,1);
	_mm_store_pd(a + i,pk_here);
      }
      pk_first= _mm_shuffle_pd(pk_next,pk_first,1);
      _mm_store_pd(a + n - 2 ,pk_first);
    }
  }
}
