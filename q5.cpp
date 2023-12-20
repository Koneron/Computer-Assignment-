#include<iostream>
#include <climits>
void pa (int a[], int x) // i am creating a new function as a learning practice
{
	for (int i=0;i<x;i++)
{	int c= a[i];
	std::cout<< c <<"\t";}
}
int main()
{
int	a[10] = {5,19,15,17,99,77};
	std::cout<<"\n the original array will be displayed as \n";
	 pa (a,6);
 int t = INT_MIN;
 for(int j=0; j<6; j++)
 {
  t= std::max (t,a[j]);
  for (int k=0; k<6; k++)
  {if (a[j]> a[k])
  	std::swap (a[j], a[k]);
  	else
  	continue;}
}
std::cout<<"\nthe array in descending order will be displayed as \n";
 pa (a,6);
return 0;
}
