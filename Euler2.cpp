/*
 * Zoilo Mercedes
 * Project Euler Problem 2:
 * sum all even indices of fib numbers with 1,2,...,89 being first 10 numbers
 */
#include <iostream>
#include <vector>

int fibonacci(std::vector<unsigned int> &fibList, int n){
  if(n == 0)
    return 1;
  else if(n == 1)
    return 2;
  else if(fibList[n] != 0)
    return fibList[n];
  else
    fibList[n] = fibonacci(fibList, n-1) + fibonacci(fibList, n-2);

  return fibList[n];
}

int main(){
  std::vector<unsigned int> fibList(33, 0);

  std::cout << fibonacci(fibList, 33) << std::endl;

  int sum = 0;

  for(int i = 0; fibList[i] < 4000000 ; i++){
    if(fibList[i] % 2 == 0)
      sum += fibList[i];
  }

  std::cout << sum << std::endl;

  return 0;
}

/* version 2: no memoizing
int main(){
  int sum = 2;
  int fib = 2;
  int last = 1;
  int tmp;

  while(fib < 4000000){
    tmp = last;
    last = fib;
    fib = tmp + last;
    if(fib%2 == 0)
      sum +=fib;
  }
  std::cout << " Total sum is " << sum<< std::endl;
  return 0;
} */