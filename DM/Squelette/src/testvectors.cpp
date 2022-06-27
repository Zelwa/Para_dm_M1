#include "vectors.hpp"
#include <iostream>
#include <stdlib.h>
#include <cstdlib>



// Abolition du préfixage explicite pour notre librairie.
using namespace dm::vectors;

int
main(int argc, char* argv[]) {
  
  {
    // Longueur paire du tableau manipulé.
    const size_t n = 10;
    srand(time(NULL));
    double iSecret;
    double a[n];
    int i;
    for ( i= 0; i < n; i++) {
      iSecret = rand() % 10 + 1;
      a[i]= iSecret;
    }

    for ( i= 0; i < n; i++) {
      std::cout << "a["<<i<<"] : "<< a[i] << "\t" << std::endl;
    }

    rotateSSE2(a,n);
    std::cout << "\n";
    for ( i= 0; i < n; i++) {
      std::cout << "a["<<i<<"] : "<< a[i] << "\t" << std::endl;
    }
  }




  // C'est terminé. Tout c'est bien passé
  return EXIT_SUCCESS;

}
