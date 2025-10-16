#include<stdio.h>
#include<string.h>
#include<ctype.h>
void nhapchuoi (char * s){
	 int hople;
	 do{
	 	hople = 1; 
	 	printf("nhap xau ( toi da 15 ky tu chi chua chu so): ");
	 	scanf("%s", s);
	 	if(strlen(s)> 15){
	 		hople = 0;
		 }
		 int i;
		 for(i = 0; i < strlen(s); i++){
		 	if(!isdigit(s[i])){
		 		hople = 0;
		 		break;
			 }
		 }
		 if(!hople){
		 	printf("xau khong hop le vui long nhap lai:\n");
		 }
	 }while(!hople);
}
int ladoixung(char *s) {
	int len = strlen(s);
	int i;
	for(i = 0; i < len / 2; i++){
		if(s[i] != s[len -1 -i] ){
			return 0;
		}
	}
	return 1;
}
void kiemtrachuoicon(char *s){
	char sub[100];
	int len = strlen(s);
	printf("\nCac chuoi con doi xungg trong \"%s\" la:\n", s);
	int i;
	int j;
	for(i = 0; i < len ; i++){
		for(j = 1 + i; j < len ; j++){
			strncpy(sub, s+i, j-1);
			sub[j - i] = '\0';
			if(ladoixung(sub)){
				printf(" %s\n", sub);
			}
		}
	}
	
}
int main(){
	char s[100];
	nhapchuoi (s);
	kiemtrachuoicon (s);
	return 0;
}
