/*
�o�O�s�Ǹ����{��
20161213
first
�p��Ů�ݭn19*19
�C���
*/

#include <stdio.h>
#include <stdlib.h>
int f[19][19] = { 0 };

void kai(void)
{
	int init_num_f = 1;
	int cnt_1 = 0;
	if (init_num_f)
	{
		for (int i = 0; i <= 18; i++)
		{
			for (int j = 0; j <= 18; j++)
			{
				f[i][j] = cnt_1;
				cnt_1++;
			}
		}
		init_num_f = 0;
	}
	for (int i = 0; i <= 18; i++)
	{
		for (int j = 0; j <= 18; j++)
		{
			printf("%d\n", f[i][j]);

		}
	}

	
}


