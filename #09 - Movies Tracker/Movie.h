#ifndef MOVIE_H
#define MOVIE_H
#include<string>

class Movie
{
    private:
        std::string name;
        double rating;
        int watched;

    public:
        Movie(std::string name, double rating, int watched);
        ~Movie();
        Movie(const Movie &source);

        void set_name(std::string name) {this->name = name;}
        std::string get_name() const {return name;}

        void set_rating(double rating) {this->rating = rating;}
        double get_rating() const {return rating;}

        void set_watched(int watched) {this->watched = watched;}
        int get_watched() const {return watched;}

        void increment_watched() {++watched;}
        void display() const;
};

#endif // MOVIE_H
