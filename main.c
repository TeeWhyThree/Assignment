#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cipherEncryption(char *cipherText, int key);

int main()
{
    int key = 0;
    int cipher = 0;
    char cipherText[150];
    printf("Enter text for encryption: \n");
    scanf("%[^\n]s", &cipherText[150]);
    printf("Enter a key value: \n");
    scanf("%d", &key);
    printf("The key value is: %d\n", key);
    printf("The encrypted text is:\n %c", cipher);
}

void cipherEncryption(char *cipherText, int key)
{
    int i = 0;
    int cipher;
    char cipherValue;
    while(cipherText[i] != '\0' && cipherText[150] -1 > i)
    {
        cipherValue = (((int)cipherText[i] - 22 + key)%26 + 22);
        cipher = (char)(cipherValue);
        printf("%c", cipher);
        i++;
    }  
}