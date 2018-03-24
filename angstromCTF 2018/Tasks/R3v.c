#include <stdio.h>
#include <string.h>

int main(){

char h[100] = "egzloxi|ixw]dkSe]dzSzccShejSi^3q";
int i;

for (i=0; ; i++)
{
        if (i >= strlen(h))
                break;

        printf("%c", (h[i] + 3) ^ 9);
}

        printf("\n");

}
