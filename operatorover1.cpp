#include<iostream>
using namespace std;
class sum{
	private:
		int nu;
	public:
		sum(int x){
			nu=x;
		}
		void operator +(sum se);
		void display()
		{
			cout<<"number is ="<<nu<<endl;
		}
};
void sum::operator +(sum se)
{
	int z;
	z=nu+se.nu;
	cout<<"value is="<<z<<endl;
}
int main()
{
int d,e;
cout<<"enter the 1st number="<<endl;
cin>>d;
cout<<"enter the 2nd value ="<<endl;
cin>>e;
sum s(d);
sum s1(e);
s+s1;
	s.display();
	return 0;
}

