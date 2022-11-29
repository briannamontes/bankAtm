#include <iostream>
#include <cstdlib>

using namespace std;

//menu function to display options

void AccountMenu() {
	cout << "Account Menu: " << endl;
	cout << "0.Quit program" << endl;
	cout << "1.Display Account Information" << endl;
	cout << "2.Add a deposit to an account" << endl;
	cout << "3.Withdraw from an account" << endl;
}

//main function 
//displays options picked

int main()
{
	int choice;
	double balance;
	int accountId = 0;

	string name;
	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter the balance: ";
	cin >> balance;

	//while loop
	do {
		AccountMenu();
		//your choice you pick
		cout << "Your choice: ";
		cin >> choice;
		system("cls");

		//choice 1-3
		//outputs with the choices
		switch (choice) {
		case 1: cout << "Account Id: " << accountId << " Name: " << name << " Balance: " << "$" << balance << endl; break;

		case 2: cout << "Amount to deposit: ";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			break;
		
		case 3: cout << "Amount to withdraw: ";
			double withdrawAmount;
			cin >> withdrawAmount;
			if (withdrawAmount <= balance)
				balance -= withdrawAmount;
			//anything else will say not enough
			else
				cout << "not enough money" << endl;
			break;
		}
	} while (choice != 0);

	system("pause>0");
}