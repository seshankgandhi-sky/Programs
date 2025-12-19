#include<stdio.h>
sum_of_divisors(int num) 
{
    int sum = 0;
    for(int i=1;i<=num/2;i++) 
	{
        if (num % i == 0)
            sum += i;
    }
    return sum;
}

int main() {
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);

    int sumN = sum_of_divisors(N);
    int sumM = sum_of_divisors(M);

    if (sumN == M && sumM == N)
        printf("Amicable\n");
    else
        printf("Not Amicable\n");

    return 0;
}

