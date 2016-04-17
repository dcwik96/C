//Napisać ,,czysty'' program, czyli bez efektów ubocznych, działający tak samo jak powyższa pętla for.

#include <stdio.h>

int main()
{

	char z;
	z=getchar();

	while(z!=EOF)
	{
		printf("%c",z);
   		z=getchar();
	}

	return 0;

}
