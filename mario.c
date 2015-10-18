/*
//Problem solving for pset1 mario
*/
 
#include <stdio.h>
#include <cs50.h>
 
int main(void)
{
 
    // Declaring variables
    int height = 0; 
     
    // Get from user desired pyramid height between 1 and 23
    do
    {
        printf("Set pyramid height:\n");
        height = GetInt();
    }
    while (height < 1 || height >23);
     
    // First loop to control number of rows
    for (int i = 0; i < height; i++)
    {
        // Loop to print spaces
        for (int j = 0; j < height - i - 1; j++)
        {
            printf("%s", " ");
        }
         
        //Loop to print hashes
        for (int k = 0; k < i + 2; k++)
        {
            printf("%s", "#");
        }
        printf("\n");
    }
    return 0;
}
