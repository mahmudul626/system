#include <stdio.h>

int orGate(int inp1, int inp2);

int main()
{
    int inp1, inp2;
    printf("Output : %d", orGate(inp1, inp2));
    return 0;
}

int orGate(int inp1, int inp2)
{
    printf("Enter Input :");
    scanf("%d %d", &inp1, &inp2);

    if (inp1 || inp2 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}