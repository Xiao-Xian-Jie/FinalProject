#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
<<<<<<< HEAD
<<<<<<< HEAD
#include "kai.h"
void kai(void);
=======
=======
#include <time.h>
#include "xiao.h"
>>>>>>> 6540031a9bc4b8a4182881cf147e74934a2b732f

>>>>>>> 17259857e82ac1908627034d528bd1147fafba92
int main(void)
{
<<<<<<< HEAD
	kai();
=======
	int question[9][9];
	int do_question[9][9];
	int answer[9][9];
	int cursor[2] = { 0, 0 };
	int record[3][3] = { 0 };
	int menu = 0;
	int level = 0;
	int decision_s = 0;
	int decision_e = 0;
	int question_number = 0;
	long start_time = 0;
	long end_time = 0;

	while (menu != 4)
	{
		printf_menu();								//printf�D���
		while (menu_screen(menu) != 1);				//�D�����
		switch (menu)
		{
		case 1:											//�}�l�C��
			printf_level();									//printf�����׻���
			while (level_scree(level) != 1);				//���׿��
			srand(time(NULL));								//�]rand�ؤl�X
			question_number = (rand() % 30) + 1;			//�H���X�D��
			set_question(question, level, question_number);	//�]�w�D��
			get_answer(answer);
			start_time = clock();							//�����}�l�ɶ�
		continue_play:
			printf_screen(question, do_question, cursor);	//printf�}�l�C���e��
			while (screen(do_question, cursor) != -1)		//�C����
			{
				printf_screen(question, do_question, cursor);	//printf�}�l�C���e��
				if (check_complete(question, do_question, answer) == 1)	//�O�_�w����
				{
					while (save_record(level, clock() - start_time) != 1)	//�s��
					{
						init_record_file();								//�إߦs��
					}

				}
				while (autosave(question, do_question, answer, level, clock() - start_time) != 1);	//�g�J��O����
			}
			printf_decision();								//printf�M�w
			while (decision_screen(decision_s) != 1);		//�O�_���}
			if (decision_s == 2)							//�p�G����	
			{
				goto continue_play;								//�~��C��
			}
			while (autosave(question, do_question, answer, level, clock() - start_time) != 1);	//�g�J��O����
			break;
		case 2:
			while (recovery(question, do_question, answer, level, start_time) != 1);
			goto continue_play;
			break;
		case 3:
			read_record(record);							//Ū������
			printf_record(record);							//printf����
			while (decision_record() != 1);					//�O�_���U���}
			break;
		case 4:
			printf_decision();								//printf�M�w
			while (decision_screen(decision_e) != 1);		//�O�_���}
			if (decision_e == 2)							//�p�G����	
			{
				menu = 0;
				decision_e = 1;
			}
			break;
		}
	}
>>>>>>> 6540031a9bc4b8a4182881cf147e74934a2b732f
	system("pause");
	return 0;
}
