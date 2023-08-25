#include<stdio.h>
int main()
{
    printf("------------------------------------------------------------------------------------\n");
    printf("\t\t\tSTONE PAPER SCISSOR\n");
    printf("------------------------------------------------------------------------------------\n");
    
    int ch;
    m:
    printf("PRESS 1 for INSTRUCTION\nPRESS 2 for PLAY GAME\n");
    scanf("%d",&ch);
    if(ch==1)
    {
       printf("For single player\n");
       printf("1=>STONE\t2=>PAPER\t3=>SCISSOR\n");
       printf("For multiplayer\n\n");
       printf("For player 1\n1=>STONE\t2=>PAPER\t3=>SCISSOR\n");
       printf("For player 2\n4=>STONE\t5=>PAPER\t6=>SCISSOR\n");
       printf("NOTE:- @ RESULT WILL BE BASE ON BEST OF THREE @\n");
               goto m;
    }
    else if(ch==2)
    printf("PRESS 1 for single player\nPRESS 2 for multiple payer\n");
    int fe;
    scanf("%d",&fe);
    if(fe==2)
    {
    int p=0,q=0,v=0;
    for(int i=0;i<=2;i++)
    {
    int p1;
    int p2;
    printf("Player 1 turn\n");
    scanf("%d",&p1);
    printf("Player 2 turn\n");
    scanf("%d",&p2);
    (p1==1&&p2==6)?p++:(p1==1&&p2=='A')?q++:v++;
    (p1==2&&p2==4)?p++:(p1==1&&p2=='D')?q++:v++;
    (p1==3&&p2==5)?p++:(p1==1&&p2=='W')?q++:v++;
    }
    printf("Click 1 to check result\n");
    int result;
    scanf("%d",&result);
    if(result==1)
    {
    if(p>=2)
    {
    printf("Player 1 win\n");
    }
    else if(q>=2)
    {
    printf("Player 2 win\n");
    }
    else
    printf("Draw :(\n");
                    
    }
    else
    printf("Invalid choise\n");
    }
    else
    {
    printf("Computer turn\n");
    printf("Your turn\n");
    int p1=0;
    scanf("%d",&p1);
    if(p1==1 || p1==3)
    p1++;
    printf("Computer turn\n");
    printf("Your turn\n");
    scanf("%d",&p1);
    if(p1==2)
    p1++;
    printf("Computer turn\n");
    printf("Your turn\n");
    scanf("%d",&p1);
    if(p1==1 || p1==2)
    p1++;
    printf("Click 1 for result\n");
    int result;
    scanf("%d",&result);
    if(result==1)
    {
    if(p1>=2)
    printf("p1 wins\n");
    }
    else
     printf("Computer wins\n");
    }
     return(0);
        
}

    