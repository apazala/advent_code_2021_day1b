#include <cstdio>

int arr[2005];
int main() {
	FILE *pf_input;

	pf_input = fopen("input.txt", "r");
	if (pf_input == NULL) {
		fprintf(stderr, "Can't open input file\n");
		return 1;
	}

	int ans = 0, count, d;
	for (count = 0; fscanf(pf_input, "%d", &d) == 1; count++) {
		arr[count] = d;
	}
	fclose(pf_input);

	for (int i = 3; i < count; i++) {
		if (arr[i] > arr[i - 3]) {
			ans++;
		}
	}

	printf("%d\n", ans);

	return 0;
}