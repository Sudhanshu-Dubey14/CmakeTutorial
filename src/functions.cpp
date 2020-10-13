/*
 #include is a preprocessor directive that includes the code from other files.
 The syntax uses two ways to include these files. i.e. <> and "".
 The statements with <> are used to include predefined header files.
 The statements with "" are used to when we want to include a particular file from the current directory.
 */
#include<iostream> // #(preprocessor directive) include header file iostream
#include"header.cpp" // include 'header.cpp' as a header file

/*
 A namespace defines a scope. It provides a way of separating various sets of names.
 It differentiates functions, classes, variables etc. having same names but present in different libraries.
 'using' is a directive. "Using namespace" tells the compiler to use the 'names' in the specified namespace.
*/
using namespace std; // use std(standard) namespace

/*
 "Main()" is a global function which starts the code.
 All C++ programs must have a main function.
*/
int main()
{ int num, opt; // declaration of int type variables
  char ans; // declaration of char type variables
  cout<<" Enter the number : ";  // prints prompt
  cin>>num;  // accepts input
  cout<<" What do you want to check : \n 1.Is number prime?"; 
  cout<<"\n 2.Is it armstrong number? \n 3.Is number a palindrome?\n";
  cin>>opt;
  /*
   Switch case statement is used when there are multiple conditions and
   different actions need to be performed based on the condition.
   It is used as a substitute to lengthy if...else-if statements.
   Break statement is usually used in switch case statement, though it is optional.
  */
  switch(opt)  //switch case
  { case 1 : ans = isprime(num); //calling isprime() function that is defined in header.cpp
	     if( ans == 'y')   //if...else if condition
		     cout<<num<<" is a prime number.\n";
	     else if( ans == 'n' )
		     cout<<num<<" is not a prime number.\n";
	     break;

    case 2 : ans = isarmstrong(num); //calling isarmstrong() function
	     if( ans == 'y')
		     cout<<num<<" is a armstrong number.\n";
	     else if( ans == 'n' )
		     cout<<num<<" is not a armstrong number.\n";
     	     break;

    case 3 : ans = ispalindrome(num); //calling ispalindrome() function
	     if( ans == 'y')
		     cout<<num<<" is a palindrome.\n";
	     else if( ans == 'n' )
		     cout<<num<<" is not a palindrome.\n";
	     break;

    default : cout<<" Invalid input !!!\n"; 
  }
  return 0;
}  
