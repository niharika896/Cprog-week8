#include <stdio.h>
int main(){
	FILE *fo,*fe,*d;
	int c;
	fo=fopen("ODD.txt","w");
	fe=fopen("EVEN.txt","w");
	d=fopen("DATA.txt","r");
	while(fscanf(d,"%d ",&c)!=EOF){
		if(c%2==0){
			fprintf(fe,"%d ",c);
		}
		else{
			fprintf(fo,"%d ",c);
		}
	}
	fclose(fo);
	fclose(fe);
	fclose(d);
	return 0;
}
