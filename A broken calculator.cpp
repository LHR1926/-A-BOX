#pragma warning(disable : 4996)
#include <stdio.h
#include <string.h>

char plain[100], cry[100];
int i, key;

int encrypt()
{
    printf("请输入明文:");
    scanf("%s", &plain[i]);
    printf("请输入密钥(1-25):");
    scanf("%d", &key);
    for (i = 0; i < strlen(plain); i++)
    {
        if (plain[i] >= 'A' && plain[i] <= 'Z')
        {
            plain[i] = (plain[i] - 'A' + key) % 26 + 'A';
        }
        else if (plain[i] >= 'a' && plain[i] <= 'z')
        {
            plain[i] = (plain[i] - 'a' + key) % 26 + 'a';
        }
    }
    printf("%s", plain);
    printf("\n");
    return 0;
}

int decrypt()
{
    printf("请输入密文:");
    scanf("%s", &cry[i]);
    printf("请输入密钥(1-25):");
    scanf("%d", &key);
    for (i = 0; i < strlen(cry); i++)
    {
        if (cry[i] >= 'A' && cry[i] <= 'Z')
        {
            cry[i] = (cry[i] - 'A' - key) % 26 + 'A';
        }
        else if (cry[i] >= 'a' && cry[i] <= 'z')
        {
            cry[i] = (cry[i] - 'a' - key) % 26 + 'a';
        }
    }
    printf("%s", cry);
    printf("\n");
    return 0;
}

int main()
{
    int c;
    printf("加密选择1，解密选择2:");
    scanf("%d", &c);
    if (c == 1)
    {
        encrypt();
    }
    if (c == 2)
    {
        decrypt();
    }
    return 0;
}
