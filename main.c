#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int val,i,correct,rval;
    srand(time (NULL));
    rval=rand()%100;
    printf("RULES : \n1.Maximum 8 guesses\n2.The number is randomly generated\n3.Upto 3 digit number is allowed\n\n_____LETS START_____\n");
    for(i=1;i<=8;i++)
    {
        printf("\nGuessed value ");
        scanf("%d",&val);
        if(val>rval)
            printf("Value is greater\n");
        else if(val<rval)
            printf("Value is smaller\n");
        else
        {
            correct=1;
            break;
        }
    }
    if(correct==1)
        printf("\nCORRECT GUESS\nNo. of tries = %d",i);
    else
        printf("\nWRONG GUESS\n");
    getch();
}
