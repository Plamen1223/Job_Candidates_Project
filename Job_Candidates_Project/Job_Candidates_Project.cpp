#include <iostream>
using namespace std;
struct CANDIDATE
{
	int id;
	string name;
	int age;
	string gender;
	
};

int main()
{
	/*CANDIDATE candidates[100];
	int counter = 0;
	cout << "Enter the number of candidates ";
	cin >> counter;
	for (size_t i = 0; i < counter; i++)
	{	
		candidates->id = i;
		cout << "Enter a Name ";
		cin >> candidates[i].name;
		cout << "Enter age ";
		cin >> candidates[i].age;
		cout << "Enter a gender(male or female) ";
		cin >> candidates[i].gender;
	}*/
	
	int choice;
	bool gameOn = true;
	while (gameOn != false) {
		cout << "*******************************\n";
		cout << " 1 - Register.\n";
		cout << " 2 - login.\n";
		cout << " 3 - View all candidates.\n";
		cout << " 4 - Exit.\n";
		cout << " Enter your choice and press enter: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "game start!\n";
			*CANDIDATE candidates[100];
			int counter = 0;
			cout << "Enter the number of candidates: \n";
			cin >> counter;
			for (size_t i = 0; i < counter; i++)
			{
				candidates->id = i;
				cout << "Enter a Name: \n";
				cin >> candidates[i].name;
				cout << "Enter age: \n";
				cin >> candidates[i].age;
				cout << "Enter a gender(male or female): \n ";
				cin >> candidates[i].gender;
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

