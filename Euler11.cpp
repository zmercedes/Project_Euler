/*
 * Zoilo Mercedes
 * Project Euler Problem 11:
 * Largest 4 adjacent number product in a grid (vertical horizontal foward/back diag)
 */
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

void initMatrix(std::vector<std::vector<int>> &matrix);
unsigned long long products(std::vector<std::vector<int>> &matrix);
unsigned long long vertical(int row, int col, std::vector<std::vector<int>> &matrix);
unsigned long long horizontal(int row, int col, std::vector<std::vector<int>> &matrix);
unsigned long long fordiag(int row, int col, std::vector<std::vector<int>> &matrix);
unsigned long long backdiag(int row, int col, std::vector<std::vector<int>> &matrix);

int main(){
  std::vector<std::vector<int>> matrix;
  
  initMatrix(matrix);

  int toy = matrix[6][8] * matrix[7][9] * matrix[8][10] * matrix[9][11];
  std::cout << " toy example: " << toy << std::endl;

  std::cout << " the greatest product of 4 is " << products(matrix) << std::endl;

  return 0;
}

unsigned long long products(std::vector<std::vector<int>> &matrix){
  unsigned long long greatest = 0;

  for(int row = 0; i<20;i++){
    for(int col = 0; j<20; j++){
		greatest = std::max(greatest, vertical(row, col, matrix));
  		greatest = std::max(greatest, horizontal(row, col, matrix));
  		greatest = std::max(greatest, fordiag(row, col, matrix));
  		greatest = std::max(greatest, backdiag(row, col, matrix));
  	}
  }
  return greatest;
}

unsigned long long vertical(int row, int col, std::vector<std::vector<int>> &matrix){
	return (row+3 < matrix.size()) ? (matrix[row][col]*matrix[row+1][col]*matrix[row+2][col]*matrix[row+3][col]) : 0;
}
unsigned long long horizontal(int row, int col, std::vector<std::vector<int>> &matrix){
	return (col+3 < matrix[0].size()) ? (matrix[row][col]*matrix[row][col+1]*matrix[row][col+2]*matrix[row][col+3]) : 0;
}
unsigned long long fordiag(int row, int col, std::vector<std::vector<int>> &matrix){
	return (row+3 < matrix.size() && col+3 < matrix[0].size()) ? (matrix[row][col]*matrix[row+1][col+1]*matrix[row+2][col+2]*matrix[row+3][col+3]) : 0;
}
unsigned long long backdiag(int row, int col, std::vector<std::vector<int>> &matrix){
	return (row+3 < matrix.size() && col+3 < matrix[0].size()) ? (matrix[row][col+3]*matrix[row+1][col+2]*matrix[row+2][col+1]*matrix[row+3][col]) : 0;	
}

void initMatrix(std::vector<std::vector<int>> &matrix){
  int token;
  std::string input;
  std::ifstream numbers("matrix.txt");
  std::stringstream split;
  std::vector<int> tmp;

  while(getline(numbers, input)){
    split << input;
    while(split >> token){
      tmp.push_back(token);
    }
    matrix.push_back(tmp);
    tmp.clear();
    split.clear();
  }
  numbers.close();
}
