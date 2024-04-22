//define the prototype functions here
#include <iostream>
#include <string>
#include <iomanip>
#include "Movie.h"

using namespace std;


// b. default constructor                                    
Movie::Movie()                                                     

{
    //cout << "Movie() called" << endl; ////////////
    ratings = new int[5]{0};
}

// Argument constructor
Movie::Movie(string name, string rating) : movieName(name), mpaaRating(rating)    
{
    cout << "Movie(string name, string rating): " << getMovieName() << endl; 
    ratings = new int[5]{0};
}

// Accessor
string Movie::getMovieName()      // DONE 
{
    return movieName;
}
// Movie name Mutator
void Movie::setMovieName(string name)   //DONE
{
    movieName = name;
}

// Accessor getMpaa
string Movie::getMpaaRating() const     //DONE
{
    return mpaaRating;
}

// MPAA mutator
void Movie::setMpaaRating(string rating)    //DONE
{
    mpaaRating = rating;
}

void Movie::add_user_rating() 
{       //array that uses pointers
    int rating;

    for(int x = 0; x < 4; x++)
        {
        cout << "Enter your rating for " << getMovieName() << " using a scale from 1 to 5" << endl;
        cin >> rating;
    
        if (rating >= 1 && rating <= 5) 
            {
            ratings[rating - 1]++; // Increment the count for the corresponding rating
            }
        else
            {
            cout << "Error: Invalid Entry" << endl;
            }
        }
    // cout << "add_user_rating() called " << endl; 
}
void Movie::movieInfo()
{
    cout << getMovieName() << "     " << getMpaaRating() << "       " << fixed << setprecision(2) << get_avg_rating() << endl;
    //cout << "MovieInfo called " << endl; 
}

double Movie::get_avg_rating()
{
    int totalRatings = 0;
    int sum = 0;

    for (int i = 0; i < 4; ++i) 
        {
            totalRatings += ratings[i];
            sum += (i + 1) * ratings[i]; // Multiply each rating by its count and sum up
        }
        double average = 0.00;

    if (totalRatings != 0) 
        {
            return static_cast<double>(sum) / totalRatings;
        }
    return average;
}











// Destructor
Movie::~Movie()   // d. Provide a destructor that deallocates a memory in the heap reserved by an object    //DONE
{
    delete[] rating;
}