#include<iostream>
#include<string>
using namespace std;
//class bee;
//class cat;
class Ani
{
	protected:
			int a;
	public:
		void get()
		{
			cout<<"enter the value of a="<<endl;
			cin>>a;
		}
};
class bee:public Ani{
	protected:
		int b;
		public:
			void get_d()
		{
			cout<<"enter the value of b="<<endl;
			cin>>b;
		}
};
class cat{
	protected:
		int c;
		public:
			void get_da()
		{
			cout<<"enter the value of c="<<endl;
			cin>>c;
		}
};
class D:public bee,public cat{
	protected:
		int d;
		public:
			void show()
			{
			get();
			get_d();
			get_da();
			cout<<"sum of a b c ="<<a+b+c<<endl;	
			}
};
int main()
{
	D obj;
	obj.show();
	return 0;
}
