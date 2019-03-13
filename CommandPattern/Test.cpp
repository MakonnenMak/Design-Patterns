#include "Barista.h"

int main(){
	cout<<"---Start of ordering---"<<endl;
	Mocha m;
	Barista Bert;
	Bert.execute(&m);
	cout<<"---New Order---"<<endl;
	Latte l;
	Bert.execute(&l);
	return 0;	
}
