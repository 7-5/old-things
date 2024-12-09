#include <stdio.h>
#include <math.h>
    int main() {
        double num1;
        double num2;
        double mem3;
        int i;
        printf(" Arithmetic-geometric mean calculator v1.0.0\n 'cause integral definition sucks!'\n yea this isnt the exact algebraic expression,\n duh, this is a number, who cares?\n plss input value 1: ");
        //i was SO frusrated with needing to round. this is just a huge cope. also the 1 space so that it doesnt touch the edge thing is a common thing on my first c projects.
        //uni's physics class would teach rounding. i did it well but still hated it. wanted to become a mathematician, i was on computer engineering major. (I dont regret it.)
        //only was obsessed with getting exact representation. coding didnt like that much because main data types can only hold like few bytes.
        //integral definition does NOT suck. i was just salty i made a mistake on an integral project or something iirc.
        scanf("%lf",&num1);
        printf(" plz input 2nd value: ");
        scanf("%lf",&num2);
        for (i=0; i<200; i++)
            {
                mem3=(num1+num2)/2;
                num1=sqrt(num1*num2);
                num2=mem3;
            }
        printf("\n The arithmetic-Geometric mean for %lf and %lf is: \n %lf",num1,num2,mem3);
        scanf("%lf",&num1);
    return 0;
}
