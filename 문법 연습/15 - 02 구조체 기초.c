// printf �Լ��� ������ ����.
#include <stdio.h>

// 8����Ʈ
typedef struct point {
	int x;
	int y;
}Point;

void main(void)
{
	// ����� ���ÿ� �ʱ�ȭ p1.x�� 10, p1.y�� 20
	Point p1 = { 10, 20 };

	// point p2; // �����߻� �ݵ�� struct�� �־����
	struct point p2;
	p2.x = 20;
	p2.y = 40;

	printf("(%d, %d) \n", p1.x, p1.y);
	printf("(%d, %d) \n", p2.x, p2.y);
	printf("����ü�� ũ��� %d", sizeof(struct point));

}