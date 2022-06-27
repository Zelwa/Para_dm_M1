#include "Suite.hpp"
#include "Serie.hpp"
#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace dm::SuiteSerie;

/**
 * Programme principal.
 *
 * @return EXIT_SUCCESS car exécution toujours réussie.
 *
 **/

int
main() {

  {
    const unsigned int n = 5;
    std::cout  << "u" << n  << " : " << Suite<n>::value << std::endl;
    std::cout << "S" << n  << " : " << Serie<n>::value << std::endl;
  }

  return EXIT_SUCCESS;

}
