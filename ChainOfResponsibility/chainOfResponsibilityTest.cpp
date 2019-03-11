#include<iostream>
#include<string>
#include "ATM.h"
using namespace std;
int main(){
	ATM * a=new twentyDeposit();
	ATM * b=new fiftyDeposit();
	ATM * c=new hundredDeposit();

	a->setNextChain(b);
	b->setNextChain(c);

	cout<<a->deposit(20)<<endl;
	cout<<b->deposit(50)<<endl;
}
