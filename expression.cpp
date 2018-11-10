#include <sstream>
#include "expression.h"

using namespace std; 

//added some comment

constant::constant(int n){
	
	this -> num = n;
}

int constant::eval(){
	return this -> num;
}

string constant::infix(){
	ostringstream stream;
	
	stream << this -> num;
	
	return stream.str();
	
}

string constant::postfix(){
	return this -> infix();
}

/*
unop::unop(char op, expression *e){
	
	this -> oper = op;
	this -> expression1 = e;
}

int unop::eval(){
	//switch statement on this -> oper;
	switch(this -> oper){
		case '-':
			return this -> expression1 -> eval() * -1;
			
	
	}
	//case '-' => multiple eval of expression1 * -1;
}

string unop::infix(){
	
	ostringstream stream;
	//Add first parenthese before expression 
	stream << "(";
	stream << this -> oper;
	stream << " ";
	stream << this -> expression1 -> infix();
	stream << ")";
	
		return stream.str();
	
}

string unop::postfix(){
	
	ostringstream stream;
	
	stream << this -> expression1 -> postfix();
	stream << " ";
	//If it is negative, print a u
	//Must come after the expression 
	if(this->oper == '-'){
		stream << "u";
	}
	
	stream << this -> oper;
	
	return stream.str();
}


binop::binop(char op, expression *expression1, expression *expression2)
{
	this -> oper = op;
	this -> expression1 = expression1;
	this -> expression2 = expression2;
}



int binop::eval(){
	//these are all equivalent 
		//this -> expression1 -> eval(); = *(this -> expression1).eval() == *(this).*(expression1).eval();;
	
	switch(this -> oper){
		case '+':
		//This instance of expression evaluated plus the other instance of expression evaluated 
		return this -> expression1 -> eval() + this -> expression2 -> eval();
		//When subtracting, expression 1 must be first
		case '-':
		return this -> expression1 -> eval() - this -> expression2 -> eval();
		//When dividing, expression 1 must be first 
		case '/':
		return this -> expression1 -> eval() / this -> expression2 -> eval();
		
		case '*':
		return this -> expression1 -> eval() * this -> expression2 -> eval();
		
		
		
		
	
	}
	
}

string binop::infix(){
		//expression *e = new binop('+', new Constant(1), new Constant(2));
		
		//(1 + 2)
		ostringstream stream;
		
	stream << "(";
	stream << this -> expression1 -> infix();
	//Space between values and operand 
	stream << " ";
	stream << this -> oper;
	//Another space
	stream << " ";
	stream << this -> expression2 -> infix();
	stream << ")";
		return stream.str();
}

string binop::postfix(){
	
	ostringstream stream;
	
	stream << this -> expression1 -> postfix();
	stream << " ";
	stream << this -> expression2 -> postfix();
	stream << " ";
	//Operand last for postfix notaion 
	stream << this -> oper;
	
	return stream.str();
}
*/
