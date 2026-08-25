#include<iostream>
using namespace std;

class complex{
public:
int real;
int imaginary;

complex(){
real=0;
imaginary=0;
}
complex(int r, int i){
real=r;
imaginary=i;
}

complex addcomplexNum(complex C1, complex C2){
complex res;
res.real=C1.real+C2.real;
res.imaginary=C1.imaginary+ C2.imaginary;
return res;
 
}
};
int main() {
complex C1(5,6);
cout<<"complex num 1:" <<C1.real<<"+"<<C1.imaginary<<"i"<<endl;

complex C2(9,3);
cout<<"complex num 2:"<<C2.real<<"+"<<C2.imaginary<<"i"<<endl;

complex C3;
C3=C3.addcomplexNum(C1,C2);
cout<<"sum of complex Number;"<<C3.real<<"+"<<C3.imaginary<<"i"<<endl;

return 0;
} 															

