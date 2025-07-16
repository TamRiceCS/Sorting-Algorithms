#include <iostream>
#include <string>
#include <vector>


// How to run: g++ main.cpp -o main
// ./main

std::vector<int> string2Vector(std::string process){
    std::vector<int> build;
    std::string number = "";
    for(int i = 0; i < process.size(); i++) {
        if(process[i] == ' ' && number != "") {
            build.push_back(stoi(number));
            number = "";
        }
        else if(std::isdigit(process[i])) {
            number += process[i];
        }
        else{
            return {}; // invalid character included.
        }
    }
    // read last input in case list of numbers does not end with a space
    if(number != "") {
        build.push_back(stoi(number));
    }
    return build;
}

int main(){
    std::string userInput = "";
    std::string userVector = "";
    std::vector<int> example = {1,5,4,2,3,10,7,8,9,6};
    std::vector<int> userExample;

    while(userInput != "x") {
        std::cout << "\nWelcome to the sorting algorithm demo, please chose a mode by entering the number:" << std::endl;
        std::cout << "\n1. (example) Run sorting algorithms with a provided list of numbers." << std::endl;
        std::cout << "2. (custom) Run sorting algorithms with a list you entered." << std::endl;
        std::cout << "3. (quit) Enter the key \'x\' to quit the program." << std::endl;
        std::cout << "\nYour input: ";

        std::cin >> userInput;

        if(userInput == "1") {
            std::cout << "\nThe following list is provided as an example: " << std::endl;
            std::cout << "{";
            for(int i = 0; i < example.size(); i++) {
                if(i == example.size()-1) {
                    std::cout << example[i];
                } 
                else{
                    std::cout << example[i] << ", ";
                }
            }
            std::cout << "}" << std::endl;
        }
        else if(userInput == "2") {
            std::cout << "\nEnter your series of numbers seperated by a space." << std::endl;
            std::cin.clear();
            std::cin.sync();
            std::getline(std::cin, userVector);
            userExample = string2Vector(userVector);

            if(userExample.empty()) {
                std::cout << "No user input was recieved. :C" << std::endl;
            }
            else{
                std::cout << "{";
                for(int i = 0; i < userExample.size(); i++) {
                    if(i == userExample.size()-1) {
                        std::cout << userExample[i];
                    } 
                    else{
                        std::cout << userExample[i] << ", ";
                    }
                }
                std::cout << "}" << std::endl;
            }
        }
        else {
            std::cout << "This is not a valid option, please try again." << std::endl;
            continue;
        }
    }

    std::cout << "\nThank you for trying out my demo" << std::endl;

}