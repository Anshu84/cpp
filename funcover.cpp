#include<iostream>
using namespace std;
class calculator{
	public:
		int sum(int a,int b)
		{
			return a+b;
		}
		int sum(int a,int b,int c)
		{
			return a+b+c;
		}
};
int main()
{
	calculator cal;
	int d,e,f;
	cout<<"enter the 1st number="<<endl;
	cin>>d;
	cout<<"enter the 2nd number="<<endl;
	cin>>e;
	cout<<"enter the 3rd number="<<endl;
	cin>>f;
	cout<<cal.sum(d,e)<<endl;
	cout<<cal.sum(d,e,f)<<endl;
	return 0;
}

