/*
 * Zoilo Mercedes
 * Project Euler Problem 7:
 * 10001st prime.
 */
#include <iostream>
#include <vector>

int main(){
  std::vector<int> primeList;
  int num = 2;
  primeList.push_back(num);

  std::cout << " first value: " << primeList[0] << std::endl;

  while(primeList.size() < 10001){
    num++;
    for(int i = 0; i < primeList.size(); i++){
      if( num % primeList[i] != 0 && i == primeList.size() - 1 ) {
        primeList.push_back(num);
        break;
      } else if (num % primeList[i] != 0)
        continue;
      else
        break;
    }
  }

  std::cout << " The 10001st prime is " << primeList[10000] << std::endl;
  return 0;
}
/* without memoizing
#include <math.h>

int main(){
  int count = 1;
  int prime = 3;

  while(count < 10001){
    for(int i = 1; i<= sqrt(prime);i++){
      if(prime% i != 0 && i == sqrt(prime)){
        count++;
      else if(prime % i != 0)
        continue;
      else
        break;
      }
    }
    prime +=2;
  }
  std::cout << " the 10001 prime is " << prime <<std::endl;

  return 0;
} */