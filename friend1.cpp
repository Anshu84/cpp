#include<iostream>
#include<string>
using namespace std;
class maxu;
class maximum
{
	private:
		int len;
	public:
		maximum():len(45) {
		}
		friend int showlen(maximum,maxu);
};
class maxu{
	private:
		int num;
		public:
			maxu():num(60){
			}
			friend int showlen(maximum,maxu);
};
int showlen(maximum b,maxu c)    //defintion
{
	int z=max(b.len,c.num);
	return z;
}
int main()
{
	maximum m;
	maxu m1;
	cout<<showlen(m,m1);
	return 0;
}
