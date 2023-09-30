#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415
class Shape{
	public:
		int len , width , height , radius ,side;
		int square()
		{
			cin>>side;
			return pow(side , 2);
		}
		int square_circum()
		{
			cin>>side;
			return 2*side;
		}
		float circle()
		{
			cin>>radius;
			return PI * pow(radius , 2);
		}
		float circle_circum()
		{
			cin>>radius;
			return PI * radius;
		}
};
int main()
{
	int c = 1;
	Shape s;
	while(c == 1)
	{	
		int choice;
		cout<<"1 FOR SQUARE AREA"<<"2 FOR SQUARE PERIMETER"<<"3 FOR CIRCLE AREA"<<endl;
		cin>>choice;
		if(choice == 1)
		{
			cout<<s.square()<<endl;
		}
		else if(choice == 2)
		{
			cout<<s.square_circum()<<endl;
		}
		else if(choice == 3)
		{
			cout<<s.circle()<<endl;
		}
		else
		{
			cout<<"WRONG"<<endl;
		}
		cout<<"1/0"<<endl;
		cin>>c;
	}
	return 0;
}
