#include <stdio.h>

void main(void)
{
	for (int dan = 2; dan <= 9; dan++)
	{
		if (dan == 4)
		{
			continue;  //�ٱ��� for���� ���� continue(4�ܸ� skip)
		}
		for (int i = 1; i <= 9; i++)
		{
			if (i == 5)
			{
				continue;  //���� for���� ���� continue(���� 5�� skip)
			}
			printf("%d X %d = %d\n", dan, i, dan * i);
		}
		printf("\n");
	}
}