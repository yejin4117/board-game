/*
*	�������
*	�� 40ĭ
*	�÷����� �Ӽ�
*		1.�� : 2,000(���� �鸸) ����
*		2.������ġ : 0���� ����
*		3.Ȳ�ݿ���
			���ϴ� �� �� �� ����
			���� �����ϰ� �ش�(-5�� ~ +5��)
			TODO : ���� ���´�.

		�ֻ���1~6
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(void)
{
	//�÷��̾��� ��ġ(0���� ����)
	int position = 0;
	int dice;

	srand(time(0));
	dice = rand() % 6 + 1;

	printf("%d\n", dice);
}
