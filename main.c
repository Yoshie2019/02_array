#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    
    while(fgets(str, sizeof(str), stdin)){
        
        if(str < 0)
            str[]=str[str+1];
        else
            printf("%s", str);
    }

    return 0;
}
