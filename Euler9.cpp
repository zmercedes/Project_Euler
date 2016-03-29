/*
 * Zoilo Mercedes
 * Project Euler Problem 9:
 * find product of pythagorean triplet whose sum = 1000
 */
#include <iostream>

int main(){
  int a, b, c;

  for(int i = 2;i<100;i++){
    for(int j = 1; j<i ; j++){ 
      a = i*i - j*j;
      b = 2*i*j;
      c = i*i + j*j;

      if(a + b + c == 1000){
        std::cout << " The triple is : " << a << ", "
                                         << b << ", "
                                         << c << ". \n";
        std::cout << " their sum is " << a + b + c << std::endl;
        std::cout << " their product is " << a * b * c << std::endl;
        break;
      }
    }
  }

  return 0;
}