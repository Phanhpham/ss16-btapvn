#include<stdio.h>
int main(){
	FILE *file = NULL;
	int line;
	char content[100];
	file = fopen("C:\\Users\\Admin\\Desktop\\BT03.txt","w");
	if(file == NULL){
		printf("Khong the mo file de ghi:\n");
		return 1;
	}
	printf("Nhap vao so dong: ");
	scanf("%d",&line);
	for (int i = 0; i < line; i++) {
		printf("Nhap noi dung dong thu %d: ", i + 1);
		fflush(stdin);
		fgets(content, sizeof(content), file);
		fprintf(file,"Dong thu %d: %s\n", i + 1, content);
	}
	printf("noi dung da duoc luu vao file");
	return 0;
}
