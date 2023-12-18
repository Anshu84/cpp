#include<iostream>
#include<string>
using namespace std;
//class bee;
//class cat;
class Ani
{
	public:
		int a;
		void get()
		{
			cout<<"enter the value of a="<<endl;
			cin>>a;
		}
};
class bee:public Ani{
		public:
			int b;
			void get_d()
		{
			cout<<"enter the value of b="<<endl;
			cin>>b;
		}
};
class cat:public bee{
		public:
			int c;
			void get_da()
		{
			cout<<"enter the value of c="<<endl;
			cin>>c;
		}
		void show()
		{
			int sum;
			sum=a+b+c;
			cout<<"sum of value a b c ="<<sum<<endl; 
		}
};
int main()
{
	cat ca;
	ca.get();
	ca.get_d();
	ca.get_da();
	ca.show();
	return 0;
}
