/*
MB-213-A
a10 p5.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double height;

	// coverting function
	double hungerIntToDouble(int hunger);
	int hungerDoubleToInt(double hunger);

public: // business logic methods are public
	// CONSTRUCTORS
	Critter();
	Critter(std::string name);
	Critter(std::string name, int hunger, int boredom, double height);

	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);

	// getter method
	int getHunger();

	// service method
	void print();
};