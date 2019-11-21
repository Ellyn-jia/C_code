//1.实现strcpy

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

//2.实现strcat
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



//3.实现strstr













//4.实现strchr











//5.实现strcmp











//6.实现memcpy










//7.实现memmove






