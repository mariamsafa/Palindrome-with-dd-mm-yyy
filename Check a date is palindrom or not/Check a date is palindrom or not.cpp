#include<stdio.h>
int main()
{
	int day, month, year, n;
	int original, reverse=0, remainder;
	printf("Enter a date (dd/mm/yyy) : ");
	scanf_s("%d/%d/%d", &day, &month, &year);
	printf("\n");
	n = day * 100;
	n = n + month;
	n = n * 100;
	n = n + year;
	original = n;
	while (n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n = n / 10;
	}
	if (original == reverse)
	{
		printf("%d/%d/%d is a Palindrome\n", day,month,year);
	}
	else
	{
		printf("%d/%d/%d is not a Palindrome\n", day,month,year);
	}
	return 0;
}