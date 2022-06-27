#ifndef VECTORS_HPP
#define VECTORS_HPP

#include <emmintrin.h>
#include <cstdlib>

namespace dm{
  namespace vectors {
      /**
       * Fonction permettant de permuter circulairement mes composantes d'un vecteurs a. 
       * @parm[in] a - vecteur repésenté par un tableau de taille paire
       * @parm[in] n - nombre d'itérations pair
       **/
    
    void rotate(double a[],
		const size_t& n);

    void rotateSSE2(double a[],
		    const size_t& n);


  }
}

#endif
