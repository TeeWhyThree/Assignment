#include <stdio.h>

void cipherRotationE(char *cipherText, int key); //Encryption
void cipherRotationD(char *cipherText, int key); //Decryption

int main()
{
	char cipherText[150];
	int key, encryptDecrypt;
	
	
	printf("Enter a meessage to encrypt/decrypt: ");
	gets(cipherText);
	printf("Press 1 to encrypt and 2 to decrypt: ");
	scanf("%d", &encryptDecrypt);
	printf("Enter key: ");
	scanf("%d", &key);
	
	switch(encryptDecrypt)
    {
        case 1:
	    cipherRotationE(cipherText, key);
	    break;
	    case 2:
        cipherRotationD(cipherText, key);
        break;
	    default:
        printf("Did not receive answer. Please try again");
    }

	return 0;
}

	
void cipherRotationE(char *cipherText, int key)
{
    int i;
    char ch;
    for(i = 0; cipherText[i] != '\0'; ++i)
    {
		ch = cipherText[i];
		
		if(ch >= 'a' && ch <= 'z')
		{
			ch = ch + key;
			
			if(ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			
			cipherText[i] = ch - 32;
		}
		else if(ch >= 'A' && ch <= 'Z')
		{
			ch = ch + key;
			
			if(ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			
			cipherText[i] = ch;
		}
	}
	printf("Encrypted meessage: %s", cipherText);
}

void cipherRotationD(char *cipherText, int key)
{
    int i;
    char ch;
    for(i = 0; cipherText[i] != '\0'; ++i)
    {
		ch = cipherText[i];
		
		if(ch >= 'a' && ch <= 'z')
		{
			ch = ch - key;
			
			if(ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			
			cipherText[i] = ch - 32;
		}
		else if(ch >= 'A' && ch <= 'Z')
		{
			ch = ch - key;
			
			if(ch < 'Z')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			
			cipherText[i] = ch;
		}
	}
	printf("Decrypted meessage: %s", cipherText);
}
