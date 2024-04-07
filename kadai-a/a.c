#include <stdio.h>
#include <string.h>
#include "c.h"

const char *a = "Hello, C++ world!\n";

int main(void)
{
	const char *s = hello_c();
	if (strcmp(s, a) < 0)
		printf("%s", s);
	else
		printf("%s", a);
}