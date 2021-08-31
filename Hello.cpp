#include <iostream>
#include <stdlib.h>

using namespace std;

class HelloClass {
   public:
      HelloClass(int i) {
         if (i == 0) {
            output_string = "Hello C++ Data Structures!";
         } else {
            output_string = "Hello Data Structures!";
         }
      }
      void print_hello() {
         cout << output_string << endl;
      }
   private:
      string output_string;
};

int main(int argc, char *argv[])
{
   HelloClass *my_hello_ptr = new HelloClass(0);

   my_hello_ptr->print_hello();
   delete(my_hello_ptr);

   HelloClass my_hello(1);
   my_hello.print_hello();
}

