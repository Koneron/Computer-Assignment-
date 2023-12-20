#include <iostream>
int main()
{ int choice;
	float l,d,p,v,m,c,S,Cl,Cd,Cm;
	std::cout<< "enter\n1 for determining Coeffecient of lift\n2 for determining Coeffecient of Drag\n3 for determining Coeffecient of Pitching moment\n";
	std::cin>> choice;
	switch(choice)
	{
		case 1:
		{
			std::cout<<"\nEnter the lift force\t";
			std::cin>>l;
			std::cout<<"\nEnter the Fluid density\t";
			std::cin>>p;
			std::cout<<"\nEnter the velocity \t";
			std::cin>>v;
			std::cout<<"\nEnter the Area of the wing\t";
			std::cin>>S;
			Cl= l/((0.5)*p*(v*v)*S);
			std::cout<<"\nThe coefficient of lift is\t" <<Cl;
			break;
		}
		case 2:
		{
				std::cout<<"\nEnter the Drag force\t";
			std::cin>>d;
			std::cout<<"\nEnter the Fluid density\t";
			std::cin>>p;
			std::cout<<"\nEnter the velocity\t";
			std::cin>>v;
			std::cout<<"\nEnter the Area of the wing\t";
			std::cin>>S;
			Cd= d/((0.5)*p*(v*v)*S);
			std::cout<<"\nThe coefficient of Drag is\t" <<Cd;
			break;
		}
		case 3:
		{
				std::cout<<"\nEnter the Moment force\t";
			std::cin>>m;
			std::cout<<"\nEnter the Fuid density\t";
			std::cin>>p;
			std::cout<<"\nEnter the velocity\t";
			std::cin>>v;
			std::cout<<"\nEnter the Area of the wing\t";
			std::cin>>S;
			std::cout<<"\nEnter the Length of the Chord\t";
			std::cin>>c;
			Cm= m/((0.5)*p*(v*v)*S*c);
			std::cout<<"\nThe coefficient of Pitching moment is\t" <<Cm;
			break;
	}
	default:
	{
		std::cout<<"\nInvalid value";
		break;
		}	
	}
}

