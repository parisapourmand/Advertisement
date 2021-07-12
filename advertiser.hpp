#ifndef __ADVERTISER_H__
#define __ADVERTISER_H__

#include <iostream>
#include "base_model.hpp"


class Advertiser : public BaseAdvertising
{
public:
	Advertiser(int id, std::string name);

	std::string getName(){
		return this->name;
	}
	void setName(std::string name){
		this->name = name;
	}
	std::string help(){
		return "id is the Advertiser id, \nname is the Advertiser name, \nclicks and views are the number of clicks and views of this Advertisers ads.\nThe field total clicks is the sum of all Advertisers clicks.\n";
	}
	int getTotalClicks();

	void incClicks();
	void incViews();
	
	std::string describeMe();

private:
	std::string name;
	static int totalClicks;

};

#endif