// generate 3 random no. in a range and don't generate same random no. again after rexecuting until i reset the values


#include <stdio.h>
#include <stdlib.h>

void Random(int lower, int upper, int count)
{
    int i;
    for (i = 0; i < count; i++) {
        int num = (rand() %
           (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
}

int main()
{
    int lower, upper, count =3;
    printf("Enter lower bound: ");
	scanf("%d",&lower);
	printf("Enter upper bound: ");
	scanf("%d",&upper);

    Random(lower, upper, count);

    return 0;
}
