#include <iostream>

using namespace std;

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


private:
	int id;
	int clicks;
	int views;
};