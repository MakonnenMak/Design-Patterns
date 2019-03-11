class State;
class FiniteAutomata{
	public:
		void setState(State * x);
		FiniteAutomata();
		void addChar(char c);
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

State * FiniteAutomata::getState4(){
	return state4;
}

State * FiniteAutomata::getRejectState(){
	return rejectState;
}
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
		State::A->setState(State::A->getRejectState());
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
		State::A->setState(State::A->getRejectState());
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
		State::A->setState(State::A->getRejectState());
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
		State::A->setState(State::A->getRejectState());
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
		State::A->setState(State::A->getRejectState());
}


bool rejectState::isValid(){
	return false;
}
