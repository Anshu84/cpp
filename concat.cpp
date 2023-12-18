#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char nm[7],last[20];
	cout<<"enter the first name"<<endl;
	cin.getline(nm,7);
	cout<<"enter last name"<<endl;
	cin.getline(last,20);
	strcat(nm,last);
	cout<<"after concentation="<<nm<<endl;
	return 0;
}
