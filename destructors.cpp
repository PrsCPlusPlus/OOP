#include<bits/stdc++.h>
using namespace std;
int c = 0;
class Counter{
//	int count = 0;
	int* b = &c;
	public:
		Counter(){
			++*b;
			cout<<"Count Value : "<<*b<<endl;
		}
		~Counter(){
			--*b;
			cout<<"New Count Value : "<<*b<<endl;
		}
};
int main()
{
	int n;
	cin>>n;
	Counter c[n];
	return 0;
}
