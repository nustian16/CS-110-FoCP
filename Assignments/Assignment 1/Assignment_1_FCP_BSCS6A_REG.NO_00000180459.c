#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Name: Muhammad Rizwan Khalid
  Section: BSCS-6A
  Reg. No: 00000180459 */
int main()
{
    char v1[15];
    char v2[15];
    char v3[15];
    char n1[15];
    char n2[15];
    char n3[15];
    char n4[15];
    char n5[15];
    char adj[15];
    printf("\t\t\t\t Welcome to Mad libs Game......\n");
    printf("\t\t\t\t Let's start the Game..........\n");
    printf("Enter a verb:\n");
    scanf("%s", v1);
    printf("Enter the name of any plant:\n");
    scanf("%s", n1);
    printf("Enter a thing that exists very often:\n");
    scanf("%s", n2);
    printf("Enter an adjective for feelings:\n");
    scanf("%s", adj);
    printf("Enter a verb:\n");
    scanf("%s", v2);
    printf("Enter any noun in plural:\n");
    scanf("%s", n3);
    printf("Enter a name of any plant:\n");
    scanf("%s", n4);
    printf("Enter the name of an animal:\n");
    scanf("%s", n5);
    printf("Enter the verb:\n");
    scanf("%s", v3);
    printf("\"If some one %s a %s of which just one example exists among all the\n millions and millions of %s, that's enough to make him %s when he\n %s at the %s. He tells himself,\"My %s is up there somewhere....\"\n But if the %s %s the flower, then for him it's as if, suddenly, all\n the stars went out. And that isn't important?\"\n", v1, n1, n2, adj, v2, n3, n4, n5, v3);
    printf("\t\t\t\t Game Ends.............\n");
    printf("\t\t\t\t Thank you for playing.\n");
    printf("\t\t\t\t GOOD BYE TAKE CARE....\n");
    getchar();
    return 0;


}
