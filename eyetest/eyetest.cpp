#include <iostream> 
#include <chrono> 
#include <cstdlib>
using namespace std;
int rnd(int maxnumber){return rand()%maxnumber + 1;}//returns btween 1-maxnumber. max maxnumber 65535.
int rndb(int maxnumber){int u=rand()*65536;return ((rand()+u+rand())%maxnumber)+1;}//returns btween 1-maxnumber. max maxnumber 2147483647.
int main(){unsigned seed = (unsigned)chrono::steady_clock::now().time_since_epoch().count();srand(seed);
// i used this random number "engine" thing everywhere huh?
char au[28]= {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
while(1){
system("cls");//rip linux support
cout<<au[rnd(26)-1];
cout<<au[rnd(26)-1];
cout<<au[rnd(26)-1];
cout<<au[rnd(26)-1];
system("timeout 10");// oh my...
};
return 0;}
