//1.实现strcpy

//
#include<stdio.h>

char* Strcpy(char* dest, const char* src)
{
	char* ret = dest;
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}

int main()
{
	char dest[] = "ABCD";
	char src[] = "EFGK";
	printf("%s\n", Strcpy(dest, src));
	return 0;
}


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

#include<stdio.h>
#include<assert.h>
char* Strstr(const char* dest, const char* src)
{
	assert(dest && src);
	const char* desti = dest;
	const char* srci = src;
	while (*dest)
	{
		while (*desti == *srci && *srci != '\0')
		{
			desti++;
			srci++;
		}
		if (*srci == '\0')
		{
			return dest;
		}
		else
		{
			dest++;
			desti = dest;
			srci = src;
		}
	}
	return NULL;

}

int main()
{
	char dest[] = "ABCDEFGKGEGK";
	char src[] = "EFGK";
	printf("%s\n", Strstr(dest, src));
	return 0;
}




//4.实现strchr
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

char* Strchr(char* str, int c)
{
	while (*str != (char)c && *str != '\0')
	{
		str++;
	}
	if (*str)
		return str;
	else
		return NULL;
}





int main()
{
	char str[] = "ABCDEFGKGEGMK";
	char c = ' ';
	scanf("%c", &c);
	printf("%s\n", Strchr(str, c));
	return 0;
}





//5.实现strcmp

int Strcmp(const char*str1, const char* str2)
{
	const char* s1 = str1;
	const char* s2 = str2;
	while (*s1 && *s2)
	{
		if (*s1 > *s2)
			return 1;
		else if (*s1 < *s2)
			return -1;
		else
		{
			s1++;
			s2++;
		}
	}
	if (*s1 == '\0' && *s2 == '\0')
		return 0;
	else if (*s1 == '\0')
		return -1;
	else
		return 1;
}




int main()
{
	char str1[] = "ABCDEFGKGEGMKKKK";
	char str2[] = "ABCDEFGKGEGMKKK";
	printf("%d\n", Strcmp(str1, str2));
	return 0;
}





//6.实现memcpy
#include<assert.h>
void* Memcpy(void* dest, const void* src, int count)
{
	assert(dest && src);
	char* dest1 = (char*)dest;
	char* src1 = (char*)src;
	for (int i = 0; i < count; i++)
		dest1[i] = src1[i];
	return dest;
}


int main()

{
	int dest[] = { 1, 2, 3 };
	int src[] = { 6, 0, 99 };
	Memcpy(dest, src, sizeof(dest));
	for (int i = 0; i < 3; i++)
		printf("%d\n", dest[i]);
	return 0;
}

//7.实现memmove

void* Memmove(void* dest, const void* src, int count)
{
	assert(dest && src);
	char* dest1 = (char*)dest;
	char*src1 = (char*)src;
	if (dest > src)
	{
		for (int i = count - 1; i >= 0; i--)
			dest1[i] = src1[i];
	}
	else
	{
		for (int i = 0; i < count; i++)
			dest1[i] = src1[i];
	}
	return dest;
}


int main()

{
	int dest[] = { 1, 2, 3, 4, 5 };
	int src[] = { 6, 2, 9, 4, 7 };
	Memmove(dest, src, sizeof(dest));
	for (int i = 0; i < sizeof(dest)/sizeof(dest[0]); i++)
		printf("%d\n", dest[i]);
	return 0;
}
