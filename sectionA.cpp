// This is a test file for section A
#include <iostream>

#include "url.h"

using namespace std;

int main()
{
   string linkHighline = "https://www.highline.edu/about-us/";

   url l1;
   url l2(linkHighline);
   
   cout << l1.getFull() << endl;
   cout << l1.getScheme() << endl;
   cout << l1.getAuthority() << endl;
   cout << l1.getPath() << endl;
   
   cout << l2.getFull() << endl;
   cout << l2.getScheme() << endl;
   cout << l2.getAuthority() << endl;
   cout << l2.getPath() << endl;
   
   return 0;
}
