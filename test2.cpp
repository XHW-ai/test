#include<iostream>
using namespace std;
enum Year{year0=2010,year1,year2,year3,year4,year5};        //���ö�� 
enum Month{Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};     //�·�ö�� 
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
	do                                    //������� 
	{
		cout<<"year=";
		cin>>_year;
		if(_year>year5||_year<year0)
		cout<<"data error!"<<endl;
	}while(_year>year5||_year<year0);
	do                                    //�����·� 
	{
		cout<<"month="; 
		cin>>_month;
		if(_month>Dec||_month<Jan)
		cout<<"data error!"<<endl;
	}while(_month>Dec||_month<Jan);
	int t=1;
	while(t==1)
	{
		cout<<"day=";                     //�������� 
		cin>>_day;
		
		if(_day>0)
		{
			switch(_month)
			{
				case Feb:                 //2�������ж� 
				        {
						if(_year==year2&&_day<=29)t=0;
				        else if(_day<=28)t=0;
			            else cout<<"data error!"<<endl;
			            break;
						}
			    case Jan:                  //���������ж�          
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
		        default:                    //С�������ж� 
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
		cout<<"hour=";                   //ʱ���ж� 
		cin>>_hour;
		if(_hour<0||_hour>=24)cout<<"data error!"<<endl;
	}while(_hour<0||_hour>=24);
	do
	{
		cout<<"minute=";                 //�����ж� 
		cin>>_minute;
		if(_minute<0||_minute>=60)cout<<"data error!"<<endl;
	}while(_minute<0||_minute>=60);
	do
	{
		cout<<"second=";                 //�����ж� 
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
	cout<<year<<"��"<<month<<"��"<<day<<"��"<<hour<<"ʱ"<<minute<<"��"<<second<<"��"<<endl;
}
int main()
{
	Timedata time;              //����һ������ 
	cout<<"please enter the data:\n";
	time.settime();
	cout<<"the time is ";
	time.showtime();
	return 0;
}
