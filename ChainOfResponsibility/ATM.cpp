#include "ATM.h"
#include<iostream>


int twentyDeposit::deposit(int val){
	if (val==20){
		return (val+20);
	}
	else{
		return nextAtm->deposit(val);
	}
}

int fiftyDeposit::deposit(int val){
	if (val==50){
		return (val+50);
	}
	else{
		return nextAtm->deposit(val);
	}
}
int hundredDeposit::deposit(int val){
	if (val==100){
		return (val+100);
	}
	else{
		return -1;
	}
}
