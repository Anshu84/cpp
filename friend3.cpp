#include<iostream>
#include<string>
using namespace std;
class maxi
{
	private:
		int x,y,z;
	public:
		void input(){
			cout<<"enter first number"<<endl;
			cin>>x;
			cout<<"enter second number"<<endl;
			cin>>y;
			cout<<"enter third number"<<endl;
			cin>>z;
		}
		friend void show(maxi);
};
void show(maxi m)   //defintion
{
	if(m.x>m.y&&m.x>m.z)
	{
		cout<<"x is greater"<<m.x<<endl;
	}
	else if(m.y>m.x&&m.y>m.z)
	{
		cout<<"y is greater"<<m.y<<endl;
	}
	else{
		cout<<"z is greater ="<<m.z<<endl;
	}
}
int main()
{
	maxi m1;
	m1.input();
	show(m1);
	return 0;
}
