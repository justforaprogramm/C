#include <stdio.h>
#include <stdbool.h>

void sort(double prices[], int size_price, bool reverst);
void printArray(double a[], int size_a);

int main(void)
{
    double prices[] = {1, 2, 69, 3, 420,10.5 ,20, 5, 21, 23, 42};

    int size_price = sizeof(prices) / sizeof(prices[0]);

    sort(prices, size_price, 0);

    printArray(prices, size_price);

    return 0;
}

void sort(double a[], int size_a, bool reverst)
{

    for (int i = 0; i < size_a -1; i++)
    {
        for (int j = 0; j < size_a - i -1; j++)
        {
            if(false == reverst)
            {
                if (a[j] > a[j+1])
                {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
            else
            {
                if (a[j] < a[j+1])
                {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }

            
        }
        
    }
    
}

void printArray(double a[], int size_a)
{
    //give array out
    printf("%d = [", size_a);
    for(int i = 0; i < size_a -1; i++)
    {
        printf("%.2f, ", a[i]);
    }
    printf("%.2lf]\n", a[size_a-1]);
}