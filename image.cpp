#include "image.h"

using namespace std;

image::image() {
    fname_ = "";
    type_ = "PNG";
    date_ = "00000000";
    size_ = 0.0;
    aname_ = "";
    height_ = 0.0;
    width_ = 0.0;
    aperatureSize_ = 0;
    exposureTime_ = 1;
    ISOvalue_ = 0;
    flash_ = true;
}

std::string image::getFname() {
	return fname_;
}

std::string image::getType() {
	return type_;
}

// the format of date is MMDDYYYY
std::string image::getDate() {
	return date_;
}    

double image::getSize() {
	return size_;
}

std::string image::getAname() {
	return aname_;
}

double image::getHeight() {
	return height_;
}

double image::getWidth() {
	return width_;
}

// return value is a string in format f/# where # is an integer
std::string image::getAperatureSize() {
	return "f/" + std::to_string(aperatureSize_);
}

// return value is a string in format 1/# where # is an integer
std::string image::getExposureTime() {
	return "1/" + std::to_string(exposureTime_);
}

int image::getISOvalue() {
	return ISOvalue_;
}

bool image::getFlash() {
	return flash_;
}

void image::setFname(std::string fname) {
	fname_ = fname;
}

bool image::setType(std::string type) {
	if (type == "PNG" || type == "GIF" || type == "JPEG") {
		type_ = type;
		return true;
	} else {
		return false;
	}
}

void image::setDate(std::string date) {
	date_ = date;
}

void image::setSize(double size) {
	size_ = size;
}

void image::setAname(std::string aname) {
	aname_ = aname;
}

void image::setHeight(double height) {
	height_ = height;
}

void image::setWidth(double width) {
	width_ = width;
}

void image::setAperatureSize(int aperatureSize) {
	aperatureSize_ = aperatureSize;
}

void image::setExposureTime(int exposureTime) {
	exposureTime_ = exposureTime;
}

void image::setISOvalue(int ISOvalue) {
	ISOvalue_ = ISOvalue;
}

void image::setFlash(bool flash) {
	flash_ = flash;
}

std::ostream & operator<<(std::ostream &out, image const &img) {
    out << "File Name: " << img.fname_ << endl;
    out << "Image Type: " << img.type_ << endl;
    out << "Date Created: " << img.date_ << endl;
    out << "Size: " << img.size_ << "MB" << endl;
    out << "Author Name: " << img.aname_ << endl;
    out << "Dimensions: " << img.width_ << "x" << img.height_ << endl;
    out << "Aperature Size: f/" << img.aperatureSize_ << endl;
    out << "Exporsure Time: 1/" << img.exposureTime_ << endl;
    out << "ISO Value: " << img.ISOvalue_ << endl;
    out << "Flash Enabled: " << img.flash_ << endl;
    
    return out;
}
