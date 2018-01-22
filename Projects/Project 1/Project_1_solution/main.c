/* Team Project: Muhammad Rizwan Khalid (180459)
                 Muhammad Nouman Javaid (140496)
   Class: BSCS-6A

*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include "Mylib.h"
void main()
{
	int k, l, m, n, o, p, q, val, val1, StreamValue[100];
    char line[100], line1[100], line3[100], line4[100], arr[100], arr1[100], arr2[100], arr3[100];
    char line2[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	srand(time(0));
	printf("+---------------------+\n");
    printf("| Solitaire Algorithm |\n");
    printf("+---------------------+\n\n");
    printf("ENCRYPTION Pass.\n\n");
    printf("Enter Your Message: ");
    gets(line);
	l = 0;
    for(k = 0; k < strlen(line); k++){
        if(isalnum(line[k])){
            line1[l] = line[k];
            l++;
        }
    }
    line1[l] = '\0';
    strupr(line1);
    printf("\n");
    printf("Cleaned Message:       %s\n", line1);
    printf("Letters to Numbers:    ");
    for(m = 0 ; m < strlen(line1); m++){
        for(n = 0; n < 26; n++){
            if(line1[m] == line2[n]){
                printf("%d ", n + 1);
                arr[m] = n + 1;
            }
        }
    }
    printf("\nGenerated Keystreams:  ");
    for(o = 0; o < strlen(line1); o++){
        StreamValue[o] = keystream();
    }
    for(o = 0; o<strlen(line1); o++){
        printf("%d ", StreamValue[o]);
    }
    printf("\nEncoded Number:        ");
	for (p = 0; p < strlen(line1); p++) {
		arr1[p] = StreamValue[p] + arr[p];
		if (StreamValue[p] + arr[p] > 26) {
			arr1[p] = (StreamValue[p] + arr[p]) - 26;
		}
	}
	for (p = 0; p < strlen(line1); p++) {
		printf("%d ", arr1[p]);
	}
    printf("\nEncoded Message:       ");
    for(q = 0; q < strlen(line1); q++){
        val = arr1[q] - 1;
        printf("%c  ", line2[val]);
    }


    printf("\n\nDecryption Pass.\n\n");
    printf("\nEnter Encoded message:   ");
    gets(line3);
    l = 0;
    for(k = 0; k < strlen(line3); k++){
        if(isalnum(line3[k])){
            line4[l] = line3[k];
            l++;
        }
    }
    line4[l] = '\0';
    strupr(line4);
    printf("\nEncoded Message:       %s", line4);
    printf("\nLetters to Numbers:    ");
    for(m = 0 ; m < strlen(line4); m++){
        for(n = 0; n < 26; n++){
            if(line4[m] == line2[n]){
                printf("%d ", n + 1);
                arr2[m] = n + 1;
            }
        }
    }
    printf("\nGenerated Keystreams:  ");
    for(o = 0; o < strlen(line4); o++){
        printf("%d ", StreamValue[o]);
    }
    printf("\nDecoded Number:        ");
    for(p = 0; p < strlen(line4); p++){
        if (arr2[p] <= StreamValue[p]){
            arr3[p] = (arr2[p] + 26) - StreamValue[p];
            printf("%d ", arr3[p]);
        }
        if (arr2[p] > StreamValue[p]){
                arr3[p] = arr2[p] - StreamValue[p];
                printf("%d ", arr3[p]);
        }
    }
    printf("\nDecoded Message:       ");
    for(q = 0; q < strlen(line4); q++){
        val1 = arr3[q] - 1;
        printf("%c  ", line2[val1]);
    }
    printf("\n\n");
    system("pause");
}
