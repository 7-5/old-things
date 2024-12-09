//this contains much problems but algorithm is quite optimised mathematically. i was still a math sweat back then.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){
        int hola=0;
        unsigned long long int n;
        printf(" #=======================================================#\n");
        printf(" Hello and welcome to number primality test v1.3\n");
        printf(" with love, now with changelog and better version \n"); //literally doesnt even have a github account.
        printf(" numbers, eh, i ve been coding since 3 weeks or something.\n");//i did some cool thing where i added an icon i made to exe file and did edit exe details tho.
        printf(" #=======================================================#\n\n");
        printf(" Instructions: you ll input a positive integer and upon pressing \n enter and program will compute if its a prime or not.\n if inputted a negative number, program will \n To exit program input 0.\n\n\n");
    	//wait wtf will the program do if i input negative lol? oh it rounds to the unsigned long long integer limit. actually cool!
	for (hola=0; hola==0; hola=hola) //AWFUL variable names.
    {
            printf(" Please input your number: ");
            scanf("%llu",&n);
            printf("\n The number %llu is divisible by ",n);
                unsigned long long int d = ceil(sqrt(n));
                unsigned long long int i;
                int control=0;  //:(
                if (n==0) goto L1; //:((((((((((((((
                if (n==1) control=2;
                if (n%2==0) control=1;
                if (n%2==0&&n!=2) printf("2.");
                if (n%3==0&&control==0&&n!=3)  printf("3.");
                if (n%3==0) control=1;
                if (n==2||n==3) control=3;
        for (i=1; (control==0)&&((6*i-1)<d); i++) 
        {
            if (n%(6*i-1) == 0) 
            {
                if (control==0) printf("%llu.",6*i-1);
            control=1;
            }

            if (n%(6*i+1) == 0) 
            {
                if (control==0) printf("%llu.",6*i+1);
            control=1;
            }
        }
            if (control==0) printf("none.\n %llu is a PRIME NUMBER! :-)",n);
            if (control==1) printf("\n Therefore, %llu is not prime :(",n);
            if (control==2) printf("... welll only itself... soo\n 1 is not prime. What's the point of asking 1 anyways?"); //the user might be noob in primes. dont make them shy!
            if (control==3) printf("none.\n %llu is a PRIME NUMBER! :-)",n);
            printf("\n\n\n\n");
    }
L1: return 0; //nooooooooooooooooooooooooo
}
