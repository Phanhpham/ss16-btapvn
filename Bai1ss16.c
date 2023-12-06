#include<stdio.h>
int main(){
	FILE *taptin = fopen("C:\\Users\\Admin\\Desktop\\BT01.txt","w");
	if(taptin == NULL){
		printf("Không mở được têp tin. ");
               return 1;
	}
        char arr[100];
        printf("nhap chuỗi:");
        fgets(arr, sizeof(arr),stdin);
	fprintf(taptin, " %s",arr);
	fclose(taptin);
        printf("chuỗi đã được ghi vào file");
    return 0;
}