// Julian Chavez
// jmbchavez@csu.fullerton.edu
// @jmbchavez
// Partners:@jmbchavez

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // Validate that the number of arguments is correct
  if (argc != 4) {
    std::cerr << "error: you must supply three arguments" << std::endl;
    return 1;
  }

  // Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];

  // Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*
  // on its own line.
  std::cout << "Your order:" << std::endl;
  std::cout << "A " << protein << " sandwich on " << bread << " with "
            << condiment << "." << std::endl;

  return 0;
}
