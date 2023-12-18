#include<iostream>
#include<string>
using namespace std;
class teacher{
	public:
		void show()
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
	hf.show();
	return 0;
}
