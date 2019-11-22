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
//#include<stdio.h>
//char* Strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char dest[9] = "ABCD";
//	char src[] = "EFGK";
//	printf("%s\n", Strcat(dest, src));
//	return 0;
//}



//3.实现strstr

//#include<stdio.h>
//#include<assert.h>
//char* Strstr(const char* dest, const char* src)
//{
//	assert(dest && src);
//	const char* desti = dest;
//	const char* srci = src;
//	while (*dest)
//	{
//		while (*desti == *srci && *srci != '\0')
//		{
//			desti++;
//			srci++;
//		}
//		if (*srci == '\0')
//		{
//			return dest;
//		}
//		else
//		{
//			dest++;
//			desti = dest;
//			srci = src;
//		}
//	}
//	return NULL;
//
//}
//
//int main()
//{
//	char dest[] = "ABCDEFGKGEGK";
//	char src[] = "EFGK";
//	printf("%s\n", Strstr(dest, src));
//	return 0;
//}




//4.实现strchr











//5.实现strcmp











//6.实现memcpy










//7.实现memmove






