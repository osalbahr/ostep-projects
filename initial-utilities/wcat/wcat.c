#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++) {
		FILE *fp = fopen(argv[i], "r");

		if (!fp) {
			puts("wcat: cannot open file");
			exit(1);
		}

		int ch;
		while ( (ch = fgetc(fp)) != EOF && !feof(fp) ) {
			putchar(ch);
		}

		fclose(fp);
	}
}
