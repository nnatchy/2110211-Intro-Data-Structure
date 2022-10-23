#ifndef __SONG_H__
#define __SONG_H__

#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include "priority_queue.h"

using namespace std;

class Song {
  public:
    std::string artist,title;
    int count;

    Song() { }
    Song(const Song &s) : artist(s.artist), title(s.title), count(s.count) { }
    Song(std::string artist,std::string title,int count) :  artist(artist), title(title), count(count) { }

    friend std::ostream& operator<<(std::ostream &out,const Song &s) {
      return out << "Artist: " << s.artist << " Title: " << s.title << " count: " << s.count;
    }

};


//  you have to write something below this line 
//  you *MIGHT* have to change the declaration of pq1 and pq2

// pq 1 : Artist, Song name, Total sell (low -> high)
// pq 2 : Total sell (high -> low) if equals, sort name from low -> high

class COMP1 {
public:
  bool operator()(const Song& lhs, const Song& rhs) const {
    if (lhs.artist > rhs.artist) return true;
    if (lhs.artist == rhs.artist && lhs.title > rhs.title) return true;
    return lhs.awr;
  }
};

class COMP2 {
  public:
    bool operator()(const Song& lhs, const Song& rhs) const {
      if (lhs.count < rhs.count) return true;
      if (lhs.count == rhs.count && lhs.artist > rhs.artist) return true;
      if (lhs.count == rhs.count && lhs.artist == rhs.artist && lhs.title > rhs.artist) return true;
      return false;
    }
};

CP::priority_queue<Song, COMP1> pq1;
CP::priority_queue<Song, COMP2> pq2;

#endif
