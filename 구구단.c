#include <stdio.h>

void main(void)
{
	for (int dan = 2; dan <= 9; dan++)
	{
		/*if (dan == 4)
		{
			break;   //�ٱ��� for���� ���� break(���� 3������)
		}*/
		for (int i = 1; i <= 9; i++)
		{
			if (i == 4)
			{
				break;  //���� for���� ���� break(���� 4������)
			}
			printf("%d X %d = %d\n", dan, i, dan * i);
		}
		printf("\n");
	}
}