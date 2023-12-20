#include <iostream>
int main ()
{
		int a[5]={1,2,3,4,5};
		for(int k=0;k<5;k++)
	std::cout<< a[k] <<"\t";
	std::cout<< "\nthis is the default array for reference\n";
	int p,n,c;
	int t=0;

		std::cout<<"Enter the integer element value to be added\n";
	std::cin>>n;
	std::cout<<"Enter the index location where you want this added\n";
	std::cin>>p;
	for(int i=4;i>=p;i--)
	a[i+1]= a[i];
	a[p]=n;
	std::cout<< "The array after updating element is displayed as\n";
	if(p>5)
	{
	for(int j=0;j<=p;j++)
	std::cout<< a[j] <<"\t";
}
else
for (int j=0;j<6;j++)
std::cout<< a[j] <<"\t";
	std::cout<<"\n(any random numbers between allotted numbers are garbage values and should be ignored)";
return 0;
}
