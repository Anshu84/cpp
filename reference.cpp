#include<iostream>
#include<string>
using namespace std;
void sum(int &);
void sum(int ,int);
void sum(int &i)
{
	cout<<"sum="<<i<<endl;
}
void sum(int j,int i=5)
{
	cout<<"sum="<<j+i<<endl;
}
int main()
{
	sum(12);
	return 0;
}
