#include <iostream>
#include <string>
#include <iomanip>
#include "Movie.h"

using namespace std;


int main()
{

    Movie movieInfo1("The Man Who Killed Hitler and Then the Bigfoot ", "R "); //This is a real movie
    Movie movieInfo2("Pulp Fiction ", "R ");
    Movie movieInfo3("Tortoise and the Hare ", "E ");
    cout << "---------------------------------------------------------------------------------------------------------" << endl;

    movieInfo1.add_user_rating();
    movieInfo2.add_user_rating();
    movieInfo3.add_user_rating();

    movieInfo1.movieInfo();
    movieInfo2.movieInfo();
    movieInfo3.movieInfo();
    //cout << movieInfo1.getMovieName() << "\t" << movieInfo1.getMpaaRating() << "\t" << endl;
    //cout << movieInfo2.getMovieName() << "\t" << movieInfo2.getMpaaRating() << "\t" << endl; 
    //cout << movieInfo3.getMovieName() << "\t" << movieInfo3.getMpaaRating() << "\t" << endl;
    cout << "---------------------------------------------------------------------------------------------------------" << endl;

    cout << "Print Movie Info" << endl; 
    cout << "Movie 1: " << movieInfo1.get_avg_rating() << endl;
    cout << "Movie 2: " << movieInfo2.get_avg_rating() << endl;
    cout << "Movie 3: " << movieInfo3.get_avg_rating() << endl;

    return 0;
}