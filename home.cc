
//  David Thompson
//  CS 2401
//  Project 5

// home.cc file, baiscally just input and output implementaiton of the child classes

#include "home.h"
#include <string>
#include <iostream>

using namespace std;


doghouse::doghouse(double w, double l, double h, char S , string m, int f)
{
	width = w;
	length = l;
	h = height;
	R= S;
	m = mats;
	f = floors;
}

void doghouse::input (istream& ins)
{
	if(&ins == &cin)
	{
		cout<<"\nLets build you a doghouse!";
		cout<<"\nFirst the dimensions (in feet)";
		cout<<"\nWidth: ";
	}
	ins>>width;
	
	if(&ins == &cin)
	{
		cout<<"\nLength: ";
	}
	ins>>length;
	
	if(&ins == &cin)
	{
		cout<<"\nHeigth: ";
	}
	ins>>height;

	if(&ins == &cin)
	{
		cout<<"\nRoof access on your dog house (Y/N):";
	}
	ins>>R;

	if(&ins == &cin)
	{
		cout<<"\nMaterial of the house: Brick, Wood, or Cement: ";
	}
	while(ins.peek() == '\n')
	{
		ins.ignore();
	}
	getline(ins,mats);

	if(&ins == &cin)
	{
		cout<<"\nFinally how many floors do you want: ";
	}

	ins>>floors;

}

void doghouse::output (ostream& outs)
{
	outs<<"D";
	
	if(&outs == &cout)
	{
		cout<<"oghouse information\n";
	}
	outs<<endl;
	
	if(&outs == &cout)
	{
		cout<<"Width (ft): ";
	}
	outs<<width<<endl;

	if(&outs == &cout)
	{
		cout<<"Length (ft): ";
	}
	outs<<length<<endl;

	if(&outs == &cout)
	{
		cout<<"Height (ft): ";
	}
	outs<<height<<endl;

	if(&outs == &cout)
	{
		cout<<"Roof access? (Y/N)  ";
	}
	outs<<R<<endl;

	if(&outs == &cout)
	{
		cout<<"Material of the doghouse: ";
	}
	outs<<mats<<endl;

	if(&outs == &cout)
	{
		cout<<"Number of floors: ";
	}
	outs<<floors<<endl;
}

cave::cave(string l, double a, double ro,char h)
{
	loc= l;
	alt = a;
	sqft = ro;
	hidden = h;
}

void cave::input (istream& ins)
{
	if(&ins == &cin)
	{
		cout<<"\nLets build you a Cave!";
		cout<<"\nFirst where would you like your cave, on a Hill or Mountain:";
	}
	while(ins.peek() == '\n')
	{
		ins.ignore();
	}
	getline(ins,loc);
	
	if(&ins == &cin)
	{
		cout<<"\nAltitude (in feet): ";
	}
	ins>>alt;
	
	if(&ins == &cin)
	{
		cout<<"\nSquare footage: ";
	}
	ins>>sqft;

	if(&ins == &cin)
	{
		cout<<"\nWould you like the entrance to  be hidden (Y or N):";
	}
	ins>>hidden;

}
	
void cave::output (ostream& outs)
{
	outs<<"C";
	
	if(&outs == &cout)
	{
		cout<<"ave information\n";
	}
	outs<<endl;
	
	if(&outs == &cout)
	{
		cout<<"Loaction: ";
	}
	outs<<loc<<endl;

	if(&outs == &cout)
	{
		cout<<"Altitude (ft): ";
	}
	outs<<alt<<endl;

	if(&outs == &cout)
	{
		cout<<"Square feet: ";
	}
	outs<<sqft<<endl;

	if(&outs == &cout)
	{
		cout<<"Hidden entrance? (Y/N)  ";
	}
	outs<<hidden<<endl;

}

aquarium::aquarium(double w, double l, double h,std::string wat, int fish, std::string v)
{
	width=w;
	length = l;
	height =h;
	water = wat;
	fishes = fish;
	veg = v;
}

void aquarium::input (istream& ins)
{
	if(&ins == &cin)
	{
		cout<<"\nLets build you an aquarium!";
		cout<<"\nFirst the dimensions (in feet)";
		cout<<"\nWidth: ";
	}
	ins>>width;
	
	if(&ins == &cin)
	{
		cout<<"\nLength: ";
	}
	ins>>length;
	
	if(&ins == &cin)
	{
		cout<<"\nHeigth: ";
	}
	ins>>height;

	if(&ins == &cin)
	{
		cout<<"\nFresh or saltwater:";
	}
	while(ins.peek() == '\n')
	{
		ins.ignore();
	}
	getline(ins,water);

	if(&ins == &cin)
	{
		cout<<"\nHow many fish roomates in the tank:";
	}
	
	ins>>fishes;

	if(&ins == &cin)
	{
		cout<<"\nWhat level of vegetation (low,medium,high):";
	}

	while(ins.peek() == '\n')
	{
		ins.ignore();
	}
	getline(ins,veg);
}
	
void aquarium::output (ostream& outs)
{
	outs<<"A";
	
	if(&outs == &cout)
	{
		cout<<"quarium information\n";
	}
	outs<<endl;
	
	if(&outs == &cout)
	{
		cout<<"Width (ft): ";
	}
	outs<<width<<endl;

	if(&outs == &cout)
	{
		cout<<"Length (ft): ";
	}
	outs<<length<<endl;

	if(&outs == &cout)
	{
		cout<<"Height (ft): ";
	}
	outs<<height<<endl;

	if(&outs == &cout)
	{
		cout<<"Type of water:  ";
	}
	outs<<water<<endl;

	if(&outs == &cout)
	{
		cout<<"Number of fishmates: ";
	}
	outs<<fishes<<endl;

	if(&outs == &cout)
	{
		cout<<"Level of vegetation: ";
	}
	outs<<veg<<endl;
}

nest::nest(double r,string m,string lo, char wi)
{
	rad = r;
	mat = m;
	loca = lo;
	wint = wi;
}

void nest::input (istream& ins)
{
	if(&ins == &cin)
	{
		cout<<"\nLets build you a nest!";
		cout<<"\nFirst the radius (in feet)";
		cout<<"\nRadius: ";
	}
	ins>>rad;
	
	if(&ins == &cin)
	{
		cout<<"\nMaterial (Birch, Maple, or Oak): ";
	}
	
	while(ins.peek() == '\n')
	{
		ins.ignore();
	}
	getline(ins,mat);

	
	if(&ins == &cin)
	{
		cout<<"\nLocation of nest (Tree, Bush, or CLiffside): ";
	}
	while(ins.peek() == '\n')
	{
		ins.ignore();
	}
	getline(ins,loca);

	if(&ins == &cin)
	{
		cout<<"\nDo you want your nest to be winter ready (Y/N): ";
	}
	
	ins>>wint;
}

void nest::output (ostream& outs)
{
	outs<<"N";
	
	if(&outs == &cout)
	{
		cout<<"est information\n";
	}
	outs<<endl;
	
	if(&outs == &cout)
	{
		cout<<"Radius (ft): ";
	}
	outs<<rad<<endl;

	if(&outs == &cout)
	{
		cout<<"Material: ";
	}
	outs<<mat<<endl;

	if(&outs == &cout)
	{
		cout<<"Location: ";
	}
	outs<<loca<<endl;

	if(&outs == &cout)
	{
		cout<<"Winter ready? (Y/N)  ";
	}
	outs<<wint<<endl;

}

burrow::burrow(double r, double de,char war,int exi)
{
	rar = r;
	depth = de;
	watr = war;
	exits = exi;
}
	
void burrow::input (istream& ins)
{
	if(&ins == &cin)
	{
		cout<<"\nLets build you a burrow!";
		cout<<"\nFirst the radius (in feet)";
		cout<<"\nRadius: ";
	}
	ins>>rar;
	
	if(&ins == &cin)
	{
		cout<<"\nDepth of the burrow (in feet):";
	}
	
	ins>>depth;

	
	if(&ins == &cin)
	{
		cout<<"\nDo you want access to water from the burrow (Y/N): ";
	}

	ins>>watr;

	if(&ins == &cin)
	{
		cout<<"\nNumber of access holes to the burrow: ";
	}
	
	ins>>exits;
}

void burrow::output (ostream& outs)
{
	outs<<"B";
	
	if(&outs == &cout)
	{
		cout<<"urrow information\n";
	}
	outs<<endl;
	
	if(&outs == &cout)
	{
		cout<<"Radius (ft): ";
	}
	outs<<rar<<endl;

	if(&outs == &cout)
	{
		cout<<"Depth (ft): ";
	}
	outs<<depth<<endl;

	if(&outs == &cout)
	{
		cout<<"Water access (Y/N): ";
	}
	outs<<watr<<endl;

	if(&outs == &cout)
	{
		cout<<"Number of access holes:  ";
	}
	outs<<exits<<endl;
}



























