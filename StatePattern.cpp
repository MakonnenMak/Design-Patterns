#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
/* Forward definitions */
class State;
class state0;
class state1;
class state2;
class state3;
class state4;

class FiniteAutomata{
	public:
		void setState(State * x);
		FiniteAutomata(State * x);
		State * getState0();
		State * getState1();
		State * getState2();
		State * getState3();
		State * getState4();
		State * getRejectState();
	private:
		State * currState;
		State * state0,*state1,*state2,*state3,*state4,*rejectState;
};

FiniteAutomata::FiniteAutomata(State * x){
	currState=x;
}

void FiniteAutomata::setState(State * newState){
	this.currState=newState;	
}

* State FiniteAutomata::*getState0(){
	return state0;
}

* State FiniteAutomata::*getState1(){
	return state1;
}
* State FiniteAutomata::*getState2(){
	return state2;
}
* State FiniteAutomata::*getState3(){
	return state3;
}

* State FiniteAutomata::*getState4(){
	return state4;
}

* State FiniteAutomata::*rejectState(){
	//FILL OUT
}

class State{
	//Pure Virtual Function -- C++ version of interfaces
	public:
		virtual void addNewCharacter()=0;
		virtual bool isValid()=0;

};

class state0: public State{
	public:
		void addNewCharacter();
		bool isValid();	
};

class state1: public State{
	public:
		void addNewCharacter();
		bool isValid();	
};
class state2: public State{
	public:
		void addNewCharacter();
		bool isValid();	
};
class state3: public State{
	public:
		void addNewCharacter();
		bool isValid();	
};

class state4: public State{
	public:
		void addNewCharacter();
		bool isValid();	
};
class rejectState: public State{
	public:
		void addNewCharacter();
		bool isValid();	
};


int main(void){
}
