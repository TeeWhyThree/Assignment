#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cipherEncryption(char *cipherText, int key);

int main()
{
    int key = 0;
    int cipherValue = 0;
    char cipherText[200];
    
    printf("Enter text for encryption: \n");
    scanf("%s", cipherText);
    
    printf("Enter a key value: \n");
    scanf("%d", &key);

   
   
    printf("The key value is: %d\n", key);
    printf("The encrypted text is:\n %s", cipherValue);
}

void cipherEncryption(char *cipherText, int key)
{
    int i = 0;
    char cipherValue;
    while(cipherText[i] != '\0' && cipherText[200] -1 > i)
    {
        cipherValue = (((int)cipherText[i] - 22 + key)%26 + 22);
        i++;
        printf("%c", cipherValue);
    }  
}