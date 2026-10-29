/*
Name: SIVARAMA SUBRAMANIAN B R
Date: 29-10-2026
Description: Chocolate Chilly Game
*/
#include<stdio.h>
int main ()
{
    int choc,p1,p2,max;
    choc=13;
    printf("-----------Chocolate Chilly Game-----------\n");
    printf("Chocolates remaining: %d\n",choc);

    while(choc>0)
    {   
         retry1:
            if(choc>=3)
            max=3;
            else
            max=choc;

            printf("Player 1's turn,\n Enter Choice: ");
            scanf("%d",&p1);
            if ( p1<=0 || p1>max)
            {
                printf("Invalid choice, Try Again!!\n");
                goto retry1;
            }
            else
            {
                choc=choc-p1;
                if(choc==0)
                {   
                    printf("Chocolates remaining: %d\n",choc);
                    printf("Player 1 Wins !!\n");
                    break;
                }
                else
                {
                    printf("Chocolates remaining: %d\n",choc);
                }//goto retry2;
            }
        

            retry2:
            if(choc>=3)
            max=3;
            else
            max=choc;

            printf("Player 2's turn,\n Enter Choice: ");
            scanf("%d",&p2);

            if ( p2<=0 || p2>max)
            {
                printf("Invalid choice, Try Again!!\n");
                goto retry2;
            }
            else
            {
                choc=choc-p2;
                if (choc==0)
                {   
                    printf("Chocolates remaining: %d\n",choc);
                    printf("Player 2 Wins !!\n");
                    break;
                }
                else
                {
                    printf("Chocolates remaining: %d\n",choc);
                }//goto retry1;
            }
        

    }

}
