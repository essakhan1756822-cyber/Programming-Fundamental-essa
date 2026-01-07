#include<iostream>
using namespace std;
int main()
{
	double USD,PKR_Rate,Pound_Rate,Euro_Rate,Conversion;
	int Choice;
	cout<<"Enter Amount in USD:";
	cin>>USD;
	cout<<"Enter Choice (1 for USD to PKR, 2 for USD to Pound, 3 for USD to Euro):\t";
	cin>>Choice;
	switch(Choice)
	{
		case 1: cout<<"USD to PKR"<<endl;
		cout<<"Enter PKR Rate:";
		cin>>PKR_Rate;
		Conversion=USD*PKR_Rate;
		cout<<"Converted Amount:"<<Conversion;
		break;
		case 2: cout<<"USD to Pound"<<endl;
		cout<<"Enter Pound Rate:";
		cin>>Pound_Rate;
		Conversion=USD*Pound_Rate;
		cout<<"Converted Amount:"<<Conversion;
		break;
		case 3: cout<<"USD to Euro"<<endl;
		cout<<"Enter Euro Rate:";
		cin>>Euro_Rate;
		Conversion=USD*Euro_Rate;
		cout<<"Converted Amount:"<<Conversion;
		break;
		default: cout<<"Invalid Choice.";
		break;
	}
	return 0;
}