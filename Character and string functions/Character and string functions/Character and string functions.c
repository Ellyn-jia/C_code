//1.ʵ��strcpy

//
//#include<stdio.h>
//
//char* Strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char dest[] = "ABCD";
//	char src[] = "EFGK";
//	printf("%s\n", Strcpy(dest, src));
//	return 0;
//}
//

//2.ʵ��strcat
#include<stdio.h>
char* Strcat(char* dest, const char* src)
{
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}


int main()
{
	char dest[9] = "ABCD";
	char src[] = "EFGK";
	printf("%s\n", Strcat(dest, src));
	return 0;
}



//3.ʵ��strstr













//4.ʵ��strchr











//5.ʵ��strcmp











//6.ʵ��memcpy










//7.ʵ��memmove






