#include<stdio.h>
// /Users/macbook/Desktop\\Session27_Practic01.txt
int main(){
	FILE *file;
	char content[100];
	file = fopen("\\Users\\macbook\\Desktop\\Session27_Practic01.txt","r");
	fread(content,sizeof(char), sizeof(content),file);
    printf("Noi dung la:%s\n",content);
    fclose(file);
}