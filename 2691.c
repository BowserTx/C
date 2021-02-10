#include <stdio.h>

int main()
{
	int caso, a, b, result, i;
	char op;

	scanf("%d", &caso);

	for(; caso>0; caso--)
	{
		scanf("%d", &a);
		scanf("%c", &op);
		scanf("%d", &b);

		if(a == b)
		{
			for(i=5; i<=10;i++)
			{
				result = i * a;
				printf("%d x %d = %d\n", a, i, result);
			}
		}
		else
		{
			for(i=5; i<=10; i++)
			{
				result = i * a;
				printf("%d x %d = %d && ", a, i, result);


				result = i * b;
				printf("%d x %d = %d\n", b, i, result);
			}
		}
	}
	return 0;
}