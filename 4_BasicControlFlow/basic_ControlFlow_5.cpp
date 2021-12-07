#include <iostream>

using namespace std;

int main()
{
   int a,b,c;

   cout  << "Enter the 3 numbers";
   cin >>a>>b>>c;


   if(a>b)
   {
       if(a>c)
       {
           cout <<"The first number is greatest";
       }
       else
       {
           cout <<"The third number is the greatest";

       }
   }
   else
   {
       if(b >c)
       {
           cout <<"The second number is the greatest";
       }
       else
       {
           cout <<"The third number is the greatest";
       }
   }

   return 0;
}
