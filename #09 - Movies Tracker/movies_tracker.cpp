#include<iostream>
#include "Movies.h"
using namespace std;

void increment_watched(Movies &movie_db, string name);
void add_movie(Movies &movie_db, string name, double rating, int watched);

void increment_watched(Movies &movie_db, string name)
{
    if (movie_db.increment_watched(name))
    {
        cout<<name<<" watch count incremented."<<endl;
    }
    else
    {
        cout<<name<<" not found in database."<<endl;
    }
}

void add_movie(Movies &movie_db, string name, double rating, int watched)
{
    if (movie_db.add_movie(name, rating, watched))
    {
        cout<<name<<" added to the database."<<endl;

    }
    else
    {
        cout<<name<<" already exists in the database"<<endl;
    }
}


int main()
{
    Movies movie_db;
    movie_db.display();

    add_movie(movie_db, "Inception", 9.5, 20);
    add_movie(movie_db, "The Dark Knight", 9.6, 22);
    add_movie(movie_db, "Ready Player One", 7.2, 16);
    movie_db.display();

    add_movie(movie_db, "Ready Player One", 7.2, 16);
    add_movie(movie_db, "Rampage", 6.6, 10);
    movie_db.display();

    increment_watched(movie_db, "Inception");
    increment_watched(movie_db, "Rampage");
    movie_db.display();

    increment_watched(movie_db, "Finding Nemo");
    movie_db.display();

    return 0;
}
