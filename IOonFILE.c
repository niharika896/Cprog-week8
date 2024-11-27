#include <stdio.h>
int main(){
	FILE *f;
	char c;
	f=fopen("INPUT.txt","w+");
	printf("Enter data");
	while((c=getchar())!='\n'){
		putc(c,f);
	}
	fseek(f,0,0);
	printf("\nGiven Data\n");
	while((c=getc(f))!=EOF){
		putchar(c);
	};
	
	fclose(f);
	return 0;
}
