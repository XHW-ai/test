#include<iostream>
using namespace std;
enum Year{year0=2010,year1,year2,year3,year4,year5};        //年份枚举 
enum Month{Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};     //月份枚举 
class Timedata
{
	public:
		void settime();
		void showtime();
	private:
		int year,month,day,hour,minute,second;
};
void Timedata::settime()
{
	int _year,_month,_day,_hour,_minute,_second;
	do                                    //设置年份 
	{
		cout<<"year=";
		cin>>_year;
		if(_year>year5||_year<year0)
		cout<<"data error!"<<endl;
	}while(_year>year5||_year<year0);
	do                                    //设置月份 
	{
		cout<<"month="; 
		cin>>_month;
		if(_month>Dec||_month<Jan)
		cout<<"data error!"<<endl;
	}while(_month>Dec||_month<Jan);
	int t=1;
	while(t==1)
	{
		cout<<"day=";                     //设置天数 
		cin>>_day;
		
		if(_day>0)
		{
			switch(_month)
			{
				case Feb:                 //2月天数判断 
				        {
						if(_year==year2&&_day<=29)t=0;
				        else if(_day<=28)t=0;
			            else cout<<"data error!"<<endl;
			            break;
						}
			    case Jan:                  //大月天数判断          
			    case Mar:
			    case May:
			    case Jul:
			    case Aug:
			    case Oct:
			    case Dec:
			            {
						if(_day<=31)t=0;
			            else cout<<"data error!"<<endl;
			            break;
						}
		        default:                    //小月天数判断 
		        		{
						if(_day<=30)t=0;
		    	        else cout<<"data error!"<<endl;
					    }
			}
		}
		else cout<<"data error!"<<endl;
	}
	do
	{
		cout<<"hour=";                   //时钟判断 
		cin>>_hour;
		if(_hour<0||_hour>=24)cout<<"data error!"<<endl;
	}while(_hour<0||_hour>=24);
	do
	{
		cout<<"minute=";                 //分钟判断 
		cin>>_minute;
		if(_minute<0||_minute>=60)cout<<"data error!"<<endl;
	}while(_minute<0||_minute>=60);
	do
	{
		cout<<"second=";                 //秒钟判断 
		cin>>_second;
		if(_second<0||_second>=60)cout<<"data error!"<<endl;
	}while(_second<0||_second>=60);
	year=_year;
	month=_month;
	day=_day;
	hour=_hour;
	minute=_minute;
	second=_second; 
}
void Timedata::showtime()
{
	cout<<year<<"年"<<month<<"月"<<day<<"日"<<hour<<"时"<<minute<<"分"<<second<<"秒"<<endl;
}
int main()
{
	Timedata time;              //构造一个对象 
	cout<<"please enter the data:\n";
	time.settime();
	cout<<"the time is ";
	time.showtime();
	return 0;
}
