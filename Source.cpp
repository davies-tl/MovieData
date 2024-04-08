/*
Program name: MovieData.cpp
Programmer:  Tyler Davies
Date: 9-4-21
Version: 1.0
Description: This program uses a structure named MovieData to store a movie's title, director, year
             released, and running time in minutes. It creates two MovieData variables, stores values
             in their members, and passes each one, in turn, to a function that displays the information
             about the movie in a clearly formatted manner.
*/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct MovieData
{
    string title, director;
    short yearReleased, runtimeInMinutes;   //Could use int here, but the values will be small and short will save memory.
} movie1, movie2;                           //Creates two MovieData variables.

void PrintMovieInfo(MovieData movie);

int main()
{
    //Stores values in both MovieData variables' members.
    movie1 = { "The Wizard of Oz", "Victor Fleming", 1939, 112 };
    movie2 = { "The Shawshank Redemption", "Frank Darabont", 1994, 142 };

    //Passes each MovieData variable to the print function.
    PrintMovieInfo(movie1);
    PrintMovieInfo(movie2);
    
    exit(0);
}

//This function displays the information about the movie in a clearly formatted manner.
void PrintMovieInfo(MovieData movie)
{
    cout << left << setw(20) << "Movie Title:" << movie.title << endl;
    cout << setw(20) << "Director:" << movie.director << endl;
    cout << setw(20) << "Year Released:" << movie.yearReleased << endl;
    cout << setw(20) << "Running Time:" << movie.runtimeInMinutes << " minutes" << endl << endl;
}
