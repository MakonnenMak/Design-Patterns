#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include"FiniteAutomata.h"

int main(void){
	FiniteAutomata  test;
	test.addChar('a');
	test.addChar('b');
	test.addChar('a');
	test.isValid();
}
