#include <iostream> 
#include <string.h>
using namespace std;

int main ()
{
	int option;
	float number1, number2;
	int repeater=1;
	
	
	do {
		cout <<"Which operation you want to perform\n1. addition\n2. subtraction\n3. multiplication\n4. division\n5. press 0 to close the program\n";
		cin >> option;	
		
		bool valid = false;

		switch (option)
		{
			case 0:
				repeater=0;
			break;
			case 1:
				while (!valid)
			{
			valid = true; 
		
			cout <<"Give the first number\n";
			cin>>number1;


			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}

			cout <<"Give the second number\n";
			cin>>number2;
				
			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}
			}
				cout<<"The answer is ";
				cout<<number1 + number2;
				cout<<"\n";
				break;
			case 2:
				while (!valid)
			{
			valid = true; 
		
			cout <<"Give the first number\n";
			cin>>number1;


			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}

			cout <<"Give the second number\n";
			cin>>number2;
				
			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}}
				cout<<"The answer is ";
				cout<<number1 - number2;
				cout<<"\n";
				break;
			case 3:
				while (!valid)
			{
			valid = true; 
		
			cout <<"Give the first number\n";
			cin>>number1;


			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}	

			cout <<"Give the second number\n";
			cin>>number2;
				
			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}}
				cout<<"The answer is ";
				cout<<number1 * number2;
				cout<<"\n";
				break;
			case 4:
				while (!valid)
			{
			valid = true; 
		
			cout <<"Give the first number\n";
			cin>>number1;


			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}

			cout <<"Give the second number\n";
			cin>>number2;
				
			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}}
				if(number2==0)
				cout<<"Cannot be performed, the answer is undefined \n";
				else
				{
				cout<<"The answer is ";
				cout<<number1 / number2;
				cout<<"\n";
				}
				break;
			default:
				cout<<"Error, wrong operation was given, must be 1-4 or 0 to exit\n";
				break;
		
		
	}}
	while (repeater != 0);
	return 0;
}


