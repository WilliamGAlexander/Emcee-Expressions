
#include <string>


class expression{
	
	public:
		//Must be initialized to 0!!!!!
		expression() {};
		virtual int eval() = 0;
		virtual std::string infix() = 0;
		virtual std::string postfix() = 0;
};
	
class constant : public expression{
	private:
		int num;
	
	public:
		constant(int i);
		int eval();
		std::string infix();
		std::string postfix();
};

class unop : public expression{
	private:
		char oper;
		expression *expression1;
	
	public:
		unop(char,expression *);
		int eval();
		std::string infix();
		std::string postfix();
};

class binop : public expression{
	private:
		char oper;
		expression *expression1;
		expression *expression2;
	
	public:
		binop(char, expression *, expression *);
		int eval();
		std::string infix();
		std::string postfix();
};	
	


	

