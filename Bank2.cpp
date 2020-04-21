#include <iostream>
#include <iomanip>;
using namespace std;

#include "Bank.h"
//Initializes private member values to local members
Bank::Bank(int t_time, int t_startBalance, int t_deposit, int t_interestRate) {
	this->m_years = t_time;
	this->m_openingAmount = t_startBalance;
	this->m_depositedAmount = t_deposit;
	this->m_interest = t_interestRate;


}

void Bank::depositCalculator() {
	//initializes new local variable
	double interestAccrued = 0.00;
	//Displays the report for monthly deposits
	cout << setw(100) << right << setfill(' ') << "Balance and Interest With Additional Monthly Deposits";
	cout << endl;
	cout << setw(150) << left << setfill('*') << "*";
	cout << endl;



	cout << setw(23) << right << setfill(' ') << "Year";
	cout << setw(55) << right << setfill(' ') << "Year End Balance";
	cout << setw(70) << right << setfill(' ') << "Year End Earned Interest";
	cout << endl;
	cout << setw(150) << left << setfill('*') << "*";
	cout << endl;
	//Loops through the years to compound interest with monthly deposits
	for (int i = 1; i <= this->m_years; ++i) {
		//Makes all decimal numbers only show to the second digit after the decimal
		cout << fixed << setprecision(2);
		//Displays the report for monthly deposits
		cout << setw(22) << right << setfill(' ') << i;
		//Calculates the total, interest and closing balance with these formulas
		m_total = m_depositedAmount + m_openingAmount;
		interestAccrued = ((m_openingAmount + m_depositedAmount) * ((m_interest / 100) / 12));
		m_closingBalance = m_total + (interestAccrued * 12);
		m_openingAmount = m_closingBalance;
		//Displays the report for monthly deposits
		cout << setw(45) << right << setfill(' ') << "$" << m_closingBalance;
		cout << setw(65) << right << setfill(' ') << "$" << interestAccrued * 12;
		cout << endl;



	}

	cout << endl;


}


void Bank::noDepositCalculator() {

	double interestAccrued = 0.00;

	//Displays the report for no monthly deposits
	cout << setw(100) << right << setfill(' ') << "Balance and Interest Without Additional Monthly Deposits";
	cout << endl;
	cout << setw(150) << left << setfill('*') << "*";
	cout << endl;



	cout << setw(23) << right << setfill(' ') << "Year";
	cout << setw(55) << right << setfill(' ') << "Year End Balance";
	cout << setw(70) << right << setfill(' ') << "Year End Earned Interest";
	cout << endl;
	cout << setw(150) << left << setfill('*') << "*";
	cout << endl;
	//Loops through the years to compound interest without monthly deposits
	for (int i = 1; i <= this->m_years; ++i) {
		//Makes all decimal numbers only show to the second digit after the decimal
		cout << fixed << setprecision(2);
		//Displays the report for no monthly deposits
		cout << setw(22) << right << setfill(' ') << i;
		// Calculates the total, interest and closing balance with these formulas
		// zeros are where monthly deposits would have been
		m_total = 0 + m_openingAmount;
		interestAccrued = ((m_openingAmount + 0) * ((m_interest / 100) / 12));
		m_closingBalance = m_total + (interestAccrued * 12);
		m_openingAmount = m_closingBalance;
		//Displays the report for no monthly deposits
		cout << setw(45) << right << setfill(' ') << "$" << m_closingBalance;
		cout << setw(65) << right << setfill(' ') << "$" << interestAccrued * 12;
		cout << endl;



	}



}

//Displays menu, so that user can press a key to enter their choice
void Bank::display() {
	cout << setw(65) << left << setfill('*') << "*";
	cout << endl;
	cout << setw(35) << right << setfill(' ') << "Data Input";
	cout << endl;
	cout << setw(65) << left << setfill('*') << "*";
	cout << endl;
	cout << setw(30) << right << setfill(' ') << "Initial Investment Amount:";
	cout << endl;
	cout << setw(20) << right << setfill(' ') << "Monthly Deposit:";
	cout << endl;
	cout << setw(20) << right << setfill(' ') << "Annual Interest:";
	cout << endl;
	cout << setw(20) << right << setfill(' ') << "Annual Interest:";
	cout << endl;
	cout << setw(20) << right << setfill(' ') << "Number of Years:";
	cout << endl;
	cout << endl;
	cout << setw(50) << right << setfill(' ') << "Please press any key to continue...";
	cout << endl;


}
