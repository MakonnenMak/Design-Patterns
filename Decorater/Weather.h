#include <iostream>
using namespace std;


class Weather{
	public:
		virtual int getTemp();

};


class Decorator: public Weather{
	public:
		virtual int getTemp()=0;

};


class Temperature: public Weather{	
	public:
		int getTemp(); 
		void setTemp(int t);
		int temp=0;

};


class Cloud: public Decorator{
	public:
		int getTemp(); 
		void setCloudiness(int c);
		int cloud=0;
};

class Humidity: public  Decorator{
	public:
		int getTemp(); 
		void setHumidity(int h);
		int humidity=0;
};


