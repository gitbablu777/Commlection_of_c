// this is my c program of else if

# include <conio.h>
# include <stdio.h>

int main ()

{
    int x ;
    x = 1 ;
    printf("type here any number:\t");
    scanf("\t %d", &x);
    if (x>=1 && x<=20)
    {
        printf("green");
    }
    else if(x>=20 && x<=40)
    {
        printf("yellow");
    }
    else if(x>=40 && x<=60)
    {
        printf("red");
    }
    else
    {
        printf("blue");
    }
    



}
