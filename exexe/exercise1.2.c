#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES = 10; 

void readin(char *output, char const *input, int n_columns, int const columns[]);
int readlinecol(int line, char const *input);

int main(void)
{
    int line = 1;
    char input[];
    char output[];

    puts("请输入：");

    while(gets(input) != NULL )
    {
    	line += 1;
    	readlinecol(line, input)
    	readin(output, input, n_columns, columns);

    	if(line > MAX_LINES)
    	{
    		puts("Too many lines!");
    		break;
    	}



    }


	return 0;
}

void readin(char *output, char const *input, int n_columns, int const columns[])
{
    int output_col;
    int col;
    for 


	strncpy(output+output_col, input+columns[col])

}


int readlinecol(int line, char const *input)











