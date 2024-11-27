#include <stdio.h>
int main(){
	char c;
	FILE *f;
	f=fopen("DATA1.txt","r+");
	while(fscanf(f,"%c ",&c)!=EOF){
		printf("%d ",c);
	}
	fclose(f);
	return 0;
}
