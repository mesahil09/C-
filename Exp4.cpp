#include<iostream>
using namespace std;

class Rectangle {
private:
  float length,width;
public:
  Rectangle(float l,float w) {
     length=l;
     width=w;
}

float area(){
    return length*width;
}

float perimeter(){
     return 2*(length+width);
 }
~Rectangle(){
     cout<<"Rectangle destroyed"<<endl;
  }
};
 
int main(){
   float l,w;
   cout<<"Enter Length:";
   cin>>l;

   cout<<"Enter Width:";
   cin>>w;

   Rectangle rect(l,w);

   cout<<"Area="<<rect.area()<<endl;
   cout<<"Perimeter="<<rect.perimeter()<<endl;

   return 0;
}

