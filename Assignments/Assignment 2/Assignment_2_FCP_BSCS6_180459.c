/*Name:    Muhammad Rizwan Khalid
  Class:   BSCS-6A
  Reg. No: 180459
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*Variables Declaration*/
    int  Card_1, Card_2, Card_3, Total_P, Card_4, Card_5, Card_6, Total_D;
    char choice[10];
    /*Linking random numbers with local time so that each time their sequence changes.*/
    time_t t;
    srand((unsigned) time(&t));
    /*Generating random numbers and initializing the variables with that numbers.*/
    Card_1 = rand() % 10 + 2;
    Card_2 = rand() % 10 + 2;
    Card_4 = rand() % 10 + 2;
    Card_5 = rand() % 10 + 2;
    printf("\t\t\tWelcome to Simple BlackJack Program!\n\n");
    /*Play drew random numbers*/
    printf("You get a %d and %d\n", Card_1, Card_2);
    /*Getting the sum of drew*/
    Total_P = Card_1 + Card_2;
    printf("Your total is %d\n\n", Total_P);
    /*Imposing condition such that if both numbers are 11 the their sum will be 22 and player will get busted*/
        if (Total_P > 21)
        {
            printf("The Player gets over 21.\n");
            printf("Player is BUSTED!\n");
            printf("\t\t\t\"Dealer Wins!\"\n");
            printf("\t\t\t Game is over! \n");
            goto end;
        }
    /*Dealer drew random numbers, hiding one of its drew*/
    printf("The dealer has a %d showing, and a hidden card.\n", Card_4);
    /*The total of dealer is also hidden*/
    printf("His total is hidden, too.\n\n");
    /*Getting a choice from the user*/
    printf("Would you like to \"hit\" or \"stay\"?");
    scanf("%s", choice);
    /*The below statement will evaluate the condition i.e. if any word
    other than hit or stay is entered then there will be an error.*/
    if (strcmp(choice,"hit")==0 || strcmp(choice,"stay")==0)
        {
    /*Comparing string such that loop continues till the hit is entered*/
            while (strcmp(choice,"hit") == 0 )
                {
    /*Player again drew a random number which is stored in the variable*/
                    Card_3 = rand() % 10 + 2;
                    printf("You drew a %d.\n", Card_3);
    /*Getting the sum of player's drew as long as the hit is entered by the user*/
                    Total_P = Total_P + Card_3;
    /*Displaying the sum of player's drew*/
                    printf("Your Total is %d\n\n", Total_P);
    /*Player will get busted if its total exceeds 21.*/
                    if (Total_P > 21)
                        {
                            printf("The Player gets over 21.\n");
                            printf("Player is BUSTED!\n");
                            printf("\t\t\t\"Dealer Wins!\"\n");
                            printf("\t\t\t Game is over! \n");
                            goto end;
                        }
    /*Getting a choice from the user*/
                    printf("Would you like to \"hit\" or \"stay\"?");
                    scanf("%s", choice);
                    if (strcmp(choice,"hit")==0 || strcmp(choice,"stay")==0)
                        {
                            continue;
                        }
                    else
                        {
                            printf("\nThere is an error in choice....\n");
                            printf("You have entered an invalid choice....\n");
                            goto end;
                        }
                }
        }
    else
        {
            printf("\nThere is an error in choice....\n");
            printf("You have entered an invalid choice....\n");
            goto end;
        }
    printf("\nOkay, dealer's turn.\n");
    printf("His hidden card was a %d.\n", Card_5);
    /*Storing the sum of dealers drew into a variable*/
    Total_D =  Card_4 + Card_5;
    printf("His total was %d.\n\n", Total_D);
    while (Total_D <= 16)
        {
    /*Dill will hit as long as his total is less than or equal to 16*/
            printf("Dealer choses to hit.\n");
            Card_6 = rand() % 10 + 2;
            printf("He draws a %d\n", Card_6);
     /*Storing the sum of dealers drew into a variable*/
            Total_D = Total_D + Card_6;
            printf("His total is %d\n\n", Total_D);
        }
    /*If the total of dealer exceeds 16 then he will stay.*/
    if ((Total_D > 16) && (Total_D <= 21))
        {
            printf("Dealer Stays.\n\n");
            printf("Dealer total is %d\n", Total_D);
            printf("Your total is %d\n", Total_P);
        }
    if (Total_D > 21)
        {
    /*If the total of the dealer exceeds 21 then he will get busted.*/
            printf("The Dealer gets over 21.\n");
            printf("Dealer is BUSTED!\n");
            printf("\t\t\t\"YOU WIN!\"\n");
            printf("\t\t\t Game is over! \n");
            goto end;
        }
    if (Total_P > Total_D)
        {
    /*Comparing the total of both players.*/
            printf("\t\t\t\"YOU WIN!\"\n");
            printf("\t\t\t Game is over! \n");
        }
    if (Total_D > Total_P)
        {
    /*Comparing the total of both players.*/
            printf("\t\t\t\"Dealer Wins!\"\n");
            printf("\t\t\t Game is over! \n");
        }
    if (Total_P == Total_D)
        {
    /*Comparing the total of both players.*/
            printf("\t\t\t\"Total Of Both Players is Equal, so:\"\n");
            printf("\t\t\t\"Dealer Wins!\"\n");
            printf("\t\t\t Game is over! \n");
        }
    end:
    system("pause");
    return 0;
}
