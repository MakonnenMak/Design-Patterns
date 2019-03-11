#include"FiniteAutomata.h"
FiniteAutomata::FiniteAutomata(){
	this->currState=state0;
}

void FiniteAutomata::addChar(char c){
	this->currState->getChar(c);
}

void FiniteAutomata::setState(State * newState){
	this->currState=newState;	
}

State * FiniteAutomata::getState0(){
	return state0;
}

State * FiniteAutomata::getState1(){
	return state1;
}
State * FiniteAutomata::getState2(){
	return state2;
}
State * FiniteAutomata::getState3(){
	return state3;
}


State * FiniteAutomata::getRejectState(){
	return rejectState;
}

void state0::getChar(char c){
	if (c=='a'){
		//Base class
		State::A->setState(State::A->getState1());
	}
	else{
		State::A->setState(State::A->getRejectState());
	}
}

bool state0::isValid(){
	return false;
}



void state1::getChar(char c){
	if (c=='b'){
		//Base class
		State::A->setState(State::A->getState2());
	}
	else{
		State::A->setState(State::A->getRejectState());
	}
}

bool state1::isValid(){
	return false;
}

void state2::getChar(char c){
	if (c=='b'){
		//Base class
		State::A->setState(State::A->getState2());
	}
	else if (c=='a'){
		State::A->setState(State::A->getState3());
	}
	else{
		State::A->setState(State::A->getRejectState());
	}
}
bool state2::isValid(){
	return false;
}


void state3::getChar(char c){
		State::A->setState(State::A->getRejectState());
}


bool state3::isValid(){
	return true;
}



void rejectState::getChar(char c){
		State::A->setState(State::A->getRejectState());
}


bool rejectState::isValid(){
	return false;
}
