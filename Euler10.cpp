/*
 * Zoilo Mercedes
 * Project Euler Problem 10:
 * Sum of primes below 2000000
 */
#include <iostream>
#include <math.h>

bool isPrime(int num);

int main(){
  long long int sum = 0;

  for(int i = 2; i < 10; i++ ){
    if(isPrime(i))
      sum += i;
  }

  std::cout << " total sum: " << sum << std::endl;
  return 0;
}

bool isPrime(int num){
  for(int i = 2; i < sqrt(num) ;i++){
    if( num % i == 0 ) 
      return false;
    else ;
  }
  return true;
}