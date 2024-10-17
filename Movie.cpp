#include "Movie.h"
#include <iostream>
using namespace std;

Movie::Movie()
{
	name = nullptr;
	time = 0.0;;
	year = 0;
	director = nullptr;
	genre = nullptr;
	rdata = nullptr;
}

Movie::Movie(const char* n, double t, int y, const char* d, const char* g, const char* r)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);

	time = t;
	year = y;

	director = new char[strlen(d) + 1];
	strcpy_s(director, strlen(d) + 1, d);

	genre = new char[strlen(g) + 1];
	strcpy_s(genre, strlen(g) + 1, g);

	rdata = new char[strlen(r) + 1];
	strcpy_s(rdata, strlen(r) + 1, r);

}

Movie::Movie(const Movie& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);

	time = obj.time;
	year = obj.year;

	director = new char[strlen(obj.director) + 1];
	strcpy_s(director, strlen(obj.director) + 1, obj.director);

	genre = new char[strlen(obj.genre) + 1];
	strcpy_s(genre, strlen(obj.genre) + 1, obj.genre);

	rdata = new char[strlen(obj.rdata) + 1];
	strcpy_s(rdata, strlen(obj.rdata) + 1, obj.rdata);

	

}

Movie::~Movie()
{
	delete[] name;
	delete[] director;
	delete[] genre;
	delete[] rdata;
}

void Movie::Print()
{
	cout << "name: " << name << "\t"
		<< "time: " << time << "\t"
		<< "year: " << year << "\t"
		<< "director: " << director << "\t"
		<< "genre: " << genre << "\t"
		<< "data: " << rdata << endl;


}
