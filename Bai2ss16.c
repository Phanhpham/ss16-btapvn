#include<stdio.h>
int main(){
	FILE *filePointer = NULL;
	char outputStr[100];
    filePointer = fopen("C:\\Users\\Admin\\Desktop\\BT01.txt","r");
    fread(outputStr,sizeof(char), sizeof(outputStr),filePointer);
    printf("Noi dung van ban la: \n%s\n",outputStr);
    fclose(filePointer);
    return 0;
}
