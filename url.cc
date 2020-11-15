#include "url.h"

url::url() {
  link_ = "";
  scheme_ = "";
  authority_ = "";
  path_ = "";
}

url::url(string link) {
  int pos, p, pos2, m;
  
  pos2 = link.find(":");
  link_ = link;

  //Loop to find "//" and "/"
  for (int i = 0; i < link.size(); i++)
  {
      if(link[i] == '/' && link[i+1] == '/')
      {
          pos = i;
          i++;
      }
      else if(link[i] == '/' && link[i+1] != '/')
      {
          p = i;
          break;
      }
  }
  scheme_ = link.substr(0, pos2 + 1);       
  m_ = ((link.size() - pos2) - (link.size() - p)) - 1;
  authority_ = link.substr(pos, m);      
  path_ = link.substr(p);
}

string url::getFull() {
  return link_;
}

string url::getScheme() {
  return scheme_;
}

string url::getAuthority() {
  return authority_;
}

string url::getPath() {
  return path_;
}
