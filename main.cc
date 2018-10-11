
//  David Thompson
//  CS 2401
//  Project 5

// main.cc file, reads in from a file calles houses.txt
//               user can add homes of their liking
//               info is then saved back to the same file and program finishes running

#include <list>
#include <string>
#include <fstream>
#include <iostream>
#include "home.h"

int menu();  //simple menu 

using namespace std;

int main()
{
	Home *tmp;
	list<Home *> house;

	int total;     //read in from file. first number in the list
	int temp_total;  //used as controlling element in while loop to read in from file

	char h;  //how the program knows what house to make from the file

	ifstream fin;
	ofstream fout;

	fin.open("houses.txt"); 
	if (fin.fail())
	{
		cout << "Could not open input file." << endl; 
		return 1; 
	}
	fin>>total;    //read in total number of houses
	temp_total = total;   //used in the while loop 
	
	//loading from file
	
	while(temp_total != 0)
	{
		fin>>h;
		switch(h)
		{
			case 'D':
				tmp = new doghouse;
				tmp -> input(fin);
				house.push_back(tmp);
				break;
			case 'C':
				tmp = new cave;
				tmp -> input(fin);
				house.push_back(tmp);
				break;

			case 'A':
				tmp = new aquarium;
				tmp -> input(fin);
				house.push_back(tmp);
				break;
			case 'N':
				tmp = new nest;
				tmp -> input(fin);
				house.push_back(tmp);
				break;
			case 'B':
				tmp = new burrow;
				tmp -> input(fin);
				house.push_back(tmp);
				break;
			default:
				cout<<"\n\nInvalid\n\n";
		}
		temp_total--;
	}
	
	fin.close();

	// menu w/ user interaction
	cout<<"\nHello! We are Animal Home Construction Inc.\n";
	cout<<"We want to help you build a home for your beloved animal.";
	int ch;
	ch = menu();
	while(ch != 8)
	{
		if(ch == 1)
		{
			tmp = new doghouse;
			tmp -> input(cin);
			house.push_back(tmp);
			total++;
		}

		if(ch == 2)
		{
			tmp = new cave;
			tmp -> input(cin);
			house.push_back(tmp);
			total++;
		}
		
		if(ch == 3)
		{
			tmp = new aquarium;
			tmp -> input(cin);
			house.push_back(tmp);
			total++;
		}
		
		if(ch == 4)
		{
			tmp = new nest;
			tmp -> input(cin);
			house.push_back(tmp);
			total++;
		}
		
		if(ch == 5)
		{
			tmp = new burrow;
			tmp -> input(cin);
			house.push_back(tmp);
			total++;
		}
		
		if(ch == 6)
		{
			list <Home *>::iterator it;
			it = house.begin();
			while(it != house.end())
			{
				cout<<endl;
				(*it)->output(cout);
				it++;
			}
		}
		else if(ch == 7)
		{
			break;
		}
		ch = menu();
	}

	//file output to same input file

	fout.open("houses.txt");
	fout<<total<<endl;
	list<Home *>::iterator it;
	it = house.begin();
	while(it != house.end())
	{
		(*it) -> output(fout);
		it++;
	}
	fout.close();

	return 0;			
}

//basic menu
int menu()
{
	int ans;
	cout<<"\nEnter the number corresponding to your desired abode so we can start the building process.\n";
	cout<<"\n1.) Doghouse";
	cout<<"\n2.) Cave";
	cout<<"\n3.) Aquarium";
	cout<<"\n4.) Nest";
	cout<<"\n5.) Burrow";
	cout<<"\n6.) Print out all available information to the screen.";
	cout<<"\n7.) Save inoformation to file & exit program.\n";
	cin>>ans;
	return ans;
}
