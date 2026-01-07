#include<iostream>
using namespace std;
int main()
{
	int Level;
	int Years;
	int Remote;
	double Basic_Salary=0;
	double Bonus=0;
	double Remote_Bonus=0;
	double Gross_Salary=0;
	double tax=0;
	double Final_Salary=0;
	cout<<"Enter Job Level(1-4):";
	cin>>Level;
	cout<<"Years of Experience:";
	cin>>Years;
	cout<<"Working in Remote Area?(1 for Yes : 0 for No)";
	cin>>Remote;
	if(Level==1)
	{
		Basic_Salary=120000;
	}
	else if(Level==2)
	{
		Basic_Salary=85000;
	}
	else if(Level==3)
	{
		Basic_Salary=60000;
	}
	else if(Level==4)
	{
		Basic_Salary=60000;
	}
	else
	{
		cout<<"Invalid Job Level";
	}
	
	
	if(Years>=15)
	{
		Bonus=0.25*Basic_Salary;
	}
	else if(Years>=10)
	{
		Bonus=0.15*Basic_Salary;
	}
	else if(Years>=5)
	{
		Bonus=0.10*Basic_Salary;
	}
	else
	{
		Bonus=0;
	}
	
	if(Remote==1)
	Remote_Bonus=0.08*Basic_Salary;
	   
	Gross_Salary=Basic_Salary+Bonus+Remote_Bonus;
	
	if(Gross_Salary>=150000)
	{
		tax=0.30*Gross_Salary;
	}
	else if(Gross_Salary>=100000)
	{
		tax=0.20*Gross_Salary;
	}
	else if(Gross_Salary>=60000)
	{
		tax=0.10*Gross_Salary;
	}
	else
	{
		tax=0;
	}
	
	Final_Salary=Gross_Salary-tax;
	
	cout<<"\n----- Salary Details -----\n";
	cout<<"Basic Salary:"<<Basic_Salary<<endl;
	cout<<"Experience Bonus:"<<Bonus<<endl;
	cout<<"Remote Area Bonus:"<<Remote_Bonus<<endl;
	cout<<"Gross Salary:"<<Gross_Salary<<endl;
	cout<<"Tax Deduction:"<<tax<<endl;
	cout<<"Final Salary:"<<Final_Salary<<endl;
	return 0;
}