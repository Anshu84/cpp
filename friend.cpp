#include<iostream>
#include<string>
using namespace std;
class container
{
	private:
		int len;
	public:
		container():len(0) {
		}
friend int showlen(container); //declaration
};
int showlen(container b)    //defintion
{
	b.len+=100;
	return b.len;
}
int main()
{
	container cnt;
	cout<<showlen(cnt);
	return 0;
}
