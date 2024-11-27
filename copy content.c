#include <stdio.h>
int main(){
	char c;
	FILE *fsrc,*ftgt;
	fsrc=fopen("DATA.txt","r");
	ftgt=fopen("target.txt","w");
	while(fscanf(fsrc,"%c",&c)!=EOF){
		fprintf(ftgt,"%c",c);
	}
	fclose(fsrc);
	fclose(ftgt);
	return 0;
}
