#include<math.h>

int factorial(int num)
{ int i,fact=1;
  for( i=1; i<=num ; i++)
   fact *= i;
  return fact;
}

char isprime(int num)
{ int i;
  for( i=2; i<num ; i++ )
   if( num%i == 0 )
      return 'n';
  if( i==num) 
    return 'y';

}

char ispalindrome(int num)
{ int i, rev=0;
  for( ; num!=0 ; num/=10 )
   rev = rev*10 + num%10;
  if(rev == num  )
    return 'y';
  else
    return 'n';
}

char isarmstrong(int num)
{ int i, arm=0, len=0, Digits[len], num_cpy;
  for( num_cpy=num, i=0 ; num_cpy!=0 ; num_cpy/=10 )
  { len++;
    Digits[i] = num_cpy%10;
  }
  for( i=0; i<len; i++ )
   arm += pow(Digits[i],len);  
  if( arm = num )
	  return 'y';
  else 
	  return 'n';
}

int average( int num1, int num2 )
{ return (num1 + num2)/2;
}


