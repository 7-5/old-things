#include <iostream>
#include <string>
#include <cmath>
// class cml, splitcml, dualcml, surrealnum, quarternion, octonion, sedenion, n-adic num, extend.
class cml{
	//define polar form
	//define atan2func
	//define 2pik k
	//defne absolute value
	//define exponentiation and logarithm
	//define number system conversions
	
	//wow i didnt even define polar form. my super cool project will contain all that.
public:
    double real,imag;
    cml(double a, double b){
        real=a;imag=b;}};
cml operator+(cml a,cml b){
        return cml(a.real+b.real,b.imag+a.imag);
        }
cml operator+(cml a,float b){
        return cml(a.real+b,a.imag);
        }
void operator+=(cml &a,cml b){
        a=cml(a.real+b.real,b.imag+a.imag);
        }
cml operator*(cml a,cml b){
        return cml(a.real*b.real-b.imag*a.imag,a.real*b.imag+b.real*a.imag);
        }        
std::string to_string(cml a){
    std::string b="";
    if(a.real!=0){b=b+std::to_string(a.real);
        if(a.imag>0){b=b+"+";}
        if(a.imag!=0){b=b+std::to_string(a.imag);
        b=b+"i";}
        }else if(a.imag==0){b="0";}else{
            b=b+std::to_string(a.imag);
        b=b+"i";}
    return b;}
int main(){
    cml a(1,5);
    int c=std::pow(5,3);
    cml b(2,1);
    std::cout<<to_string(a+c);
    return 0;
}
