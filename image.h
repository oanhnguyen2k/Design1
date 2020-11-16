#ifndef _IMAGE_H_
#define _IMAGE_H_

#include <string>
#include <iostream>

class image {
  public:
    // default constructor
    image();
       
    // getters
    std::string getFname();
    std::string getType();
    std::string getDate();            // format is MMDDYYYY
    double getSize();
    std::string getAname();
    double getHeight();               // dimensions are stored as height and width separately
    double getWidth();
    std::string getAperatureSize();   // return value is a string in format f/# where # is an integer
    std::string getExposureTime();    // return value is a string in format 1/# where # is an integer
    int getISOvalue();
    bool getFlash();

    // setters
    void setFname(std::string fname);
    bool setType(std::string type);   // return true if correct input, false otherwise
    void setDate(std::string date);
    void setSize(double size);
    void setAname(std::string aname);
    void setHeight(double height);
    void setWidth(double width);
    void setAperatureSize(int aperatureSize);
    void setExposureTime(int exposureTime);
    void setISOvalue(int ISOvalue);
    void setFlash(bool flash);

    friend std::ostream & operator<<(std::ostream &out, image const &img);
  
  private:
    std::string fname_;
    std::string type_;
    std::string date_;
    double size_;
    std::string aname_;
    double height_;
    double width_;
    int aperatureSize_;
    int exposureTime_;
    int ISOvalue_;
    bool flash_;
};

#endif   // _IMAGE_H_
