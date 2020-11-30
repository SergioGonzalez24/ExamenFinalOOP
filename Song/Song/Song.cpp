//
//  Song.cpp
//  Song
//
//  Created by Sergio Gonzalez on 30/11/20.
//

# include <iostream>
#include <string>
#include "Song.h"

using std::string;

Song::Song() {
  
    title="";
    artist="";
    rating=0;
}

Song::Song(string title,string artist) {
  
  this->title=title;
    this->artist=artist;
    rating=5;
}

void Song::setRating(int rating) {
  
  if (rating>=0 && rating<=5) {
    this->rating=rating;
  }
  else {
    rating=rating;
  }
}
