//
//  MusicPlayer.cpp
//  Song
//
//  Created by Sergio Gonzalez on 30/11/20.
//

#include "MusicPlayer.h"
#include "Song.h"
#include <iostream>

using namespace std;
//D-> DETENIDO R->REPRODUCIENDO P->PAUSA

MusicPlayer::MusicPlayer() {

    state='D';
}

void MusicPlayer::play(Song newSong) {
    
    this->playing=newSong;
    this->state='R';
}

void MusicPlayer::pause() {
    
    this->state='P';
}

void MusicPlayer::stop() {
    
    this->state='D';
}

void MusicPlayer::print() {
    
    if (state=='R') {
        cout << "Currently playing: " << endl;
    }
    else if (state=='P') {
        cout << "On hold" << endl;
    }
    else {
        cout << "Nothing playing" << endl;
    }
}
