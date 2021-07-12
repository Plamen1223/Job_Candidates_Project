#include <iostream>
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
	int age;
	string gender;
	
};

int main()
{
	
	CANDIDATE candidates[100];
	int counter = 0;
	cout << "Enter the number of candidates: ";
	cin >> counter;
	/*for (size_t i = 0; i < counter; i++)
	{	
		candidates->id = i;		
		cout << "Enter your username: "; 
		cin >> candidates[i].username;
		cout << "Enter a Firstname: ";
		cin >> candidates[i].firstName;
		cout << "Enter your Secondname: ";
		cin >> candidates[i].secondName;
		cout << "Enter your password: ";
		cin >> candidates[i].password;
		cout << "Enter your address: ";
		cin >> candidates[i].address;
		cout << "Enter what type of education you have: ";
		cin >> candidates[i].education;
		cout << "Enter your years of expirience: ";
		cin >> candidates[i].yearsOfExpirience;
	}*/
	
	
	int choice;
	bool gameOn = true;
	while (gameOn != false) {
		cout << "*********************************\n";
		cout << "|     1 - Register.             |\n";
		cout << "|     2 - login.                |\n";
		cout << "|     3 - View all candidates.  |\n";
		cout << "|     4 - Exit.                 |\n";
		cout << "*********************************\n";
		cout << endl;
		cout << " Enter your choice and press enter: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			for (int i = 0; i < counter; i++)
	{	
		candidates->id = i;		
		cout << "Enter your username: "; 
		cin >> candidates[i].username;
		cout << "Enter a Firstname: \n";
		cin >> candidates[i].firstName;
		cout << "Enter your Secondname: ";
		cin >> candidates[i].secondName;
		cout << "Enter your password: ";
		cin >> candidates[i].password;
		cout << "Enter your address: ";
		cin >> candidates[i].address;
		cout << "Enter what type of education you have: ";
		cin >> candidates[i].education;
		cout << "Enter your years of expirience: ";
		cin >> candidates[i].yearsOfExpirience;
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

