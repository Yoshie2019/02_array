#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    
    
    while(sprintf(str, sizeof(str), stdin)){
        printf("%s", str);
    }

    return 0;
}
