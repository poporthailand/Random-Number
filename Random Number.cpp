#include <iostream>
#include<time.h>
#include<string>
using namespace std;
int num;
string checkNum(int);


int main()
{	
	int n , count = 0 ;
	srand(time(NULL));
	num = rand () % 10 + 1;

	cout << "### Welcome to guessing number game ###\n";
	cout << "Secret number has been chosen\n";

	do{
	cout << "Guess the number (1 to 10) : ";
	cin >> n ;
	cout << checkNum(n);
	count++;
	}while (n!=num);

	cout << "The secret number is : " << num << endl;
	cout << "You made " << count << " guesses\n";
	return 0;
}

string checkNum(int n)
{
	string a;
	if (n < num)
		a = "The secret number is lower\n";
	else if (n > num)
		a = "The secret number is higher\n";
	else if (n = num)
		a = "Congratulations !!!\n";
	return a;
}
