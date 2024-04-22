#ifndef MOVIE_H
#define MOVIE_H

#include <string>

using namespace std;

//  A1: The movie name
class Movie
{
private:
    string movieName;
    string mpaaRating;
    int *ratings; // a. Use a pointer variable to an array in order to store A3 – A7.
    int *rating;

    /***********************************************************************************************************************************************/
public:
    Movie();                           // b. Provide the default constructor
    Movie(string name, string rating); // c. Provide an argument constructor with a movie name and MPAA rating as arguments. ??????????????????
    ~Movie();                          // d. Provide a destructor that deallocates a memory in the heap reserved by an object

    string getMovieName(); // e. Provide an accessor and mutator function for the movie name and MPAA rating, respectively
    void setMovieName(string name);

    string getMpaaRating() const; // mutator
    void setMpaaRating(string rating);

    void add_user_rating(); /*f. Provide a member function named add_user_rating that satisfies the requirements below takes
                                          an integer as a parameter argument, which indicates a rate (from a user)
                                          verify that the parameter is a number between 1 and 5 If the parameter is valid,
                                          increment the number of people rating the movie that matches the value of the parameter
                                          argument. For example, if 3 is the value of the parameter variable,
                                          then the number of people that rated the movie as 3 should be incremented by 1*/

    double get_avg_rating(); /* g. Provide a member function named get_avg_rating that returns the average rateing of a movie.
                                       When you display the average rating of a movie, a floating-point number with two decimal
                                       places must be shown on the console */
    // extra functions
    void movieInfo();
};

#endif