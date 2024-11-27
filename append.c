#include <stdio.h>
int main(){
	char c;
	FILE *fsrc,*ftgt;
	fsrc=fopen("DATA.txt","r");
	ftgt=fopen("target.txt","a");
	while((c=fgetc(fsrc))!=EOF){
		fputc(c,ftgt);
	}
	fclose(fsrc);
	fclose(ftgt);
	return 0;
}
