#ifndef __BASEADVERTISING_H__
#define __BASEADVERTISING_H__

#include <iostream>

class BaseAdvertising
{
public:
	BaseAdvertising();

	int getClicks(){
		return this->clicks;
	}
	int getViews(){
		return this->views;
	}
	void incClicks(){
		this->clicks++;
	}
	void incViews(){
		this->views++;
	}
	std::string describeMe(){
		return "BaseAdvertising: Class for basic functions needed for advertising";
	}


protected:
	int id;
	int clicks;
	int views;
};

#endif