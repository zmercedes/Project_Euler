/*
 * Zoilo Mercedes
 * Project Euler Problem 5:
 * smallest number divisible by all digits 1 - 20
 */
#include <iostream>

int main(){
  int num = 2520;
  bool found = false;
  while(!found){
    num += 20;
    for(int i = 20; i > 10 ; i-- ){ 
      if(num%i == 0 && i == 11)
        found = true;
      else if (num%i == 0)
        continue;
      else
        break;
    }
  }
  std::cout << num << " is the smallest number divisible by 1-20.\n";
  return 0;
}