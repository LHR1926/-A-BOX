#define M 10
#include <stdio.h>
int main (void)
{
    int a[M];
    int n, low, mid, high, number;			/*����n�����û����룬����low��ʾ�����е�ǰλ��mid��ʾ�����е��м�λ,
											high��ʾ�����еĺ�λ��number���ڱ�ʾ�����Ƿ�ɹ�*/
    int i, j, t;			//����i��j���ڶ�����Ԫ�ؽ��дӴ�С����;����t��������Ԫ��ֵ�Ľ���


    low = 0;
    high = M-1;
    number = 0;

    printf("Please input 10 numbers:\n");
    for (n=0; n < 10; n++)			//ʹ��ѭ�����û�Ϊ����Ԫ�ظ�ֵ
    {
        printf("a[%d]=", n);
        scanf("%d", &a[n]);
    }

    for (i=0; i < M-1; i++)<span>			</span>//ʹ��ð�����򷨽��дӴ�С������
    {
        for (j=0; j < M-1-i; j++)
        {
            if (a[j] < a[j+1])			//a[j+1]��������Ԫ�صĺ�һ��Ԫ��
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for (i=0; i < 10; i++)
    {
        printf("%d\t", a[i]);			//�������������Ԫ��
    }
    n = 0;
    printf("Please input a integer:\n");			//��ʾ�û�����Ҫ���ҵ�ֵ
    scanf("%d", &n);
    <span style="font-family:Arial, Helvetica, sans-serif;">//ʹ�ö��ַ����в���</span>
                while (low <= high)
    {
        mid = (low+high)/2;
        if (n == a[mid])
        {
            number = 1;
            break;
        }
        else if (a[mid] < n)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    if (number == 1)
    {
        printf("the index of %d is: %d\n", n, mid);
    }
    else
    {
        printf("Program Can't find the number!\n");
    }
