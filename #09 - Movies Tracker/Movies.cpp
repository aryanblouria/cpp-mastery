#include<iostream>
#include "Movies.h"

Movies::Movies() {}

Movies::~Movies() {}

bool Movies::add_movie(std::string name, double rating, int watched)
{
    for (const Movie &movie: movie_db)
    {
        if (movie.get_name() == name)
            return false;
    }
    Movie temp {name, rating, watched};
    movie_db.push_back(temp);
    return true;
}

bool Movies::increment_watched(std::string name)
{

    for (Movie &movie: movie_db)
    {
        if (movie.get_name() == name)
            movie.increment_watched();
            return true;
    }
    return false;
}

void Movies::display() const
{
    if (movie_db.size() == 0)
    {
        std::cout<<"No movies to display"<<std::endl;
    }
    else
    {
        for (const auto &movie: movies)
            movie.display();
    }
}
