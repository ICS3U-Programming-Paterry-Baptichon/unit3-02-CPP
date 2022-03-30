
// Created by: Paterty Baptichon .J
// Created on: 2022-03-30
// This program is a guessing game which consists of the user guessing a number between 1-9. 

#include <iostream>

int main() {
    // decalre constant
    const int RIGHT_NUMBER = 7;
    int usernumber;

    // Get user number 
    std::cout << "Guess the correct number between 1-9: ";
    std::cin >> usernumber;
    std::cout << "" << std::endl;

    // processing if number is correct
    if (usernumber == RIGHT_NUMBER){
        // display the right answer or the wrong answer.
        std::cout << "correct";
      }
  
     if (usernumber > RIGHT_NUMBER) {
       
    
      std::cout << "not correct";
       }
  if (usernumber < RIGHT_NUMBER) {
       
    
      std::cout << "not correct";
       }
  }
