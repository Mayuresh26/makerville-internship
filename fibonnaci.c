#include"Fibonacci.h"

int nearestfib(int input)
{
int a=0,b=1,c=1;                                                                
  while(c<input)
{

    a=b;
   b=c;
   c=a+b;

}
  if((input-b)<(c-input))
   return b;
  else
    return c;
}