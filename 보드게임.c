/*
*	z : 549 507 6524
*	�������
*	�� 40ĭ
*	�÷����� �Ӽ�
*		1. �� : 20,000,000 ����
*		2. ������ġ : 0���� ����
		3. Ȳ�ݿ���
			���ϴ� �� ���� ����
			���� �����ϰ� �ش�( -5�� ~ +5�� )
			TODO : �������´�

	�ֻ��� 1 ~ 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(void)
{
	// �÷��̾��� ��ġ(0���� ����)
	int position = 0;
	// �ֻ���
	int dice;
	// ���� 2õ������ ����
	int money = 20000000;

	srand(time(0));

	printf("������ġ : %d, ����ݾ� : %d \n\n", position, money);

	// ���ѹݺ�
	while (1)
	{
		//����Ű�� ������ �������
		getchar();

		/* ���� */
		// �ֻ����� 1 ~ 6���� ������ ����
		dice = rand() % 6 + 1;
		printf("�ֻ����� ������ %d�� ���Խ��ϴ�.\n", dice);

		// ���� �ֻ������� ���� ��ġ�� ����
		position += dice;
		printf("������ġ : %d, ����ݾ� : %d \n\n", position, money);

		// TEST CODE
		// position = 10;

		switch (position)
		{
			// TODO : printf �ߺ��� �ڵ� �����ϱ�
		case 10:
			printf("*��ġ 10*�� ������ �ֻ����� �ٽ� �����ϴ�. \n");
			getchar();
			int dice_money = rand() % 6 + 1;
			money += 100000 * dice_money;
			printf("�ֻ����� %d��(��) ���ͼ� %d���� ȹ���Ͽ����ϴ�. \n", dice_money, 100000 * dice_money);
			printf("������ġ : %d, ����ݾ� : %d \n\n", position, money);
			break;

		case 20:
			printf("���õ�� - *��ġ 20*�� ������ ����� 20%%�� ��ȸ�� ����մϴ�. \n");
			money = (int)(money * 0.8);
			printf("������ġ : %d, ����ݾ� : %d \n\n", position, money);
			break;

		case 30:
			printf("*��ġ 30*�� ������, �ֻ��� ������ŭ �� ���ư��ϴ�.\n");
			position += dice;
			printf("������ġ : %d, ����ݾ� : %d \n\n", position, money);
			break;

		case 59:
			printf("��ġ 59�� ������, ó�� �������� ���ư��ϴ�.\n");
			position = 0;
			printf("������ġ : %d, ����ݾ� : %d \n\n", position, money);
			break;
		}

		// ������ �����ؾ� �ϴ� ���ǿ��� switch���� �Ұ����ϴ�
		if (position > 60)
		{
			printf("�����մϴ�. �������� �����ϼ̽��ϴ�.\n");
			break;
		}
	}

}