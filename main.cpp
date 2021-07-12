#include <iostream>
#include "base_model.hpp"
#include "advertiser.hpp"
#include "ad.hpp"

using namespace std;

int main()
{
	int Advertiser::totalClicks = 0;
	baseAdvertising = new BaseAdvertising();
	advertiser1 = new Advertiser(1, “name1”); 
	advertiser2 = new Advertiser(2, “name2”);	
	ad1 = new Ad(1, “title1”, “img-url1”, “link1”, advertiser1);
	ad2 = new Ad(2, “title2”, “img-url2”, “link2”, advertiser2);
	// baseAdvertising.describeMe();
	// ad2.describeMe();
	advertiser1.describeMe();
	ad1.incViews();
	ad1.incViews();
	ad1.incViews();
	ad1.incViews();
	ad2.incViews();
	ad1.incClicks();
	ad1.incClicks();
	ad2.incClicks();
	advertiser2.getName();
	advertiser2.setName(“new name”);
	advertiser2.getName();
	ad1.getClicks();
	advertiser2.getClicks();
	Advertiser.getTotalClicks();
	Advertiser.help();


	return 0;
}