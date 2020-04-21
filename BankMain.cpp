#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
using namespace std;
#include "Bank.h"





int main()
{
	//initializing variables to be passed to functions
	int userInput = 0;
	int initialAmount = 0;
	int monthlyDeposit = 0;
	int annualInterest = 0;
	int years = 0;
	//while the user doesn't enter -1, the loop will run
	while (userInput != -1)
	{
		//a better way of making an instance instead of ex: Bank* Menu = new Bank();
		auto Menu = std::make_unique<Bank>();
		//instance of object calls function to display menu
		Menu->display();
		//if a key is pressed, clear the screen and ask the user for input on each individual column
		if (_kbhit()) {
			system("cls");
			cout << "Initial Investment Amount: ";
			cin >> userInput;
			initialAmount = userInput;

			cout << "Initial Monthly Deposit: ";
			cin >> userInput;
			monthlyDeposit = userInput;
			cout << "Annual Interest: ";
			cin >> userInput;
			annualInterest = userInput;
			cout << "Number of Years: ";
			cin >> userInput;
			years = userInput;
			cout << "Please press any key to continue...";

			/*I wanted this part of the code to check if user keys were pressed again, but for some reason, it would not work. 
			But when I flip the if statement to a !_kbhit(), it worked and I'm not too sure why*/
			if (!_kbhit()) {
				//clear screen
				system("cls");
				//Makes an instance of Bank and runs the deposit Calculator function
				auto Calc = std::make_unique<Bank>(years, initialAmount, monthlyDeposit, annualInterest);
				Calc->depositCalculator();
				//Makes an instance of Bank and runs the no deposit Calculator function
				auto Calc2 = std::make_unique<Bank>(years, initialAmount, monthlyDeposit, annualInterest);
				Calc2->noDepositCalculator();

				//Asks the user if they would like to continue or quit
				cout << endl;
				cout << endl;
				cout << endl;
				cout << setw(70) << right << setfill(' ') << "What would you like to do?" << endl;
				cout << setw(70) << right << setfill(' ') << "(1)Input different values?" << endl;
				cout << setw(52) << right << setfill(' ') << "(2)Quit?" << endl;
				cin >> userInput;
				//if the user goes with option 2, the program will quit out of the while loop
				if (userInput == 2) {
					break;
				}
				//if the user goes with option 1, the program will continue at the start of the loop
				else if (userInput == 1) {
					system("cls");
					continue;
					

				}
				
			}


			else {
				//CPU waits for around 3 seconds, clears screen and exits function
				Sleep(3000);
				system("cls");
				break;
			}
		}


		else {
			//CPU waits for around 3 seconds, clears screen
			Sleep(1000);
			system("cls");
			

		}
	}

	



	
}
