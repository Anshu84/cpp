#include<iostream>
#include<string>
using namespace std;
//class bee;
//class cat;
class shape
{
	public:
		string name;
		int sides;
		shape()
		{
		
		}
};
class triangle:public shape
{
		public:
			int base,hei;
			void get_d()
		{
			cout<<"enter the value of base="<<endl;
			cin>>base;
			cout<"enter the value of height="<<endl;
			cin>>hei;
			cout<"base="<<base<<endl;
			cout<<"height ="<<hei<<endl;
			cout<<"area="<<(0.5*base*hei)<<endl;
		}
};
class square:public shape
{
		public:
			int height;
			void get_da()
		{
			cout<<"enter the value of height="<<endl;
			cin>>height;
			cout<<"height="<<height<<endl;
			cout<<"area of square="<<height*height<<endl;
		}
};
int main()
{
	triangle t;
	t.get_d();
	cout<<endl;
	square s;
	s.get_da();
	return 0;
}
