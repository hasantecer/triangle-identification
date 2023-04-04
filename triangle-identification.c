#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int a,b,c;
	printf("Ucgenin Birinci Kenarini Giriniz --->");
	scanf("%d",&a);
	printf("Ucgenin ikinci Kenarini Giriniz --->");
	scanf("%d",&b);
	printf("Ucgenin ucuncu Kenarini Giriniz --->");
	scanf("%d",&c);
	
	ucgen(a,b,c);
	system("pause");
	return 0;

}


int ucgen (int ilkenar,int ikincikenar,int ucuncukenar){
	if(ilkenar==ikincikenar && ikincikenar==ucuncukenar)
	{
		printf("Ucgen bir eskenar ucgendir\n");
		}
	else
	{
		if(ilkenar==ikincikenar && ilkenar!=ucuncukenar)
		{
			printf("Ucgen bir ikizkenar ucgendir\n");
		}
		else 
		{
			printf("Ucgen cesitkenar bir ucgendir\n");
		}
	}
	return 0;
}
