/*
 * Zoilo Mercedes
 * Project Euler Problem 6:
 * square of sum - sum of squares
 */
#include <iostream>

int squareOfSum(int n);

int sumOfSquares(int n);

int main(){

  std::cout << " The difference of the square of sum and sum of squares is "
            << squareOfSum(100) - sumOfSquares(100) << std::endl;
  return 0;
}

int sumOfSquares(int n){
  return (n*(n+1)*(2*n+1))/6;
}

int squareOfSum(int n){
  int sum = 0;
  for(int i = 1;i<=n;i++){
    sum += i;
  }
  return sum*sum;
}