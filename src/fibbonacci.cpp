#include <iostream>
#include <sstream>
#include <string>

int fibbonacci(int n){
    int fibnum = 0;

    if (n == 0){
        fibnum = 0;
    }
    else if (n == 1){
        fibnum = 1;
    }
    else{
        fibnum = fibbonacci(n-1) + fibbonacci(n-2);
    }
    return fibnum;
}

int userDataCheck(){
    std::string inputLine;
    int userInput;

    while (true){
        std::cout << "What number of the fibonacci sequence do you want to see: ";
        std::getline(std::cin, inputLine);

        std::stringstream ss(inputLine);
        if (ss >> userInput && ss.eof() && userInput >= 0){
            break;
        } else {
            std::cout << "Please input a positive whole number";
            std::cout << "\n";
        }
    }
    return userInput;
}



int main(){

    // Declare variables
    int userInput;
    int answer;

    // Recieve user data
    userInput = userDataCheck();

    answer = fibbonacci(userInput);
    std::cout << "Number " << userInput << " in the sequence is : " << answer;
    std::cout << "\n";
    return 0;
}