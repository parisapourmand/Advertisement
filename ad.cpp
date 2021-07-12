#include <iostream>
#include "ad.hpp"

using namespace std;

Ad::Ad(int id, string title){
	this->id = id;
	this->title = title;
	this->imgURL = imgURL;
	this->link = link;
	this->clicks = 0;
	this->views = 0;
}

void Ad::incClicks(){
	this->clicks++;
	this->theAdveriser->incClicks();
}