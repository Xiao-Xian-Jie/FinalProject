#include <stdio.h>
#include <stdlib.h>

int F[19][19] = 
{{11,12,13,12,13,12,13,12,13,12,13,12,13,12,13,12,13,12,14},
{20,0,0,0,0,0,20,0,0,0,0,0,20,0,0,0,0,0,20},
{15,0,16,0,16,0,16,0,16,0,16,0,16,0,16,0,16,0,17},
{20,0,0,0,0,0,20,0,0,0,0,0,20,0,0,0,0,0,20},
{15,0,16,0,16,0,16,0,16,0,16,0,16,0,16,0,16,0,17},
{20,0,0,0,0,0,20,0,0,0,0,0,20,0,0,0,0,0,20},
{15,12,16,12,16,12,16,12,16,12,16,12,16,12,16,12,16,12,17},
{20,0,0,0,0,0,20,0,0,0,0,0,20,0,0,0,0,0,20},
{15,0,16,0,16,0,16,0,16,0,16,0,16,0,16,0,16,0,17},
{20,0,0,0,0,0,20,0,0,0,0,0,20,0,0,0,0,0,20},
{15,0,16,0,16,0,16,0,16,0,16,0,16,0,16,0,16,0,17},
{20,0,0,0,0,0,20,0,0,0,0,0,20,0,0,0,0,0,20},
{15,12,16,12,16,12,16,12,16,12,16,12,16,12,16,12,16,12,17},
{20,0,0,0,0,0,20,0,0,0,0,0,20,0,0,0,0,0,20},
{15,0,16,0,16,0,16,0,16,0,16,0,16,0,16,0,16,0,17},
{20,0,0,0,0,0,20,0,0,0,0,0,20,0,0,0,0,0,20},
{15,0,16,0,16,0,16,0,16,0,16,0,16,0,16,0,16,0,17},
{20,0,0,0,0,0,20,0,0,0,0,0,20,0,0,0,0,0,20},
{18,12,21,12,21,12,21,12,21,12,21,12,21,12,21,12,21,12,19}};
int q_f[9][9]={0};
int Q[9][9]={0};

int init_i=0;
int init_j=0;
int init_cnt=1;
void form(void);
void printf_init(int q[9][9]);


int main(void)
{
	for(init_i=0;init_i<=8;init_i++)
	{
		for(init_j=0;init_j<=8;init_j++)
		{
			Q[init_i][init_j]=init_cnt;
			init_cnt++;
		}
		init_cnt=1;
	}
	printf_init(Q);
	//while(1)
//	{
		form();	
//	}
	
	system("pause");
	return 0;
	
}

void form(void)
{
	int cnt_1 = 0;
	int j = 0;
	int i = 0;
	
		for ( i = 0; i <= 18; i++)
		{
			for ( j = 0; j <= 18; j++)
			{
				switch(F[i][j])
				{
					case 11:
						printf("��");
						break;
					case 12:
						printf("��");
						break;
					case 13:
						printf("��");	
						break;
					case 14:
						printf("��");
						break;
					case 15:
						printf("��");
						break;
					case 16:
						printf("��");	
						break;
					case 17:
						printf("��");
						break;
					case 18:
						printf("��");
						break;
					case 19:
						printf("��");
						break;
					case 20:
				 		printf("��");
				 		break;
				 	case 21:
				 		printf("��");
				 		break;
				 	case 0:
				 		printf("�@");
				 		break;
				 	case 1:
				 		printf("��");
				 		break;	
				 	case 2:
				 		printf("��");
				 		break;
					case 3:
				 		printf("��");
				 		break;
				 	case 4:
				 		printf("��");
				 		break;	
				 	case 5:
				 		printf("��");
				 		break;
					case 6:
				 		printf("��");
				 		break;
				 	case 7:
				 		printf("��");
				 		break;	
				 	case 8:
				 		printf("��");
				 		break;
					case 9:
				 		printf("��");
				 		break;
				 	
					default:
						break;
														
				}
			}
			printf("\n");
		}
		
}	


void printf_init(int q[9][9])
{
	int i=0;
	int j=0;
	
	for ( i = 0; i <= 8; i++)
	{
		for ( j = 0; j <= 8; j++)
		{
			F[i*2+1][j*2+1]=q[i][j];
			if(q[i][j]==0)
			{
				q_f[i][j]=1;
			}
		}
	}
}



















