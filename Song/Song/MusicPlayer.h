//
//  MusicPlayer.hpp
//  Song
//
//  Created by Sergio Gonzalez on 30/11/20.
//

#ifndef MUSIC_PLAYER_H
#define MUSIC_PLAYER_H
#include "Song.h"

class MusicPlayer {
  
private:
    char state;
    Song playing;
    
    
public:
    
    MusicPlayer();
    
    void play(Song newSong);
    void pause();
    void stop();
    void print();
  
};

#endif
