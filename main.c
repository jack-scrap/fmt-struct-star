#include <stdio.h>
#include <stdlib.h>

const char star = '*';

void err(char* msg) {
	printf("Error: %s\n", msg);
}

int main(int argc, char* argv[]) {
	if (argc == 1) {
		err("No arguments");

		return 1;
	}

	if (argc != 1 + 1) {
		err("Wrong number of arguments");

		return 1;
	}

	int no = atoi(argv[1]);

	if (no < 0) {
		err("Value negative");

		return 1;
	}

	if (no < 1 ^ no > 5) {
		err("Value out of range");

		return 1;
	}

	char str[no + 1];
	for (int i = 0; i < no; i++) {
		str[i] = star;
	}
	str[no] = '\0';

	printf("%s", str);

	return 0;
}
