#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float add(float num_a1,float num_a2);
float sub(float num_s1,float num_s2);
float multi(float num_m1,float num_m2);
float divi(float num_d1,float num_d2);


int main()
{


float add(float num_a1,float num_a2)
{

return num_a1 + num_a2;
}

float sub(float num_s1,float num_s2)
{

return num_s1 - num_s2;
}

float multi(float num_m1,float num_m2)
{

return num_m1 * num_m2;
}

float divi(float num_d1,float num_d2)
{
    return num_d1/num_d2;
}



    float one;
    float two;
    top:
    printf("\t\t\t\t\t\tCalculator");
    printf("\nEnter First number:");
    scanf("%f", &one);


    _flushall();



    printf("\nEnter second number:");
    scanf("%f", &two);
    _flushall();

    try:
    printf("\n\nPress 1 for addition");
    printf("\nPress 2 for subtraction");
    printf("\nPress 3 for multiplication");
    printf("\nPress 4 for division");
    printf("\nYour answer:");
    int ans = 0;
    char answ;
    scanf("%d", &ans);
    _flushall();


    if(ans==1){

       printf("\nThe answer is :%.2f",add(one,two));

    }

     if(ans==2)
    {
        printf("\nThe answer is :%.2f",sub(one,two));

    }

     if(ans==3)
    {
        printf("\nThe answer is :%.2f",multi(one,two));
    }
    if(ans==4)
    {
        printf("\nThe answer is :%.2f",divi(one,two));
    }
     if(ans!=1 && ans!=2 && ans!=3 && ans!=4)
        {
         system("cls");

         printf("\aPlease try again.");
        goto try;
    }

    int rep ;
    tag:
    printf("\nWould you like to Calculate again? Press 1 for yes / Press 2 for no.\n");
    scanf("%d", &rep);
    _flushall();
    if(rep==1)
    {
        system("cls");
        goto top;
    }
    if(rep==2)
    {
        printf("\n\nThanks for using calculator, See you soon ^_^");
        getch();
    }
    else if (rep!=1&rep!=2)
    {
        system("cls");
        printf("\aMeh ! Try again.");
        goto tag;
    }

    }



