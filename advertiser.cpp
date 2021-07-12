#include "advertiser.hpp"
using namespace std;

Advertiser::Advertiser(int id, string name){
	this->id = id;
	this->name = name;
	this->clicks = 0;
	this->views = 0;
}

int Advertiser::getTotalClicks(){
	return totalClicks;
}

void Advertiser::incClicks(){
	this->clicks++;
	this->totalClicks++;
}

std::string Advertiser::describeMe(){
	return "Advertiser: Class containing advertiser info and functions needed for each advertiser";
}