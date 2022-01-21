#include<iostream>
using namespace std;

int main()
{
	system("cls");
	int size;
	int *ptr; //pointer
	
	cout<<"Enter number of values you want to store (size of array):"<<endl;
	cin>>size;
	
	ptr = new int[size];
	cout<<"Enter values to be stired in the array"<<endl;
	for(int x=0;x<size;x++)
	{
		cin>>ptr[x];
	}
	cout<<"Values in the array are:"<<endl;
	for(int x=0;x<size;x++)
	{
		cout<<ptr[x]<<endl;	
	}
	system("pause");
	return 0;
}
