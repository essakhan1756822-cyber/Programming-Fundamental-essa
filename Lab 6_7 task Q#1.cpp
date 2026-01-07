#include<iostream>
using namespace std;
int main()
{
	float Temperature;
	cout<<"Current Temperature:";
	cin>>Temperature;
	if(Temperature>45)
	{
		cout<<"Alert! High Temperature\a";
	}
}