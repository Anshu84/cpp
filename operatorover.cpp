#include<iostream>
using namespace std;
class sum{
	private:
		int nu;
	public:
		sum(int x){
			nu=x;
		}
		void   operator ++()
		{
			nu++;
		}
		void display()
		{
			cout<<"number is ="<<nu<<endl;
		}
};
int main()
{
int d;
cout<<"enter the 1st number="<<endl;
cin>>d;
sum s(d);
	++s;
	s.display();
	return 0;
}

