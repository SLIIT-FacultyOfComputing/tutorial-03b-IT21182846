#include <iostream>
using namespace std;

void print(int len, int wth);
void input(int len, int wth);

// Do not change the main() function
int main() {
   int length = 10, width = 5;
   input(length, width);
   print(length, width);
   return 0;
}

// Do not change the print() function
void print(int len, int wth) {
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}

// Implement the Input Function here
void input(int length, int width)
{
  cout<<"Enter a length\n";
  cin>>length;
  cout<<"Enter a width \n";
  cin>>width;
  int total=length+width;
  cout<<"Total is "<<total<<endl;
}