#include <iostream>
#include <cmath>
using namespace std;

void visualise(float sayi){ //sayý means number in Turkish.
	switch((int)float(abs(sayi))){
  case 0:
    cout<<(char)219;
    break;
  case 1:
    cout<<"@";
    break;
  case 2:
    cout<<"#";
    break;
  case 3:
    cout<<"%";
    break;
  case 4:
    cout<<"=";
    break;
  case 5:
    cout<<".";
    break;
  default:
    cout<<" ";
}};
float chosenFunc(float x){
	return 2*sin(x/2)+x/2;};
int main(){
	
int x=0,y=0,i;
for(i=0;i<43;i++){cout<<"#";}
cout<<"\n";
for(y=10;y>-11;y--){
cout<<"#";	
	for(x=-20;x<21;x++){
		visualise(abs(y-chosenFunc(x)));
	}
cout<<"#\n";	
}
for(i=0;i<43;i++){cout<<"#";}
return 0;
}//output wasnt so bad lol. good job past me.
