#include <stdio.h>

int main() {
    char c;
    int n;
    FILE *f;
    scanf("%d", &n);

    char ch[n];

    f = fopen("DATA1.txt", "r+");

    int i;
    for (i = 0; i < n; i++) {
        ch[i] = fgetc(f);
        if (ch[i] == EOF) {
            break; }
}
  
    fseek(f, 0,0);
	int j;
    for (j = 0; j < i; j++) {
        fputc(ch[i - j - 1], f);
    }

    fclose(f);

    return 0;
}

