#include <stdio.h>
#include <unistd.h> // for sleep function

void swap(int *a, int *b, int *c)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    swap(&a, &b, &c);

    // Countdown loop with corrected condition
    for (int n = 1000; n > 0; n--) {
        printf("Loading.......%d Sec left\n", n);
        sleep(1);
    }

    printf("The numbers after swapping are: %d %d %d\n", a, b, c);
    return 0;
}
