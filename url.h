#ifndef _URL_H_
#define _URL_H_

#include <string>

class url {
  public:
    // default constructor
    url();
    
    // normal constructor
    url(std::string link);
    
    // getters
    std::string getFull();
    std::string getScheme();
    std::string getAuthority();
    std::string getPath();
  
  private:
    std::string link_;
    std::string scheme_;
    std::string authority_;
    std::string path_;
};

#endif   // _URL_H_
