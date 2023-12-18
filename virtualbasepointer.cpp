#include<iostream>
#include<string>
using namespace std;
class teacher{
	public:
		virtual void show()
		{
			cout<<"teaching a class"<<endl;
		}
};
class housewife:public teacher{
	public:
		void show()
		{
			cout<<"washing clothes"<<endl;
		}
		
};
int main()
{
	housewife hf;
	teacher *t;
	t=&hf;
	t->show();
	return 0;
}
