#include <stdio.h>

typedef struct IOBUF_TEST
{
	char* pCur;//-ptr
	char* pBase;//base
	int bufsize;//cnt
} IOBUF_TEST;

void print_iobuf(IOBUF_TEST* pBuf)
{
	printf("Base: %p\nCurrent: %p\n", pBuf->pBase, pBuf->pCur);
	printf("Buffer size: %d\n", pBuf->bufsize);
	printf("Written size: %d\n\n", pBuf->pCur - pBuf->pBase);
}


int main()
{
	FILE* fp = 0;
	fopen_s(&fp, "CON", "w");
	//fopen_s(&fp, "test.txt", "w");
	print_iobuf(fp);

	fputs("hello", fp);		print_iobuf(fp);
	fputs("world", fp);		print_iobuf(fp);
	fputc('A', fp);			print_iobuf(fp);
	fputc('B', fp);			print_iobuf(fp);
	fputc('C', fp);			
	fputc('D', fp);			print_iobuf(fp);
	fclose(fp);
	return 0;
}
