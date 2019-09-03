#include<iostream>
#include<string>
using namespace std;
int update_balance(string,float,float);
int update_balance(string,double,float);
int main()
{
	string ch;
	float dol = 0 , balance = 10000;
	cout << "Exit with 0\n";
	do{
	cout << "Your balance = " << balance << endl;
	cout << "Input command (1 or withdraw , 2 deposit) : ";
	cin >> ch;
	balance = update_balance(ch, dol ,balance);
	}
	while(ch != "0");
}
int update_balance(string x,float y,float z)
{
	cout << "Input amount : ";
	cin >> y;
	if(x == "1")
	{
		z=z-y;
	}
	else if(x == "2")
	{
		z=z+y;
	}
	return(z);
}