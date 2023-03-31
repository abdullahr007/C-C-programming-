#include <string> // defines standard C++ string class
/*
MB-213-A
a10 p2.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;

    //addition
    std::string favouriteFood;
    std::string country;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
   
   //additions
    void setFavouriteFood(std::string& newFavouriteFood);
	void setCountry(std::string& newcountry);
	
    // getter method
	int getHunger();
    //additions
    std::string getFavouriteFood();
	std::string getCountry();
	
    // service method
	void print();
};