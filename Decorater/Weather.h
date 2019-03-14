#include <iostream>
using namespace std;


class Weather{


};


class Decorator: public Weather{
	public:
		virtual int getTemp()=0;

};


class Temperature: public Weather{	
	public:
		int getTemp(); 

};


class Cloud: public Decorator{
	public:
		int getTemp(); 
};

class Humidity: public  Decorator{
	public:
		int getTemp(); 
};


