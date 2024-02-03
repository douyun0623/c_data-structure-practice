#include <stdio.h>

typedef struct NODE {
	//������ ������
	int nDate;

	//������ ������ ���� ������
	struct NODE* next;
} NODE;

int main()
{
	NODE list[5] = { 0 };

	list[0].next = &list[1];
	list[1].next = &list[2];
	list[2].next = &list[3];
	list[3].next = &list[4];
	list[4].next = 0;

	list[0].nDate = 100;
	list[1].nDate = 200;
	list[2].nDate = 300;
	list[3].nDate = 400;
	list[4].nDate = 500;

	for (int i = 0; i < 5; ++i)
		printf("list[%d]: %d\n", i, list[i].nDate);

	NODE* pTmp = &list[0];
	while (pTmp != NULL) {
		printf("list[%d]: %d\n", pTmp, pTmp->nDate);
		pTmp = pTmp->next;
	}
	 
	return 0;
}