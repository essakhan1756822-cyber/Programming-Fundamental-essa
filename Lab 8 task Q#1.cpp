#include<iostream>
using namespace std;
int main()
{
	int category,item,Quantity,Total_Price,Discount,Final_Amount;
	double price=0;
	cout<<"====== Shoping System ======\n";
	cout<<"Categories: \n";
	cout<<"1. Electronics\n2. Clothing\n3. Groceries\n";
	cout<<"\nSelect Category(1-3): ";
	cin>>category;
	switch(category)
	{
		case 1: cout<<"\n--- Electronics ---\n"<<endl;
		cout<<"1. Laptop ($1000)\n2. Smartphone ($700)\n3. Headphones ($150)\n";
		cout<<"\nSelect item: ";
		cin>>item;
		switch(item)
		{
			case 1: cout<<"\n--Laptop($1000)--\n"<<endl;
			price=1000;
			cout<<"Enter Quantity: ";
			cin>>Quantity;
			Total_Price=price*Quantity;
			break;
			case 2: cout<<"\n--Smartphone($700)--\n"<<endl;
			price=700;
			cout<<"Enter Quantity: ";
			cin>>Quantity;
			Total_Price=price*Quantity;
			break;
			case 3: cout<<"\n--Headphone($150)--\n"<<endl;
			price=150;
			cout<<"Enter Quantity: ";
			cin>>Quantity;
			Total_Price=price*Quantity;
			break;
			default: cout<<"Invalid Item";
			return 0;
		}
		break;
		case 2: cout<<"\n--- Clothing ---\n"<<endl;
		cout<<"1. Jacket ($120)\n2. T-Shirt ($40)\n3. Jeans($60)\n";
		cout<<"\nSelect item: ";
		cin>>item;
		switch(item)
		{
			case 1: cout<<"\n--Jacket($120)--\n"<<endl;
			price=120;
			cout<<"Enter Quantity: ";
			cin>>Quantity;
			Total_Price=price*Quantity;
			break;
			case 2: cout<<"\n--T-Shirt($40)--\n"<<endl;
			price=40;
			cout<<"Enter Quantity: ";
			cin>>Quantity;
			Total_Price=price*Quantity;
			break;
			case 3: cout<<"\n--Jeans($60)--\n"<<endl;
			price=60;
			cout<<"Enter Quantity: ";
			cin>>Quantity;
			Total_Price=price*Quantity;
			break;
		    default: cout<<"Invalid Item";
			return 0;
		}
		break;
		case 3: cout<<"\n--- Groceries ---\n"<<endl;
		cout<<"1. Milk 1L ($2)\n2. Bread ($3)\n3. Eggs Dozen ($5)\n";
		cout<<"\nSelect item: ";
		cin>>item;
		switch(item)
		{
			case 1: cout<<"\n--Milk(1 Litre-$2)--\n"<<endl;
			price=2;
			cout<<"Enter Quantity: ";
			cin>>Quantity;
			Total_Price=price*Quantity;
			break;
			case 2: cout<<"\n--Bread(1 Loaf-$3)--\n"<<endl;
			price=3;
			cout<<"Enter Quantity: ";
			cin>>Quantity;
			Total_Price=price*Quantity;
			break;
			case 3: cout<<"\n--Eggs(1 Dozens-$5)--\n"<<endl;
			price=5;
			cout<<"Enter Quantity: ";
			cin>>Quantity;
			Total_Price=price*Quantity;
			break;
			default: cout<<"Invalid Item";
			return 0;
		}
		break;
			default: cout<<"Invalid Category";
			return 0;
	}
	if(Total_Price<100)
			{
				Discount=0;
				Final_Amount=Total_Price-Discount;
			}
	else if (Total_Price>=100 && Total_Price<=500)
			{
				Discount=Total_Price*0.10;
				Final_Amount=Total_Price-Discount;
			}
	else
			{
				Discount=Total_Price*0.20;
				Final_Amount=Total_Price-Discount;
			}
			
			cout<<"\n========== Invoice ==========\n";
			cout<<"\nItem Price: $"<<price;
			cout<<"\nQuantity: "<<Quantity;
			cout<<"\nTotal Price: $"<<Total_Price;
			cout<<"\nDiscount: $"<<Discount;
			cout<<"\nAmount Payable: $"<<Final_Amount;
			cout<<"\n\n=============================\n";
	return 0;
}