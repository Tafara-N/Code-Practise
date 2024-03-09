#include <stdio.h>

int main(void)
{
	int arr[15] = { [7] = 444, [2] = 67 };

	printf("%d\n", arr[7]);

	return (0);
}