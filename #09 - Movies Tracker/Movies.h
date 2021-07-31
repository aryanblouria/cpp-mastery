#ifndef MOVIES_H
#define MOVIES_H
#include<vector>
#include "Movie.h"

class Movies
{
    private:
        std::vector<Movie> movie_db;
    public:
        Movies();
        ~Movies();

        bool add_movie(std::string name, double rating, int watched);
        bool increment_watched(std::string name);
        void display() const;
};

#endif // MOVIES_H
