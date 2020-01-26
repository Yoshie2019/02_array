#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    fgets(str, sizeof(str), stdin)
    
    while(sprintf(str, sizeof(str), stdin)){
        printf("%s", str);
    }

    return 0;
}
