//1.模拟实现strncpy
#include<stdio.h>
#include<assert.h>

char* Strncpy(char* dest, const char* src, size_t num)
{
	assert(dest && src);
	char* ret = dest;
	while (((*dest++ = *src++) && (--num)))
	{
		;
	}
	return ret;
}

int main()
{
	char dest[] = "ABCDEF";
	char src[] = "MKLLOK";
	printf("%s\n", Strncpy(dest, src, 5));
	return 0;
}





//2.模拟实现strncat


char* Strncat(char* dest, const char* src, size_t num)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (num--)
	{
		*dest++ = *src++;

	}
	*dest = '\0';
	return ret;
}



int main()
{
	char dest[20] = "ABCDEF";
	char src[] = "MKLLOK";
	printf("%s\n", Strncat(dest, src, 5));
	return 0;
}

//3.模拟实现strncmp

int Strncpy(const char*dest, const char* src, size_t num)
{
	assert(dest&& src);
	const char* ret = dest;
	while (num--)
	{
		dest++;
		src++;
	}
	while ((*dest) && (*src))
	{
		if (*dest == *src)
		{
			dest++;
			src++;
		}
		else if (*dest > *src)
			return 1;
		else
			return -1;
	}
	if (*dest == *src)
		return 0;
	else if (*dest == '\0')
		return -1;
	else
		return 1;
}



int main()
{
	char dest[] = "ABCEEF";
	char src[] = "ABCEDF";
	printf("%d\n", Strncpy(dest, src, 3));
	return 0;
}
