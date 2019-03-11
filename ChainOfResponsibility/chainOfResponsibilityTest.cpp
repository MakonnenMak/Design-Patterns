#include<iostream>
#include<string>
#include "ATM.h"

int main(){
	ATM * a=new twentyDeposit();
	ATM * b=new fiftyDeposit();
	ATM * c=new hundredDeposit();

	a->setNextChain(b);
	b->setNextChain(c);

	a->deposit(20);
}
