#include<stdio.h>   // tried to enter string header file, and didnt work out.


int main(void)
{
	char name1[20];
	char name2[20];
	char name3[20];
	char name4[20];
	short i = 0;
	char a = 'b';
	char letter2 = 'a';

	//puts("Enter a character");
	//scanf_s("%cc", &letter2);
	//printf("%c\n", letter2);


	//printf("%d\n", a);
	//printf("%c\n", a);


	puts("Please enter first name below:");
	// scanf_s("%c", &name1[0]);

	// printf("..%c\n", name1[0]);


	for (i = 0; i < 4; i++)
	{
		
		scanf_s("%c", &name1[i]); // does not work like this.

		printf("%c",  name1[i]);
		
	} 
	puts("");
	printf("i is %d\n", i);

	puts("Please enter second name below:");
	
	for (i = 0; i < 4; i++)
	{

		scanf_s("%c", &name2[i]);
		printf("....%c", name2[i]);
	}
	puts("Please enter third name below:");
	for (i = 0; i < 4; i++)
	{

		scanf_s("%c", &name3[i]);
		printf("..%c", name3[i]);
	}
	puts("Please enter forth name below:");
	for (i = 0; i < 4; i++)
	{

		scanf_s("%c", &name4[i]);
		printf("..%c", name4[i]);
	}

	
	/*puts("In reverse order names are:");
	for (i = 0; i < 20; i++)
	{
		printf("%c", name4[i]);
	}
	puts("");
	for (i = 0; i < 20; i++)
	{
		printf("%c", name3[i]);
	}
	puts("");
	for (i = 0; i < 20; i++)
	{
		printf("%c", name2[i]);
	}
	puts("");
	for (i = 0; i < 20; i++)
	{
		printf("%c", name1[i]);
	}
	puts(""); */
	return 0;
}