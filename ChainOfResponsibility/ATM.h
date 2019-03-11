
class ATM{
	public:	
		void setNextChain(ATM * a){nextAtm=a;}
		void setPrevChain(ATM * a){prevAtm=a;}
		virtual int deposit(int val) = 0;
	protected:
		ATM * prevAtm;
		ATM * nextAtm;
};

class twentyDeposit:public ATM{
	public:
		int deposit(int val);
};

class fiftyDeposit:public ATM{
	public:
		int deposit(int val);
};

class hundredDeposit:public ATM{
	public:
		int deposit(int val);
};
