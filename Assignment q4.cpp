#include <iostream>
int main()
{
	int N,p,t,r;
	std::cout<<"Enter any number to find the nearest prime number to it.(prime number will be less than the number)\n";
	std::cin>>N;
for(p=2;p<N-1; ++p)
{
	for (t=2;t<p-1;t++)
	{
		if (p%t==0)
		break;
	}
if (p%t==0)
continue;
r=p;
}
std::cout<< r;
return 0;
}
