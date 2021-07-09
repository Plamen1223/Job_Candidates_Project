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
	CANDIDATE candidates[100];
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
	}
	
}

