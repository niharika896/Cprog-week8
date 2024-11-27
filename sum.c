#include <stdio.h>
int main(){
	int c,sum=0;
	FILE *f;
	f=fopen("DATA.txt","r+");
	while(fscanf(f,"%d ",&c)!=EOF){
		sum+=c;
	}
	fprintf(f," %d",sum);
	fclose(f);
	return 0;
}
