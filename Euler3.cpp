/*
 * Zoilo Mercedes
 * Project Euler Problem 3:
 * Highest prime factor of a number.
 */
#include <iostream>

int main(int argc, char** argv){
  if (argc != 2){
    cout <<" Usage: "<< argv[0] << " <any integer from -2b to 2b> ";
    return 0;
  }

  long int n = atol(argv[1]);

  for(int i = 2; i < n/i ; i++){
    while(n%i == 0){
      n /= i;
      std::cout << i << " is a prime factor. \n";
    }
  }
  if(n != 0)
    std::cout << n << " is the biggest prime factor.\n";
  else
    std::cout << "It is also the biggest.\n";
  return 0;
}