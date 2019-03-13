#include "Barista.h"


void Barista::execute(CoffeeCommand * c){
	c->makecoffee();
}

void Mocha::makecoffee(){
	countcoffee++;
	cout<<"1) Preparing Cocoa beans"<<endl;
	cout<<"2) Made Mocha"<<endl;
}

void Mocha::undo(){
	countcoffee--;
}

void Latte::makecoffee(){
	countcoffee++;
	cout<<"1) Preparing Latte Art"<<endl;
	cout<<"2) Made Latte"<<endl;
}

void Latte::undo(){
	countcoffee--;	
}
