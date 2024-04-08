#include <stdio.h>
#include <string.h>
#include "c.h"

const char *a = "Hello, C++ world!\n";

int main(void)
{
	int unused = 0;
	const char *s = hello_c();
	if (mystrcmp(s, a) < 0)
		printf("%s", s);
	else
		printf("%s", a);
}
