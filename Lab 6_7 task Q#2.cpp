#include<iostream>
using namespace std;
int main()
{
	int units;
	const float Allowed_Units=200;
	const float Normal_Rate=5.0;
	const float High_Rate=10.0;
	const float Tax_Rate=0.29;
	const float Maintenance_Fee=39.0;
	float Bill;
	cout<<"Enter Electricity units consumed:";
	cin>>units;
	if(units<=Allowed_Units)
	{
		Bill=units*Normal_Rate;
	}
	else
	{
		Bill=units*High_Rate;
		Bill=Bill+(Bill*Tax_Rate);
	}
	 Bill+=Maintenance_Fee;
	 cout<<"Maintenance Fee: $"<<Maintenance_Fee<<endl;
	 cout<<"Total Bill: $"<<Bill;
	return 0;
}