// Julian Chavez
// jmbchavez@csu.fullerton.edu
// @jmbchavez
// Partners:@jmbchavez

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // Validate that there is at least one command line argument.
  if (arguments.size() <= 1) {
    std::cerr << "error: you must supply at least one number\n";
    return 1;
  }

  double sum = 0;
  int count = 0;

  // Calculate the sum and count of all command line arguments.
  for (size_t i = 1; i < arguments.size(); ++i) {
    try {
      sum += std::stod(arguments[i]);
      ++count;
    } catch (std::invalid_argument& e) {
      std::cerr << "error: '" << arguments[i] << "' is not a valid number\n";
      return 1;
    } catch (std::out_of_range& e) {
      std::cerr << "error: '" << arguments[i] << "' is out of range\n";
      return 1;
    }
  }

  // Calculate the average of the values.
  double average = sum / count;

  // Print out the average of the values.
  std::cout << "average = " << average << '\n';

  return 0;
}
