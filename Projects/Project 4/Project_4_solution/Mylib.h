
void negate_red(FILE* input, FILE* output, int rows, int columns){
    int red, green, blue, i, j;
    for ( i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            fscanf(input, "%d", &red);
            red = 255 - red;
            fscanf(input, "%d", &green);
            fscanf(input, "%d", &blue);
            fprintf(output,"\t%d %d %d", red,green,blue);
        }
    }
}

void negate_green(FILE* input, FILE* output, int rows, int columns){
    int red, green, blue, i, j;
    for ( i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            fscanf(input, "%d", &red);
            fscanf(input, "%d", &green);
            green = 255 - green;
            fscanf(input, "%d", &blue);
            fprintf(output,"\t%d %d %d", red,green,blue);
        }
    }
}

void negate_blue(FILE* input, FILE* output, int rows, int columns){
    int red, green, blue, i, j;
    for ( i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            fscanf(input, "%d", &red);
            fscanf(input, "%d", &green);
            fscanf(input, "%d", &blue);
            blue = 255 - blue;
            fprintf(output,"\t%d %d %d", red,green,blue);
        }
    }
}

void grey_scale(FILE* input, FILE* output, int rows, int columns){
    int red, green, blue, i, j, average;
    for ( i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            fscanf(input, "%d", &red);
            fscanf(input, "%d", &green);
            fscanf(input, "%d", &blue);
            average = (red + green + blue) / 3;
            red = average;
            green = average;
            blue = average;
            fprintf(output,"\t%d %d %d", red,green,blue);
        }
    }
}

void flatten_red(FILE* input, FILE* output, int rows, int columns){
    int red, green, blue, i, j;
    for ( i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            fscanf(input, "%d", &red);
            red = 0;
            fscanf(input, "%d", &green);
            fscanf(input, "%d", &blue);
            fprintf(output,"\t%d %d %d", red,green,blue);
        }
    }
}

void flatten_green(FILE* input, FILE* output, int rows, int columns){
    int red, green, blue, i, j;
    for ( i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            fscanf(input, "%d", &red);
            fscanf(input, "%d", &green);
            green = 0;
            fscanf(input, "%d", &blue);
            fprintf(output,"\t%d %d %d", red,green,blue);
        }
    }
}

void flatten_blue(FILE* input, FILE* output, int rows, int columns){
    int red, green, blue, i, j;
    for ( i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            fscanf(input, "%d", &red);
            fscanf(input, "%d", &green);
            fscanf(input, "%d", &blue);
            blue = 0;
            fprintf(output,"\t%d %d %d", red,green,blue);
        }
    }
}


void flip_horizontally(FILE* input, FILE* output, int rows, int columns){
    int i, j, flip[3][1080];
    for ( i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            fscanf(input, "%d", &flip[0][j]);
            fscanf(input, "%d", &flip[1][j]);
            fscanf(input, "%d", &flip[2][j]);
            fprintf(output,"\t%d %d %d", flip[0][columns-j-1], flip[1][columns-j-1], flip[2][columns-j-1]);
        }
    }
}
