#include<iostream>
#include<string>
using namespace std;
class address
{
	public :
		string nm,state,city;
		address(string nm,string state,string city)
		{
			this->nm=nm;
			this->state=state;
			this->city=city;
		}
};
class employee{
	private:
		address* add;//has a realationahip collection as a add
		public:
			int id;
			float sal;
			employee(int empid,float empsal,address* add)
			{
				id=empid;
				sal=empsal;
				this->add=add;//data set
			}
			void show()
			{
				cout<<"employee id="<<id<<endl;
				cout<<"employee salary="<<sal<<endl;
				cout<<"employee name="<<add->nm<<endl;
				cout<<"employee city="<<add->city<<endl;
				cout<<"employee state="<<add->state<<endl;
			}
};
int main()
{
	string name,empcity,empstate;
	cout<<"enter employee name="<<endl;
	cin>>name;
	cout<<"enter employee state="<<endl;
	cin>>empstate;
	cout<<"enter employee city="<<endl;
	cin>>empcity;
	address ad=address(name,empstate,empcity);
	employee obj=employee(1101,25000.5,&ad);//calling entity
	obj.show();//
	return 0;
}
