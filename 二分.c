#define M 10
#include <stdio.h>
int main (void)
{
    int a[M];
    int n, low, mid, high, number;			/*变量n是让用户输入，变量low表示数组中的前位，mid表示数组中的中间位,
											high表示数组中的后位，number用于表示查找是否成功*/
    int i, j, t;			//变量i，j用于对数组元素进行从大到小排序;变量t用于数组元素值的交换


    low = 0;
    high = M-1;
    number = 0;

    printf("Please input 10 numbers:\n");
    for (n=0; n < 10; n++)			//使用循环让用户为数组元素赋值
    {
        printf("a[%d]=", n);
        scanf("%d", &a[n]);
    }

    for (i=0; i < M-1; i++)<span>			</span>//使用冒泡排序法进行从大到小的排序
    {
        for (j=0; j < M-1-i; j++)
        {
            if (a[j] < a[j+1])			//a[j+1]代表数组元素的后一个元素
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for (i=0; i < 10; i++)
    {
        printf("%d\t", a[i]);			//输出排序后的数组元素
    }
    n = 0;
    printf("Please input a integer:\n");			//提示用户输入要查找的值
    scanf("%d", &n);
    <span style="font-family:Arial, Helvetica, sans-serif;">//使用二分法进行查找</span>
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
