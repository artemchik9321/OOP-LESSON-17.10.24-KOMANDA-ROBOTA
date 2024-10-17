// OOP LESSON 17.10.24 KOMANDA ROBOTA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Movie.h"
using namespace std;

int main()
{
	/*Movie obj1("Avatar", 2.10, 2012);
	obj1.Print();*/

	Movie arr[3]
	{ 
		{"Avatar", 2.10, 2009, "James Cameron", "Sci-Fi", "December 18, 2009"},
		{"Titanic", 3.10, 1997, "James Cameron", "Drama", "December 19, 1997"},
		{"Bad Boys", 2.40, 1998, "Michael Bay", "Action", "April 7, 1995"} 
	};

	for (int i = 0; i < 3; i++)
	{
		arr[i].Print();
	}

	Movie* arrptr[2]
	{ new Movie("Avatar", 2.10, 2009, "James Cameron", "Sci-Fi", "December 18, 2009"), new Movie("Bad Boys", 2.40, 1998, "Michael Bay", "Action", "April 7, 1995") };

	for (int i = 0; i < 2; i++)
	{
		delete arrptr[i];
	}
}