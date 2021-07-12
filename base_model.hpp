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


private:
	int id;
	int clicks;
	int views;
};