#include<bits/stdc++.h>
using namespace std;
class Date{
	string  v[14] = {"Mon" , "Tues" , "Wed" , "Thurs" , "Fri" , "Sat" , "Sun" , "Mon" , "Tues" , "Wed" , "Thurs" , "Fri" , "Sat"  , "Sun"};
	int day_month[12] = {31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};
	string months[12] = {"Jan" , "Feb" , "March" , "April" , "May" , "June" , "July" , "Aug" , "sept" , "Oct" , "Nov" , "Dec"};
	int day , month , year;
	public:
		Date()
		{
			cout<<"ENTER DATE : ";
			cin>>day;
			cout<<"ENTER MONTH : ";
			cin>>month;
			cout<<"ENTER YEAR : ";
			cin>>year;
		}
		bool is_1_leap(int dd , int mm , int yy)
		{
			
			if(yy%100 != 0 && yy % 4 == 0 || yy % 400 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool is_leap()
		{
			
			if(year%100 != 0 && year % 4 == 0 || year % 400 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void display_month()
		{
			cout<<months[month-1]<<endl;
		}
		int day_of_year()
		{
			if(is_leap())
			{
				int t = 366;
//				cout<<"TOTAL DAYS ARE "<<t<<endl;
				day_month[1] = 29;
				int d = 0;
				for(int i = 0  ; i <= month - 2 ; ++i)
				{
					d = d + day_month[i];
				}
				d+= day;
				return (d - 1);
			}
			else
			{
				int t1 = 365;
//				cout<<"TOTAL DAYS ARE: "<<t1<<endl;
				day_month[1] = 28; 
//				day_month[1] = 29;
				int d = 0;
				for(int i = 0  ; i <= month - 2 ; ++i)
				{
					d = d + day_month[i];
				}
				d+= day;
				return (d - 1);
			}
		}
		void display_weekday()
		{
			string day_1;
			cout<<"ENTER THE FIRST DAY OF THE YEAR : ";
			cin>>day_1;
			int index;
			for(int i = 0 ; i < 14 ; ++i)
			{
				if(v[i] == day_1)
				{
					index = i;
					break;
				}
			}
			int day = day_of_year();
			int rem = day % 7;
			cout<<"THE DAY IS : "<<endl;
			if(rem == 0)
			{
				if(index!=0)cout<<v[index-1]<<endl;
				else(cout<<v[12])<<endl;
			}
			else
			{
				cout<<v[index + rem]<<endl;
			}
		}
		int day_of_1_year(int dd , int mm , int yy)
		{
			if(is_1_leap(dd , mm , yy))
			{
				int t = 366;
//				cout<<"TOTAL DAYS ARE "<<t<<endl;
				day_month[1] = 29;
				int d = 0;
				for(int i = 0  ; i <= mm - 2 ; ++i)
				{
					d = d + day_month[i];
				}
				d+= day;
				return (d - 1);
			}
			else
			{
				int t1 = 365;
//				cout<<"TOTAL DAYS ARE: "<<t1<<endl;
				day_month[1] = 28; 
//				day_month[1] = 29;
				int d = 0;
				for(int i = 0  ; i <= mm - 2 ; ++i)
				{
					d = d + day_month[i];
				}
				d+= day;
				return (d - 1);
			}
		}
		void display_age()
		{
			int yy , dd , mm;
			cout<<"ENTER THE BIRTH YEAR : ";
			cin>>yy;
			int years = abs(yy - year);
			cout<<"ENTER THE MONTH : ";
			cin>>mm;
			int mont = abs(month - mm);
			cout<<"ENTER THE DAY : ";
			cin>>dd;
			int day = day_of_year();
			cout<<"YEARS IS "<<years<<endl;
			cout<<"MONTHS IS : "<<mont<<endl;
			int bday = day_of_1_year(dd , mm , yy);
			cout<<"DAYS IS : "<<abs(bday - day);
		}
};
int main()
{
	Date d1;
	if(d1.is_leap())
	{
		cout<<"LEAP YEAR"<<endl;
	}
	else
	{
		cout<<"NOT LEAP YEAR"<<endl;
	}
	d1.display_month();
	cout<<d1.day_of_year()<<endl;
	d1.display_weekday();
	d1.display_age();
	return 0;
}
