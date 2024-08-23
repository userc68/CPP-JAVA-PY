#include <chrono>
#include <iostream>
#include <iomanip>
int main() {
  int iterations = 10000000;
  auto start = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < iterations; i++) {}
  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> duration = end - start;
  std::cout << std::fixed << std::setprecision(6);
  std::cout << "Execution time: " << duration.count() << " seconds" << std::endl;
}