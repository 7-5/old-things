#include <stdio.h>
int collatz(unsigned long long int x){
    int cnt=0;
    do {if(x&1){x=3*x+1;}else{x=x>>1;}cnt++;}while(x!=1);
    return cnt;
}

int main(){
unsigned long long int inp,i,membig=1;
const unsigned long long int hi=18446744073709551615; //stupid variable names
while (1)
{//waits input so i could calculate the next integer from where i left it. i left it on for long, i remember reading that getting past one of the numbers is hard but i had gone like few past it.
scanf("%llu",&inp);
    membig=collatz(inp);
for(i=inp;i<hi;i++){
    int a=collatz(i);
if(a>membig){
    printf("%llu\n",i);
    membig=a;}}
}
}
