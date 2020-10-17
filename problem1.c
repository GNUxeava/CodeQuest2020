#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char input[20];
    int i = 1;
    int eflag = 0;
    int decflag = 0;
    printf("Enter a string: ");
    fgets(input, 20, stdin);
    //scanf("%s", &input);
    if (input[0] == '.' || input[0] == '+' || input[0] == '-' || (input[0] >= '0' && input[0] <= '9'))
    {
        if (input[0] == '.') ++decflag;
        for (i = 1; input[i] != '\0' && eflag <= 1 && decflag <= 1; ++i)
        {
            if (input[i] == 'e')
                ++eflag;
            else if (input[i] == '.') ++decflag;
            else if (input[i] < '0' && input[i] > '9')
                {
                    printf("not a number\n");
                    break;
                }
        }
                if (eflag > 1 || decflag > 1)
                {
                    
                    printf("not a number.\n");
                        return -1;
                }
                else printf("The string is a number.");
    }
    
    return 0;
}
