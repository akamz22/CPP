#include <iostream>
using namespace std;
class Line
{
public:
   double length;
   void setLength(double len)
   {
      length = len;
   }
   double getLength(void)
   {
      return length;
   }
};

// Main function for the program
int main()
{
   Line line;

   // set line length
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() << endl;

   // set line length without member function
   line.length = 10.0; // OK: because length is public
   cout << "Length of line : " << line.length << endl;

   return 0;
}