// �r���d�߾�.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <iostream>
#include <Form1.h>

using std::cout ;
using std::string;
using std::endl;
using std::cin;


void transfer();

int _tmain(int argc, _TCHAR* argv[])
{

	

redo:
	char msg[100];
	cin >> msg;
	switch (msg)
	{
	case 's':
		{
	transfer();
	break;
		}
	default:
		{
			break;
		}
	}
	goto redo;




	return 0;
}
void transfer()
{
		char charBefore(' ');
		cin >> charBefore;
		cout << "the charactor\t\"" << charBefore << "\" " << endl;
		int i((int)charBefore);
		cout << "this is the char which transfer to a integer \t" << i << endl;


}
