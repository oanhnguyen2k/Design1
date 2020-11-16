// This is a test file for section A
#include "image.h"

using namespace std;

int main()
{
   image img;
   
   cout << img.getFname() << endl;
   cout << img.getType() << endl;
   cout << img.getDate() << endl;
   cout << img.getSize() << endl;
   cout << img.getAname() << endl;
   cout << img.getHeight() << endl;
   cout << img.getWidth() << endl;
   cout << img.getAperatureSize() << endl;
   cout << img.getExposureTime() << endl;
   cout << img.getISOvalue() << endl;
   cout << img.getFlash() << endl << endl;

   img.setFname("Picture");
   img.setType("No");
   img.setDate("01012001");
   img.setSize(10.0);
   img.setAname("Oanh");
   img.setHeight(20);
   img.setWidth(10);
   img.setAperatureSize(8);
   img.setExposureTime(30);
   img.setISOvalue(600);
   img.setFlash(false);

   cout << img << endl;

   return 0;
}
