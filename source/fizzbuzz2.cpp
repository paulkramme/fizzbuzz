#include<iostream>

int main()
{
     for(int foo = 1; foo <= 100; ++foo)
     {
          if(foo % 3 == 0)
          {
               std::cout << "fizz" << std::endl;
          }
          else if(foo % 5 == 0)
          {
               std::cout << "buzz" << std::endl;
          }
          else if(foo % 30 == 0 && foo % 5 == 0)
          {
               std::cout << "fizzbuzz" << std::endl;
          }
          else
          {
               std::cout << foo << std::endl;
          }
     }
     return 0;
}
