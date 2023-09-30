#include<bits/stdc++.h>
using namespace std;
typedef class MyClass{
	int a = 2;
	public:
		MyClass()//default
		{
			int a = 10;
			cout<<"HELLO THE PROGRAM HAS STARTED"<<endl;
		}
		MyClass(int x)//parameterized(int a , int b)
		{
			a += x;
		}
		MyClass(MyClass &aa)//copy
		{
			cout<<"COPY CONSTRUCTOR CALLED"<<endl;
			cout<<aa.a<<endl;
		}
		void display()
		{
			cout<<a<<endl;
		}
}cl;
int main()
{
	cl m(2);
	cl m1;
	m.display();
	m1.display();
	cl m2(m1);
	return 0;
}
