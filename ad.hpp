#include "base_model.cpp"
#include "advertiser.cpp"

class Ad : public BaseAdvertising
{
public:
	Ad();

	std::string getTitle(){
		return this->title;
	}
	void setTitle(std::string title){
		this->title = title;
	}


private:
	std::string title;
	std::string imgURL;
	std::string link;
	Advertiser theAdveriser;

};