#ifndef Serie_hpp
#define Serie_hpp

#include "Suite.hpp"

namespace dm {
  namespace SuiteSerie{
    /**
     * @class Serie Serie.hpp
     *
     * Template implémentant la série de terme un présente dans l'exercie numéro 1 . 
     * @note On calcue la somme Sn en faisant la somme des ui élement avec i allant de 0 a n
     * @note pour la some S0 elle est égal à u0
     *
     */ 
  
    template<unsigned int n>
    class Serie{
    public:
      using value1 = Suite< n >;
      enum :  long long { value = value1::value + Serie<n-1>::value};
    };


    template<>
    class Serie<0>{
    public:
      using value1 = Suite<0>;
      enum : long long{ value = value1::value};

    };
  }
}
#endif
