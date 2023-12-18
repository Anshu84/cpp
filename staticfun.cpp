#include<iostream>
#include<string>
using namespace std;
class acount
{
	public:
		int acc;
		string name;
		static float roi;
	
acount(int acc,string name)
{
	this->acc=acc;
	this->name=name;
}
void show()
{
	cout<<"account number="<<acc<<endl;
	cout<<"account holder name="<<name<<endl;
	cout<<"rate of interset="<<roi<<endl;
}
};
float acount::roi=6.5;
int main()
{
	int n;
	string nm;
	cout<<"enter the account number"<<endl;
	cin>>n;
	cout<<"enter account holder name"<<endl;
	cin>>nm;
	acount a(n,nm);
	a.show();
	return 0;
}
