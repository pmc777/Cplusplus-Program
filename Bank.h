#ifndef BANK_H
#define BANK_H
//Creates a class
class Bank {

public:
    //Creates a default constructor to initialize variables
    Bank(int t_time = 0, int t_startBalance = 0, int t_deposit = 0, int t_interestRate = 0);
    //Calculates w/ monthly deposit
    void depositCalculator();
    //Calculates w/o monthly deposit
    void noDepositCalculator();
    //Displays the user menu
    void display();
    


private:
    //Initializes all private variables to zero
    int m_years = 0;
    double m_openingAmount = 0.00;
    double m_depositedAmount = 0.00;
    double m_interest = 0.00;
    double m_total = 0.00;
    double m_closingBalance = 0.00;
};

#endif
