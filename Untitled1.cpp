#include<stdio.h>
#include <string.h>
int main() {
	
	char metin[] = "Kemaliye";
	char cikti[] = "";
	int uzunluk = strlen(metin);

	for (int i =0; i<=uzunluk; i++) 
	{
		cikti[i] = metin[i];
		printf("%s \n", &cikti);
	}

	getchar();
}
