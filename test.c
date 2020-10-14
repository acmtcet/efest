#include <stdio.h>

void* func (const void* num);

int main(void)
{
	int x, y;
	x = 6;
	y = func(&x);
	printf("%d", y);
}

void* func (const void *n)
{
	int z;
	z = (*(int*) n) * (*(int*) n) - ((*(int*) n) + (*(int*) n));
	return z;
}