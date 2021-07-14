#include <iostream>
#include <string>
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

CANDIDATE candidates[100];
int numberOfCandidates = 0;

void registerForm()
{
    cout << "Enter the number of candidates: ";
    cin >> numberOfCandidates;
    for (int i = 0; i < numberOfCandidates; i++)
    {
        candidates[i].id = i;
        cout << "Enter your userName: ";
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
        if (numberOfCandidates >= 2)
        {
            cout << endl << "Enter data for the  next candidate: " << endl;
            cout << endl;
        }
        else
        {
            cout << "\n\nThank you for your registration!\n" << endl;
        }
    }
}
void loginForm()
{
    string userName;
    string password;
    int loginAttempt = 0;

        for (int i = 0; i < numberOfCandidates; i++)
        {
            cout << "Please enter your user name: ";
            cin >> userName;
            cout << "Please enter your user password: ";
            cin >> password;

            if (userName == candidates->username, password == candidates->password)
            {
                cout << "Welcome " << userName << "!" << endl;
                break;
            }
            else
            {
                cout << "Invalid login attempt. Please try again.\n" << '\n';
                loginAttempt++;
            }
        }
       

        cout << "\nThank you for logging in.\n";
   
}





int main()
{




    int choice;
    bool gameOn = true;
    while (gameOn != false) {
        cout << "                               **************************************************             " << endl;
        cout << "                               |     1 - Register.                              |             " << endl;
        cout << "                               |     2 - login.(You have to register first!)    |             " << endl;
        cout << "                               |     3 - View all candidates.                   |             " << endl;
        cout << "                               |     4 - Exit.                                  |             " << endl;
        cout << "                               **************************************************             " << endl;
        cout << endl;
        cout << "Enter your choice and press enter: ";



        cin >> choice;



        switch (choice)
        {
        case 1:
            registerForm();


            break;
        case 2:
            loginForm();
         
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