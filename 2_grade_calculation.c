#include<stdio.h>

int main(){

    int mark;

    printf("\nEnter Your Mark:  \n");
    scanf("%d",&mark);

    if (mark >=90)
    {
        printf("\nYou Achieved A Grade");
    }else if (mark >= 80 )
    {
        printf("\nYou Achieved B Grade");

    }else if (mark >= 70 )
    {
        printf("\nYou Achieved C Grade");
        
    }else if (mark >= 60 )
    {
        printf("\nYou Achieved D Grade");
        
    }else if (mark >= 50 )
    {
        printf("\nYou Achieved E Grade");
        
    }else
     {
        printf("\nYou Are Failed");
     }

    return 0;
}