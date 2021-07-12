#ifndef __AD_H__
#define __AD_H__

#include "base_model.hpp"
#include "advertiser.hpp"

class Ad : public BaseAdvertising
{
public:
	Ad(int id, std::string title, std::string imgURL, std::string link, Advertiser * theAdveriser);

	std::string getTitle(){
		return this->title;
	}
	void setTitle(std::string title){
		this->title = title;
	}

	void incClicks();
	void incViews();

	std::string describeMe();

private:
	std::string title;
	std::string imgURL;
	std::string link;
	Advertiser * theAdveriser;

};

#endif