#include <stdio.h>

void cough(int x);

int main(void)
{
    cough(3);

}












void cough(int x)
{
    for(int i = 0; i < x; i++)
    {
        printf("cough!!\n");
    }
}