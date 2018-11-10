#include "expression.h" 
#include <iostream> 
 
using namespace std; 
 
int main(int argc, char *argv[]) {   
	   
	expression *e = new constant(3); 
	
	
	/*
	new binop('*',            
	new unop('-', new constant(3)),            
	new binop('+',               
	new constant(4),               
	new binop('/',                  
	new constant(9),                  
	new constant(3)               
	)
	 )
	  ); 
 */
   cout << "Evaluate: " << e->eval() << endl;    cout << "Infix: " << e->infix() << endl;    cout << "Postfix: " << e->postfix() << endl; 
 
   return 0; 
   
   } 
