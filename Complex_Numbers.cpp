#include<bits/stdc++.h>
using namespace std;
class Complex
{
	int real , imag;
	public:
		Complex()
		{
			cin>>real>>imag;
		}
		void show()
		{
			cout<<real<<" + "<<"i"<<imag<<endl;
		}
};
int main()
{
	Complex c;
	c.show();
	return 0;
}
