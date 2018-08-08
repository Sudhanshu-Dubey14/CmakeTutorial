#include<iostream>
#include"header.cpp"
using namespace std;

int main()
{ int num, opt;
  char ans;
  cout<<" Enter the number : ";
  cin>>num;
  cout<<" What do you want to check : \n 1.Is number prime?"; 
  cout<<"\n 2.Is it armstrong number? \n 3.Is number a palindrome?\n";
  cin>>opt;
  switch(opt)
  { case 1 : ans = isprime(num);
	     if( ans == 'y')
		     cout<<num<<" is a prime number.\n";
	     else if( ans == 'n' )
		     cout<<num<<" is not a prime number.\n";
	     break;

    case 2 : ans = isarmstrong(num);
	     if( ans == 'y')
		     cout<<num<<" is a armstrong number.\n";
	     else if( ans == 'n' )
		     cout<<num<<" is not a armstrong number.\n";
     	     break;

    case 3 : ans = ispalindrome(num);
	     if( ans == 'y')
		     cout<<num<<" is a palindrome.\n";
	     else if( ans == 'n' )
		     cout<<num<<" is not a palindrome.\n";
	     break;

    default : cout<<" Invalid input !!!\n"; 
  }
  return 0;
}  
