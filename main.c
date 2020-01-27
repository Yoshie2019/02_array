#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    
    while(fgets(str, sizeof(str), stdin) != NULL){
        
            printf("%5s", str);
    }

    return 0;
}
