#include<iostream>

int main()
{
     for(int foo = 0; foo <= 100; ++foo)
     {
          if(foo % 3 == 0)
          {
               if(foo % 5 == 0)
               {
                    std::cout << "fizzbuzz" << std::endl;
               }
               else
               {
                    std::cout << "fizz" << std::endl;
               }
          }
          else if(foo % 5 == 0)
          {
               if(foo % 3 == 0)
               {
                    std::cout << "fizzbuzz" << std::endl;
               }
               else
               {
                    std::cout << "buzz" << std::endl;
               }
          }
          else
          {
               std::cout << foo << std::endl;
          }
     }
     return 0;
}
