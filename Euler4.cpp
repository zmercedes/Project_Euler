/*
 * Zoilo Mercedes
 * Project Euler Problem 4:
 * biggest palindromic number made by product of 3 digit numbers
 */
#include <iostream>
#include <string>

bool isPalindromic(int n);

int main(){
  int greatest = 0;
  for(int i = 999; i > 99; i--){
    for(int j = 999; j > 99; j--){
      if(isPalindromic(i*j) && i*j > greatest){
        greatest = i*j;
      }
    }
  }
  std::cout << greatest << " is the biggest palindrome of 3 digit number products.\n";
  return 0;
}

bool isPalindromic(int n){
  std::string pal = std::to_string(n);
  int l = pal.length() - 1;
  for(int i = 0; i < pal.length()/2;i++){
    if(pal[i] == pal[l - i])
      continue;
    else
      return false;
  }
  return true;
}