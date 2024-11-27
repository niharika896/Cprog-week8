#include <stdio.h>

int compare(FILE *a, FILE *b) {
    char ca, cb;

    while ((ca = fgetc(a)) != EOF && (cb = fgetc(b)) != EOF) {
        if (ca != cb) {
            return 1;
        }
    }


    if (ca != EOF || cb != EOF) {
        return 1; 
    }

    return 0; 
}

int main() {
    FILE *a, *b;

    a = fopen("DATA.txt", "r");
    b = fopen("DATA1.txt", "r");
	rewind(a);rewind(b);
    printf("%d\n", compare(a, b));

    fclose(a);
    fclose(b);

    return 0;
}

