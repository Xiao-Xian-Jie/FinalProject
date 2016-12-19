#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#include <windows.h>
#include <wchar.h>
#include <locale.h>
#include <io.h>
#include <fcntl.h>
#ifndef _O_U16TEXT
#define _O_U16TEXT 0x20000
#endif

#include "xiao.h"
#include "asd346119.h"
#include "yunlin.h"
#include "kai.h"

int main(void)
{
	_setmode(_fileno(stdout), _O_U16TEXT);
	SetConsoleSize(120, 32);
	int question[9][9] = { 0 };
	int do_question[9][9] = { 0 };
	int answer[9][9] = { 0 };
	int cursor[2] = { 0, 0 };
	int record[3][3] = { 0 };
	int menu = 0;
	int level = 0;
	int decision_s = 0;
	int decision_e = 0;
	int screen_check_key = 0;
	int question_number = 0;
	long start_time = 0;
	long end_time = 0;

	//printf_welcome();
	while (menu != 4)
	{
	top_menu:
		printf_menu();								//printf�D���
		while (menu_screen(&menu) != 1);				//�D�����
		switch (menu)
		{
		case 1:											//�}�l�C��
			printf_level();									//printf�����׻���
			while (level_screen(&level) != 1);				//���׿��
			srand(time(NULL));								//�]rand�ؤl�X
			//question_number = (rand() % 30) + 1;			//�H���X�D��
			question_number = 1;			//�H���X�D��
			set_question(question, &level, &question_number);	//�]�w�D��
			get_answer(answer, &level, &question_number);
			start_time = clock();							//�����}�l�ɶ�
		continue_play:
			printf_init(question);
			printf_screen(do_question, cursor);	//printf�}�l�C���e��
			while ((screen_check_key = screen(do_question, cursor)) != -1)		//�C����
			{
				if (screen_check_key == 2)
				{
					cheat(do_question, answer, cursor);
				}
				else if (screen_check_key == 1)
				{
					printf_screen(do_question, cursor);	//printf�}�l�C���e��
					if (check_complete(question, do_question, answer) == 1)	//�O�_�w����
					{
						//while (save_record(level, clock() - start_time) != 1)	//�s��
						{
							//init_record_file();								//�إߦs��
						}
						//printf_win();
						//while (decision_win() != 1);
						goto top_menu;

					}
					//while (autosave(question, do_question, answer, level, clock() - start_time) != 1);	//�g�J��O����
				}
			}
			printf_decision();								//printf�M�w
			while (decision_screen(&decision_s) != 1);		//�O�_���}
			if (decision_s == 2)							//�p�G����	
			{
				goto continue_play;								//�~��C��
			}
			//while (autosave(question, do_question, answer, level, clock() - start_time) != 1);	//�g�J��O����
			break;
		case 2:
			//while (recovery(question, do_question, answer, level, start_time) != 1);
			goto continue_play;
			break;
		case 3:
			//read_record(record);							//Ū������
			//printf_record(record);							//printf����
			//while (decision_record() != 1);					//�O�_���U���}
			break;
		case 4:
			printf_decision();								//printf�M�w
			while (decision_screen(&decision_e) != 1);		//�O�_���}
			if (decision_e == 2)							//�p�G����	
			{
				menu = 0;
				decision_e = 1;
			}
			break;
		}
	}
	//printf_end();
	return 0;
}
