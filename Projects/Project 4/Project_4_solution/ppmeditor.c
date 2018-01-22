/*************************************
*    Team members:                   *
*     Abdul razzaque jawad           *
*     Muhammad Rizwan Khalid         *
*	  Awais Latif Khatti             *
*	                                 *
*	  Class : BSCS-6A                *
*                                    *
*                                    *
**************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>
#include <conio.h>
#include "Mylib.h"

int main(){

    FILE *input_file;
    FILE *output_file;
    char File[100];

    printf("+------------------------------------+ \n| Portable Pixmap (PPM) Image Editor | \n+------------------------------------+\n");
    //only add "\" in the file name
    do
    {
        printf("\nEnter path and name of image file:  ");

        /*  e.g. C:\Users\mrizw\Downloads\blocks.ppm  */

        scanf("%s", &File);
        input_file = fopen(File, "r");
        if (input_file == NULL)
        {
            printf("\n%s\" File Does not Exist in given directory.", File);
        }
    } while (input_file == NULL);

    do
    {
        printf("Enter path and name of file you want to create:  ");

        /*  e.g. C:\Users\mrizw\Downloads\test.ppm  */

        scanf("%s", &File);
        output_file = fopen(File, "w");
        if (output_file == NULL)
        {
            printf("\n%s\" File NOT FOUND!", File);
        }
    } while (output_file == NULL);

    char temp[1024];
    int rows, columns, maximum;
    char choice;
    //This will deal with Header "P3"

    fgets(temp, 1024, input_file);
    fprintf(output_file, "%s", temp);

    //This will assign next two numbers of file to variable rows and columns

    fscanf(input_file, "%d %d", &rows, &columns);
    fprintf(output_file, "%d %d", rows, columns);

    fscanf(input_file, "%d", &maximum);
    fprintf(output_file, "\n%d\n", maximum);

    printf("\nHere are Your Choices:\n\t[1] Convert to greyscale\n\t[2] flip horizontally\n\t[3] negative of red\n\t[4] negative of green\n\t[5] negative of blue\n\t[6] flatten red\n\t[7] flatten green\n\t[8] flatten blue\n\n");
	int count = 0;

	//Effect [1]: Grey Scale.

    printf("Do you Want [1]? (y/n)");
	scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y'){
        grey_scale(input_file,output_file,rows,columns);
		count++;
    }

	//Effect [2]: Flip Horizontally.

    printf("Do you Want [2]? (y/n)");
	scanf(" %c", &choice);
	if (choice == 'y' || choice == 'Y'){
        flip_horizontally(input_file,output_file,rows,columns);
		count++;
    }

	//Effect [3]: Negative of Red.

    printf("Do you Want [3]? (y/n)");
	scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y'){
        negate_red(input_file,output_file,rows,columns);
		count++;
	}

	//Effect [4]: Negative of Green

    printf("Do you Want [4]? (y/n)");
	scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y'){
        negate_green(input_file,output_file,rows,columns);
		count++;
	}

	//Effect [5]: Negative of Blue.

    printf("Do you Want [5]? (y/n)");
	scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y'){
        negate_blue(input_file,output_file,rows,columns);
		count++;
	}

	//Effect [6]: Flatten Red.

    printf("Do you Want [6]? (y/n)");
	scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y'){
        flatten_red(input_file,output_file,rows,columns);
		count++;
	}

	//Effect [7]: Flatten Green.

    printf("Do you Want [7]? (y/n)");
	scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y'){
        flatten_green(input_file,output_file,rows,columns);
		count++;
	}

	//Effect [8]: Flatten Blue.

	printf("Do you Want [8]? (y/n)");
	scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y'){
        flatten_blue(input_file,output_file,rows,columns);
		count++;
	}

	printf("\nYou have applied %d effects.", count);
    printf("\nYour file has been created Check the Directory. :):)\n");

	//If no effect is called then making the copy of original file..

	int red, green, blue, i, j;
	if (count == 0) {
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < columns; j++)
			{
				fscanf(input_file, "%d %d %d", &red, &green, &blue);
				fprintf(output_file, "\t%d %d %d", red, green, blue);
			}
		}
	}

    fclose(input_file);
	fclose(output_file);

	system("pause");
}
