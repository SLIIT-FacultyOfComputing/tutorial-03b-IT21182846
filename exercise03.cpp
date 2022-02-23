#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length
struct Box{
int height;
int width;
int length;
}Box1,Box2;
// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
  int height.Box1,width.Box1,length.Box1;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
  int height.Box2,width.Box2,length.Box2;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
  
    cout << "Enter Box 1 Height : ";
    cin >> height.Box1;
    cout << "Enter Box 1 Width : ";
    cin >> width.Box1;
    cout << "Enter Box 1 Length : ";
    cin >> length.Box1;
    
    cout << "Enter Box 2 Height : ";
    cin >> Height.Box2;
    cout << "Enter Box 2 Width : ";
    cin >> Width.Box2;
    cout << "Enter Box 2 Length : ";
    cin >> Length.Box2;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(height.Box1 , width.Box1,length.Box1 )
             + volume( height.Box2,width.Box2 ,length.Box2 );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height,int width, int length)
{
  int volume;
  volume=height*width*length;
  return volume;
  
}