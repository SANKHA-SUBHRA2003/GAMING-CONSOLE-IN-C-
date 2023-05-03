#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>


using namespace std;

int main() {
    system("color 05");
    string command;
    while (true) {
        system("cls");
        cout << "Enter a command ('snake', 'flappybird', 'hangman', or 'exit'): ";
        cin >> command;
        if (command == "snake") 
        {
            system("g++ snake.cpp -o snake && snake");
             
        }
           
        else if (command == "flappybird")
        {
            system("g++ flappybird.cpp -o flappybird && flappybird");
        }
         
        else if (command == "hangman")
        {
            system("g++ hangman.cpp -o hangman && hangman");
        }
         
        else if (command == "exit")
        {
            break;
        }
        else
        {
            cout << "Invalid command." << endl;
        }
    }
    return 0;
}