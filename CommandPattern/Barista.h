#include <iostream>
using namespace std;


class CoffeeCommand{
	public:
		virtual void makecoffee()=0;
};

class Barista{
	public:
		void execute(CoffeeCommand * c);

};

class Mocha: public CoffeeCommand{
	public:
		void makecoffee();
		int countcoffee=0;
	private:
		void undo();

};

class Latte: public CoffeeCommand{
	public:
		void makecoffee();
		int countcoffee=0;
	private:
		void undo();

};


