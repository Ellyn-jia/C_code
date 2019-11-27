//#define DEBUG_PRINT  printf("file: %s \nline: %d \n\
//date: %s \ntime: %s \n",\
// __FILE__, __LINE__,\
//__DATE__, __TIME__)
//int main()
//{
//	DEBUG_PRINT;
//	return 0;
//}
//
//#define PRINT(FORMAT, VALUE)\
//	printf("the value of "#VALUE" is "FORMAT"\n" ,VALUE)
//int main()
//{
//	int i = 0;
//	PRINT("%d", i + 5);
//	return 0;
//}

#define MAX(a,b) ( (a)>(b) ? (a) : (b) )
int main()
{
	int x = 5;
	int y = 8;
	int z = MAX(x++, y++);
	printf("x = %d\ny = %d\nz = %d\n", x, y, z);
	return 0;
}