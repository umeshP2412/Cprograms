#include<stdio.h>
void main()
{
	char ch,g;
	
	printf("Give vharacter:");
	//You have to give space before %c...... like "<space>%c if there is any other scanf above
	scanf("%c",&ch);
	
	scanf(" %c", &g);
	
	printf("%c",ch);
	printf("\ng is %c",g);
}
