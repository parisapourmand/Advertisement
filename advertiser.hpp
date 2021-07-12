#include <iostream>
#include "base_model.hpp"


class Advertiser : public BaseAdvertising
{
public:
	Advertiser();

	string getName(){
		return this->name;
	}
	void setName(string name){
		this->name = name;
	}
	string help(){
		return "id is the Advertiser id, \nname is the Advertiser name, \nclicks and views are the number of clicks and views of this Advertisers ads.\nThe field total clicks is the sum of all Advertisers clicks.\n";
	}
	int getTotalClicks();

	void incClicks();

private:
	std::string name;
	static int totalClicks;

};