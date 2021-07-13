#include <iostream>
#include <string>
//#include "bib.h"
using namespace std;

struct CANDIDATE
{
	int id;
	string firstName;
	string secondName;
	string username;
	string password;
	string address;
	string education;
	int yearsOfExpirience;
	string gender;
	
};

int readInt()
{
	int a;



	//loops until the user enters an integer
	while (!(cin >> a))
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Incorrect value! Enter correct number." << endl;
	}



	return a;
}

int main()
{
	
	CANDIDATE candidates[100];
	int counter = 0;
	cout << "Enter the number of candidates: ";
	cin >> counter; 
	
	
	int choice;
	bool gameOn = true;
	while (gameOn != false) {
		cout << "       *********************************        " << endl;
		cout << "       |     1 - Register.             |        " << endl;
		cout << "       |     2 - login.                |        " << endl;
		cout << "       |     3 - View all candidates.  |        " << endl;
		cout << "       |     4 - Exit.                 |        " << endl;
		cout << "       *********************************        " << endl;
		cout << endl;
		cout << "Enter your choice and press enter: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			for (int i = 0; i < counter; i++)
	{	
		candidates[i].id= i;
		cout << "Enter your username: "; 
		cin.ignore();
		getline(cin, candidates[i].username);
		cout << "Enter a Firstname: ";
		getline(cin, candidates[i].firstName);
		cout << "Enter your Secondname: ";
		getline(cin, candidates[i].secondName);
		cout << "Enter your password: ";
		getline(cin, candidates[i].password);
		cout << "Enter your address: ";
		getline(cin, candidates[i].address);
		cout << "Enter what type of education you have: ";
		getline(cin, candidates[i].education);
		cout << "Enter your years of expirience: ";
		candidates[i].yearsOfExpirience = readInt();
	}
			break;
		case 2:
			cout << "Story so far....\n";
			// rest of code here
			break;
		case 3:
			cout << "Ahahah, you really think I will help you?\n";
			// rest of code here
			break;
		case 4:
			cout << "End of Program.\n";
			gameOn = false;
			break;
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}

	}
	return 0;
}

