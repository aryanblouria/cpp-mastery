#include<iostream>
#include "Movie.h"

Movie::Movie(std::string name, double rating, int watched)
    : name {name}, rating {rating}, watched {watched} {}

Movie::~Movie() {}

Movie::Movie(const Movie &source)
    : Movie {source.name, source.rating, source.watched} {}

void Movie::display() const
{
    std::cout<<"Name: "<<name<<", Rating: "<<rating<<", No. of times watched: "<<watched<<std::endl;
}
