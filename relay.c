#include <stdio.h>
#define print_with_quotes(s) printf("%c%c%s%c,%c",9,34,s,34,10);

void print_with_escape(const char* s)
{
	putchar(9);
	putchar(34);
	while (*s) {
		if (*s == 34) {
			putchar(92);
		}
		putchar(*s);
		++s;
	}
	putchar(34);
	putchar(44);
	putchar(10);
}

int main()
{
	unsigned i;
	const char *data[] = {
	"#include <stdio.h>",
	"#define print_with_quotes(s) printf(\"%c%c%s%c,%c\",9,34,s,34,10);",
	"",
	"void print_with_escape(const char* s)",
	"{",
	"	putchar(9);",
	"	putchar(34);",
	"	while (*s) {",
	"		if (*s == 34) {",
	"			putchar(92);",
	"		}",
	"		putchar(*s);",
	"		++s;",
	"	}",
	"	putchar(34);",
	"	putchar(44);",
	"	putchar(10);",
	"}",
	"",
	"int main()",
	"{",
	"	unsigned i;",
	"	const char *data[] = {",
	"	NULL};",
	"	for (i = 0; i < 23; ++i)",
	"		puts(data[i]);",
	"	print_with_quotes(data[0]);",
	"	print_with_escape(data[1]);",
	"	for (i = 2; data[i] != NULL; ++i)",
	"		print_with_quotes(data[i]);",
	"	for (i = 23; data[i] != NULL; ++i)",
	"		puts(data[i]);",
	"	return 0;",
	"}",
	NULL};
	for (i = 0; i < 23; ++i)
		puts(data[i]);
	print_with_quotes(data[0]);
	print_with_escape(data[1]);
	for (i = 2; data[i] != NULL; ++i)
		print_with_quotes(data[i]);
	for (i = 23; data[i] != NULL; ++i)
		puts(data[i]);
	return 0;
}
