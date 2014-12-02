#include <stdio.h>
#define S(x) "%c%c%s%c%c%c",9,34,x,34,44,10
#define print_with_quotes(s) printf(S(s));

int main()
{	
	unsigned i;
	const char *data[] = {
	"#include <stdio.h>",
	"#define S(x) \"%c%c%s%c%c%c\",9,34,x,34,44,10",
	"#define print_with_quotes(s) printf(S(s));",
	"",
	"int main()",
	"{",
	"	unsigned i;",
	"	const char *data[] = {",
	"	NULL};",
	"	for(i = 0; i < 8; i++)",
	"		puts(data[i]);",
	"	for(i = 0; data[i] != NULL; i++)",
	"		print_with_quotes(data[i]);",
	"	for(i = 8; data[i] != NULL; i++)",
	"		puts(data[i]);",
	"	return 0;",
	"}",
	NULL};
	for(i = 0; i < 8; i++)
		puts(data[i]);
	for(i = 0; data[i] != NULL; i++)
		print_with_quotes(data[i]);
	for(i = 8; data[i] != NULL; i++)
		puts(data[i]);
	return 0;
}
