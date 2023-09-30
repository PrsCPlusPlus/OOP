#include<bits/stdc++.h>
using namespace std;
class Cube
{
	
	public:
		double len , width , height;
		Cube()
		{
			cin.precision(10);
			cin>>len>>width>>height;
		}
		void volume()
		{
			cout<<setprecision(10);
			cout<<len*width*height<<endl;
		}
		void area()
		{
			double a = 2*((len*width)+(width*height)+(height*len));
			cout<<setprecision(10);
			cout<<a<<endl;
		}
};
int main()
{
	Cube c;
	c.volume();
	c.area();
	return 0;
}
