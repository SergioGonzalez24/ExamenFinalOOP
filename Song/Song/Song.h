//
//  Song.hpp
//  Song
//
//  Created by Sergio Gonzalez on 30/11/20.
//

#ifndef SONG_H
#define SONG_H
#include <string>

using std::string;

class Song {
  
private:
   
   string title;
   string artist;
   int rating;
   
public:

//  Metodos Constructores
    Song();
    Song(string title, string artists);
    
//  Metodos Get
    string getTitle() {return title;}
    string getArtist() {return artist;}
    int getRating() {return rating;}
    
//  Metodos Set
    void setRating(int rating);
};

#endif
