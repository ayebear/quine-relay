#include <stdio.h>
char format_str[] = {9, 34, 37, 115, 34, 44, 10, 0};

int main()
{
	unsigned i;
	const char *data[] = {
	"	",
	"=============<<<<<<<< C Code >>>>>>>>=============",
	"#include <stdio.h>",
	"char format_str[] = {9, 34, 37, 115, 34, 44, 10, 0};",
	"",
	"int main()",
	"{",
	"	unsigned i;",
	"	const char *data[] = {",
	"	};",
	"	for (i = 19; i <= 26; ++i)",
	"		puts(data[i]);",
	"	for (i = 0; i <= 51; ++i)",
	"		printf(format_str, data[i]);",
	"	for (i = 27; i <= 35; ++i)",
	"		puts(data[i]);",
	"	return 0;",
	"}",
	"=============<<<<<<<< C++ Code >>>>>>>>=============",
	"#include <iostream>",
	"#include <string>",
	"using namespace std;",
	"",
	"int main()",
	"{",
	"	char q = 34;",
	"	string l[] = {",
	"	};",
	"	for (int i = 37; i <= 42; ++i)",
	"		cout << l[i] << endl;",
	"	for (int i = 0; i <= 51; ++i)",
	"		cout << l[0] + l[0] + q + l[i] + q + ',' << endl;",
	"	for (int i = 43; i <= 51; ++i)",
	"		cout << l[i] << endl;",
	"	return 0;",
	"}",
	"=============<<<<<<<< Java Code >>>>>>>>=============",
	"public class Quine",
	"{",
	"	public static void main(String[] args)",
	"	{",
	"		char q = 34;",
	"		String[] l = {",
	"		};",
	"		for (int i = 2; i <= 8; ++i)",
	"			System.out.println(l[i]);",
	"		for (int i = 0; i < l.length; ++i)",
	"			System.out.println(l[0] + q + l[i] + q + ',');",
	"		for (int i = 9; i <= 17; ++i)",
	"			System.out.println(l[i]);",
	"	}",
	"}",
	};
	for (i = 19; i <= 26; ++i)
		puts(data[i]);
	for (i = 0; i <= 51; ++i)
		printf(format_str, data[i]);
	for (i = 27; i <= 35; ++i)
		puts(data[i]);
	return 0;
}
