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
			void get()
		{
			cout<<"enter the value of b="<<endl;
			cin>>b;
			cout<<"value of a and b="<<a<<b<<endl;
		}
};
int main()
{
	bee b;
	b.get();
	return 0;
}
