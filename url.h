#ifndef _URL_H_
#define _URL_H_

using namespace std;

class URL {
  public:
    // default constructor
    url();
    
    // normal constructor
    url(string link);
    
    // getters
    string getFull();
    string getScheme();
    string getAuthority();
    string getPath();
};

#endif   // _URL_H_