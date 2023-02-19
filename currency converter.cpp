//Question 2
#include<iostream>
using namespace std;
int main()
{
	float Rs, USD, pound, euros;
	cout<<"Enter rupees: ";
	cin>>Rs;
	USD=Rs *0.0042;
	cout<<"The equivalent amount of entered Rs in dollars= "<<USD;
	pound= Rs * 0.0038;
	cout<<"\nThe equivalent amount of entered Rs in pound sterling= "<<pound;
	euros= Rs* 0.0043;
	cout<<"\nThe equivalent amount of entered Rs in euros= "<<euros;
}
