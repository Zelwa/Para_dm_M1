#ifndef Suite_hpp
#define Suite_hpp

namespace dm{
  namespace SuiteSerie{
    /**
     * @class Suite.hpp
     *
     * Template implémentant la suite entière définie dans l'exercie numéro 1 . 
     * @note nous affectons la valeur u1=-3 (à value) 
     *                                            la valeur u0=2
     *
     */ 
    template<unsigned int n ,long long a=2,long long b=-3,long long c= b+2*a>
    class Suite{
    public:
      enum : long long {value = Suite<n-1, b, c >::value};
    };


    template<long long a, long long b,long long c>
    class Suite<1, a,b,c> {
    public:
      enum : long long {value = b};
    };

    template<long long a,long long b,long  long c>
    class Suite<0, a,b,c> {
    public:
      enum : long long {value = a};
    };
  }
}


#endif
