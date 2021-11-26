// Calculator App C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


float calcFun(int choice, float num1, float num2);
string opWord(int choice2);


int main()
{
    int choice;
    float num1, num2;
    cout << "Welcome to the C++ Calculator App made by JMART306" << endl << endl;
    cout << "Type in the number of the operation you want to do!\n";
    cout << "1- ADDITION( + )" << endl;
    cout << "2- SUBTRACTION( - )" << endl;
    cout << "3- MULTIPLICATION( * )" << endl;
    cout << "4- DIVISION( / )" << endl;
    cout << "5- EXPONENT( ^ )" << endl;
    cout << "What operation do you want to do? :";
    cin >> choice;  //
    cout << "\nWhat 2 numbers do you want to " << opWord(choice) << " with eachother?" << endl;
    cout << "Number #1:";
    cin >> num1;
    cout << "Number #2:";
    cin >> num2;
    cout << "Your answer is " << calcFun(choice, num1, num2) << "!" << endl;


}

// CALCULATION ALGORITHIM/////// CHOOSES OPERATION BASED ON CHOICE INTEGER
float calcFun(int choice,float num1,float num2) 
{
    switch (choice) {
    case 1:
        return num1 + num2; // ADD
    case 2:
        return num1 - num2; // SUBTRACT
    case 3:
        return num1 * num2; // MULTIPLY
    case 4:
        return num1 / num2; // DIVIDE
    case 5:
        return pow(num1,num2); // EXPONENT
    }

}

// DYNAMIC WORDING OF SENTENCE ON LINE 25 BASED ON OPERATOR CHOSEN
string opWord(int choice2) {
    switch (choice2) {
    case 1:
        return "add";
    case 2:
        return "subtract";

    case 3:
        return "multiply";

    case 4:
        return "divide";

    case 5:
        return "exponent";
    }
}