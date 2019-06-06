#include <stdio.h>
#include <string.h>

void encryptionText(char*);
void decryptionText(char*);

int main(void)
{
    char *cipherText[150];
    char decryptKey[26] = "QETUOSFHKZCBMWAXRDVYGNIJPL";
    char encryptKey[26] = "abcdefghijklmnopqrstuvwxyz";
    printf("Enter text: ");
    gets(cipherText);
    printf("Text entered:\n %s\n", cipherText);
    
    encryptionText(cipherText);
    
    decryptionText(cipherText);
    
    return 0;
}

void encryptionText(char *cipherText)
{
    int i=0;
    char decryptKey[26] = "QETUOSFHKZCBMWAXRDVYGNIJPL";
    char encryptKey[26] = "abcdefghijklmnopqrstuvwxyz";
	while(*(cipherText+i) != '\0')
    {
		*(cipherText+i)=decryptKey[*(cipherText+i)-97];
		i++;
	}
	
    printf("The encrypted text is:\n %s \n", cipherText);
}
void decryptionText(char *cipherText)
{
    int i=0;
    char decryptKey[26] = "QETUOSFHKZCBMWAXRDVYGNIJPL";
    char encryptKey[26] = "abcdefghijklmnopqrstuvwxyz";
	while(*(cipherText+i) != '\0'){
		int iterations;
		for(iterations = 0; iterations < 26; iterations++)
		{
			if(decryptKey[iterations] == *(cipherText+i))
			break;
		}
		*(cipherText+ i) = encryptKey[iterations];
		i++;
	}
	printf("The decrypted text is:\n %s \n", cipherText);
}
