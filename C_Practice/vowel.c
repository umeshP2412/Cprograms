 #include<stdio.h>
 void main()
 {
 	char ch;
 	printf("Give the character: ");
 	scanf(" %c",&ch);
 	
 	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
 	{
 		printf("Given character is vowel");
	 }
	 else
	 {
	 	printf("Given character is not a vowel");
	 }
 }
