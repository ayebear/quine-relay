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
	"	for (i = 0; i <= 61; ++i)",
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
	"	string data[] = {",
	"	};",
	"	for (int i = 37; i <= 42; ++i)",
	"		cout << data[i] << endl;",
	"	for (int i = 0; i <= 61; ++i)",
	"		cout << data[0] + data[0] + q + data[i] + q + ',' << endl;",
	"	for (int i = 43; i <= 51; ++i)",
	"		cout << data[i] << endl;",
	"	return 0;",
	"}",
	"=============<<<<<<<< Java Code >>>>>>>>=============",
	"public class Quine",
	"{",
	"	public static void main(String[] args)",
	"	{",
	"		char q = 34;",
	"		String[] data = {",
	"		};",
	"		for (int i = 53; i <= 53; ++i)",
	"			System.out.println(data[i]);",
	"		for (int i = 0; i < data.length; ++i)",
	"			System.out.println(data[0] + q + data[i] + q + ',');",
	"		for (int i = 54; i < data.length; ++i)",
	"			System.out.println(data[i]);",
	"	}",
	"}",
	"=============<<<<<<<< Python Code >>>>>>>>=============",
	"data = [",
	"]",
	"q = chr(34)",
	"for i in range(2, 9):",
	"	print data[i]",
	"for s in data:",
	"	print data[0] + q + s + q + ','",
	"for i in range(9, 18):",
	"	print data[i]",
	};
	for (i = 19; i <= 26; ++i)
		puts(data[i]);
	for (i = 0; i <= 61; ++i)
		printf(format_str, data[i]);
	for (i = 27; i <= 35; ++i)
		puts(data[i]);
	return 0;
}
