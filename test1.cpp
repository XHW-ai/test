#include<iostream>
using namespace std;
class Student
{
public:
	void setdata();
	void showdata();
private:
	int _num;
	char _name[10];
	int _age;
};
void Student::setdata()     //输入数据的函数 
{
	int num, age; 
	char name[10];
	do
	{
		cout << "num=";
		cin >> num;
		if (num < 0)cout << "data error!\n";
	} while (num < 0);
	cout << "name=";
	cin>>name;
	do
	{
		cout << "age=";
		cin >> age;
		if (age <= 0)cout << "data error!\n";
	} while (age <= 0);
	_num = num;
	for(int i=0;i<10;i++)
	    _name[i]=name[i]; 
	_age = age;
}
void Student::showdata()    //输出数据的函数 
{
	cout <<"num : "<<_num <<endl;
	cout <<"name : "<<_name <<endl;
	cout <<"age : "<<_age <<endl;
}
int main()
{
	Student student1, student2;    //构造两个对象 
	cout << "please enter the data of student1:\n";
	student1.setdata();
	cout << "please enter the data of student2:\n";
	student2.setdata();
	cout << "student1:\n";
	student1.showdata();
	cout << "student2:\n";
	student2.showdata();
	return 0;
}
