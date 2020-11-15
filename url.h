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
  
  private:
    string link_, scheme_, authority_, path_;
};

#endif   // _URL_H_
