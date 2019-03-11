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
		State * getRejectState();
	private:
		State * currState;
		State * state0,*state1,*state2,*state3,*state4,*rejectState;
};


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

class state1: public State{
	public:
		void getChar(char c);
		bool isValid();	
};

class state2: public State{
	public:
		void getChar(char c);
		bool isValid();	
};

class state3: public State{
	public:
		void getChar(char c);
		bool isValid();	
};


class rejectState: public State{
	public:
		void getChar(char c);
		bool isValid();	
};

