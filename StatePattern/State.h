#ifndef STATE_H
#define STATE_H
#include "FiniteAutomata.h"
class State{
	//Pure Virtual Function -- C++ version of interfaces
	public:
		virtual void getChar(char C)=0;
		virtual bool isValid()=0;

	protected:
		FiniteAutomata * A;
};

class state0: public State{
	public:
		void getChar(char c);
		bool isValid();	
};

void state0::getChar(char c){
	if (c=='a'){
		//Base class
		State::A->setState(State::A->getState1());
	}
	else{
		State::A->setState(State::A->rejectState());
	}
}

bool state0::isValid(){
	return false;
}


class state1: public State{
	public:
		void getChar(char c);
		bool isValid();	
};

void state1::getChar(char c){
	if (c=='b'){
		//Base class
		State::A->setState(State::A->getState2());
	}
	else{
		State::A->setState(State::A->rejectState());
	}
}

bool state1::isValid(){
	return false;
}
class state2: public State{
	public:
		void getChar(char c);
		bool isValid();	
};

void state2::getChar(char c){
	if (c=='b'){
		//Base class
		State::A->setState(State::A->getState2());
	}
	else if (c=='a'){
		State::A->setState(State::A->getState3());
	}
	else{
		State::A->setState(State::A->rejectState());
	}
}
bool state2::isValid(){
	return false;
}

class state3: public State{
	public:
		void getChar(char c);
		bool isValid();	
};

void state3::getChar(char c){
		State::A->setState(State::A->rejectState());
}


bool state3::isValid(){
	return true;
}

class rejectState: public State{
	public:
		void getChar(char c);
		bool isValid();	
};

void rejectState::getChar(char c){
		State::A->setState(State::A->rejectState());
}


bool rejectState::isValid(){
	return false;
}
#endif
