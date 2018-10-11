
//  David Thompson
//  CS 2401
//  Project 5

//  home.h file, parnet and child .h files, not too confusing

#ifndef HOME_H
#define HOME_H

#include <iostream>
#include <fstream>
#include <string>
class Home
{
	public:
		virtual void input (std::istream& ins) = 0;

		virtual void output (std::ostream& outs) = 0;


	private:

};

class doghouse:public Home
{
	public:
		doghouse(double width = 0, double length = 0, double height = 0, char R = 'N', std::string mats = "None", int floors = 1);
		void input (std::istream& ins);
		void output (std::ostream& outs);

	private:
	
		double width, length, height;    //dimensions of the dog house
		char R;                       //roof access (Y or N)
		std::string mats;          //material of the house
		int floors;                 //number of floors
};

class cave:public Home
{
	public:
		cave(std::string loc = "None", double alt=0, double sqft=0,char hidden = 'N');

		void input (std::istream& ins);
		void output (std::ostream& outs);
	private:

		std::string loc;   //mountain or hill cave
		double alt;	   //alitude
		double sqft;          //square feet
		char hidden;       //hidden entrance or not
};

class aquarium:public Home
{
	public:
		aquarium(double width = 0, double length = 0, double height = 0,std::string water = "NONE", int fishes = 0, std::string veg = "NONE");

		void input (std::istream& ins);
		void output (std::ostream& outs);
	private:
	
		double width, length, height;  //dimensions
		std::string water;             //type of water
		int fishes;                    //number of roomates
		std::string veg;               //level of vegetaion in tank
};

class nest:public Home
{
	public:
		nest(double rad=0,std::string mat="NONE",std::string loca="NONE", char wint= 'N');

		void input (std::istream& ins);
		void output (std::ostream& outs);
	private:
		
		double rad;       //radius
		std::string mat;  //material to be made out of
		std::string loca;  //location of the nest
		char wint;	  //winter ready or not
};

class burrow:public Home
{
	public:
		burrow(double rar=0, double depth=0,char watr = 'N',int exits = 0);
	
		void input (std::istream& ins);
		void output (std::ostream& outs);
	private:
		
		double rar;   //radius
		double depth; //feet underground
		char watr;    //water access
		int exits;    //number of exits/entrances

};


#endif
