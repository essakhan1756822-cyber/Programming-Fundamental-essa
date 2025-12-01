#include <iostream>
using namespace std;
int main()
{
	
	int b1,l1; 
	cout<<"Enter your Account Balance : $";
	cin>>b1;
	cout<<"Enter Loyality Status (1 for loyal,0 for not loyal ) : ";
	cin>>l1; 
	
	string result1= (b1<=100)? "Low Balance Account": (b1<=500)? "Standard Account":"Premium Account";
	cout<<"Account Type : "<<result1<<endl;
	
	string result2= (b1>200 && l1==1)? "Eligible":"Not eligible";
	cout<<"Special Offer Eligibilty Status : "<<result2<<endl;
	
	return 0;
}
