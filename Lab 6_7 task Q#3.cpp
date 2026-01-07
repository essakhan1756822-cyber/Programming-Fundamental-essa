#include<iostream>
using namespace std;
int main()
{
	int Salary;
	int Service_Years;
	double Bonus=0;
	cout<<"Current Salary:";
	cin>>Salary;
	cout<<"Years of Service:";
	cin>>Service_Years;
	if(Service_Years>=15)
	{
	  Bonus=Salary*0.15;
	  Salary+=Bonus;
	  cout<<"Bonus:"<<Bonus<<endl;
	  cout<<"Salary after additional payment:"<<Salary;	
	}
	else if(Service_Years>=10 && Service_Years<15)
	{
		Bonus=Salary*0.10;
		Salary+=Bonus;
		cout<<"Bonus:"<<Bonus<<endl;
		cout<<"Salary after additional payment:"<<Salary;
	}
	else if(Service_Years>=5 && Service_Years<10)
	{
		Bonus=Salary*0.05;
		Salary+=Bonus;
		cout<<"Bonus:"<<Bonus<<endl;
		cout<<"Salary after additional payment:"<<Salary;
	}
	else
	{
		cout<<"Not Eligible for Bonus"<<endl;
		cout<<"Bonus:"<<Bonus<<endl;
		cout<<"Updated Salary is:"<<Salary;
	}
	return 0;
}