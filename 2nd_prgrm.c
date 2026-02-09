#include<stdio.h>
 int main( )
{
    printf("Good morning");
    printf("good night");
/*in this part of the program the output will be "Good morninggood night" because in this program we have not 
mentioned that we have to run 2nd code in another line and in this case computer will directly run the 2nd code 
after the end of the execution of first line in this situation we have to use escape siquence(\n) to get 2nd code in 
a separate line*/
printf("\n");
printf("Good morning");
printf("\n");//escape siquence used.
printf("good night");
/*now the output will be :
Good morning
good night
*/ 

    
    return 0;
}
