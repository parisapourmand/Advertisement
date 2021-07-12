#include <iostream>
#include "ad.hpp"

using namespace std;

Ad::Ad(int id, string title, string imgURL, string link, Advertiser * theAdveriser){
	this->id = id;
	this->title = title;
	this->imgURL = imgURL;
	this->link = link;
	this->theAdveriser = theAdveriser;
	this->clicks = 0;
	this->views = 0;
}

void Ad::incClicks(){
	this->clicks++;
	this->theAdveriser->incClicks();
}


std::string Advertiser::describeMe(){
	return "Ad: Class containing ad info and functions needed for each ad";
}