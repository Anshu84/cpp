#include<iostream>
#include<string>
using namespace std;
class employee
{
	private:
		float salary;
		int empid;
		string gmail;
		string name;
	public:
		employee(float salary,int empid,string gmail,string name) 
		{
			this->salary=salary;
			this->empid=empid;
			this->gmail=gmail;
			this->name=name;
		}
		friend void show(employee);
};
void show(employee e)    //defintion
{
 cout<<"salary="<<e.salary<<endl;
 cout<<"employee id="<<e.empid<<endl;
 cout<<"employee gmail="<<e.gmail<<endl;
 cout<<"employee name="<<e.name<<endl;

}
int main()
{
	employee eob=employee(20000.05,1432,"nm@gmail.com","Anshu");
	show(eob);
	return 0;
}
