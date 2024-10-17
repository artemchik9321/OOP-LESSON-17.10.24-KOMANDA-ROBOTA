#pragma once
class Movie
{ //режсер
  //жанр
  //дата

	char* name;
	double time;
	int year;
	char* director;
	char* genre;
	char* rdata;


public:
	Movie(); //constructor by default
	Movie(const char* n, double t, int y, const char* d, const char* g, const char* r); // costructor by params
	Movie(const Movie & obj); //copy constructor
	~Movie(); // destructor
	void Print();

};

