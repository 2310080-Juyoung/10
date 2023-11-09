#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void){
	FILE *fp;
	fp = fopen("sample.txt","w");
	char str[100];
	int i;
	
	for(i=0;i<3;i++){
		printf("input a word : ");
		scanf("%s",str);
		fprintf(fp,"%s\n",str);}

	
	fclose(fp);
	return 0;
}
