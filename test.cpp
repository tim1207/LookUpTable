#include <ctime>
#include <stdlib.h>
#include "lookUpTable.h"
#include <iostream>

using namespace std;


void test(LookUpTable* ptr)
{
	int i;
	book val, *vptr;
	cout << "Test LookupTable " << endl;
	cout << "Test add" << endl;

	val.assign("��q���ǿ��ѧ޳N�G����ABBYY FineReader 11 OCR", "�����q", 371);
	cout << ptr->add(val) << endl; //�^�Ǧ��\(1)  
	val.assign("VISUAL FORTRAN�{���]�p�P�}�o", "�i�űj�B���E��", 400);
	cout << ptr->add(val) << endl; //�^�Ǧ��\(1)  
	val.assign("�{���]�p�Шϥ�C++", "���خx", 420);
	cout << ptr->add(val) << endl; //�^�Ǧ��\(1)  
	val.assign("��Ʈw�t�Ρ�MTA�{�Ҽv���о�", "���K��", 336);
	cout << ptr->add(val) << endl; //�^�Ǧ��\(1)  
	val.assign("���P�d�wGoogle���ݧ޳N�GMaps.Android.App Engine.Cloud SQL�P�q�l�Ӱ�API��ҸѪR", "���@��", 560);
	cout << ptr->add(val) << endl; //�^�Ǧ��\(1)  
	val.assign("�H�u���z�G���z���t�ξɽ�(�ĤT��) ", "���p�� ��ҹ�w �¬F��", 590);
	cout << ptr->add(val) << endl; //�^�Ǧ��\(1)
	val.assign("�q����������(�ĤG��)", "�����s", 420);
	cout << ptr->add(val) << endl; //�^�Ǧ��\(1) 
	val.assign("���ں����P�q�l�Ӱ�(�ĤT��)", "������", 450);
	cout << ptr->add(val) << endl; //�^�Ǧ��\(1) 
	val.assign("��Ʈw�t�βz�סШϥ�SQL Server 2008", "���K��", 650);
	cout << ptr->add(val) << endl; //�^�Ǧ��\(1) 
	val.assign("�ʵe�ϸѸ�Ʈw�t�βz�סШϥ�Access 2010��@(�ĤG��) ", "���K��", 600);
	cout << ptr->add(val) << endl; //�^�Ǧ��\(1)

	cout << "�̶Q����: " << ptr->mostExpensive() << endl;
	//�̶Q����: "��Ʈw�t�βz�סШϥ�SQL Server 2008" "���K��" 650
	cout << "�̫K�y����: " << ptr->cheapest() << endl;
	//�̫K�y����: "��Ʈw�t�Ρ�MTA�{�Ҽv���о�" "���K��" 336
	cout << "�����ѻ���: " << ptr->average() << endl;
	//�����ѻ���: ...


	val.assign("��q���ǿ��ѧ޳N�G����ABBYY FineReader 11 OCR", "�����q", 371);
	cout << ptr->add(val) << endl; //���Ѧ^��0
	val.assign("VISUAL FORTRAN�{���]�p�P�}�o", "�i�űj�B���E��", 400);
	cout << ptr->add(val) << endl; //���Ѧ^��0
	val.assign("�{���]�p�Шϥ�C++", "���خx", 420);
	cout << ptr->add(val) << endl; //���Ѧ^��0
	val.assign("��Ʈw�t�Ρ�MTA�{�Ҽv���о�", "���K��", 336);
	cout << ptr->add(val) << endl; //���Ѧ^��0
	val.assign("���P�d�wGoogle���ݧ޳N�GMaps.Android.App Engine.Cloud SQL�P�q�l�Ӱ�API��ҸѪR", "���@��", 560);
	cout << ptr->add(val) << endl; //���Ѧ^��0
	val.assign("�H�u���z�G���z���t�ξɽ�(�ĤT��) ", "���p�� ��ҹ�w �¬F��", 590);
	cout << ptr->add(val) << endl; //���Ѧ^��0
	val.assign("�q����������(�ĤG��)", "�����s", 420);
	cout << ptr->add(val) << endl; //���Ѧ^��0
	val.assign("���ں����P�q�l�Ӱ�(�ĤT��)", "������", 450);
	cout << ptr->add(val) << endl; //���Ѧ^��0
	val.assign("��Ʈw�t�βz�סШϥ�SQL Server 2008", "���K��", 650);
	cout << ptr->add(val) << endl; //���Ѧ^��0
	val.assign("�ʵe�ϸѸ�Ʈw�t�βz�סШϥ�Access 2010��@(�ĤG��) ", "���K��", 600);
	cout << ptr->add(val) << endl; //���Ѧ^��0

	cout << "�̶Q����: " << ptr->mostExpensive() << endl;
	cout << "�̫K�y����: " << ptr->cheapest() << endl;
	cout << "�����ѻ���: " << ptr->average() << endl;

	cout << "Test remove" << endl;

	val.assign("��q���ǿ��ѧ޳N�G����ABBYY FineReader 11 OCR", "�����q", 371);
	if (ptr->remove("��q���ǿ��ѧ޳N�G����ABBYY FineReader 11 OCR", "�����q", 371))
		cout << "���\ " << val << endl;
		// ���\ "��q���ǿ��ѧ޳N�G����ABBYY FineReader 11 OCR" "�����q" 371
	else
		cout << "����" << endl; // ����

	val.assign("�q����������(�ĤG��)", "�����s", 420);
	if (ptr->remove("�q����������(�ĤG��)", "�����s", 420))
		cout << "���\ " << val << endl;
		// ���\ "�q����������(�ĤG��)" "�����s" 420
	else
		cout << "����" << endl; // ����

	val.assign("�ʵe�ϸѸ�Ʈw�t�βz�סШϥ�Access 2010��@(�ĤG��) ", "���K��", 600);
	if (ptr->remove("�ʵe�ϸѸ�Ʈw�t�βz�סШϥ�Access 2010��@(�ĤG��) ", "���K��", 600))
		cout << "���\ " << val << endl;
		// ���\ ""�ʵe�ϸѸ�Ʈw�t�βz�סШϥ�Access 2010��@(�ĤG��)" "���K��" 600
	else
		cout << "����" << endl; // ����

	val.assign("�ʵe�ϸѸ�Ʈw�t�βz�סШϥ�Access 2010��@(�ĤG��) ", "���K��", 600);
	if (ptr->remove("�ʵe�ϸѸ�Ʈw�t�βz�סШϥ�Access 2010��@(�ĤG��) ", "���K��", 600))
		cout << "���\ " << val << endl;
		// ���\ ""�ʵe�ϸѸ�Ʈw�t�βz�סШϥ�Access 2010��@(�ĤG��)" "���K��" 600
	else
		cout << "����" << endl; // ����


	cout << "Test find" << endl;

	if (vptr = ptr->find("���P�d�wGoogle���ݧ޳N�GMaps.Android.App Engine.Cloud SQL�P�q�l�Ӱ�API��ҸѪR"
	))
		cout << "���\ " << *vptr << endl; // ���\  
	else
		cout << "����" << endl; // ����
	if (vptr = ptr->find("�q����������(�ĤG��)"))
		cout << "���\ " << *vptr << endl; // ���\  
	else
		cout << "����" << endl; // ����

	if (vptr = ptr->find("�ʵe�ϸѸ�Ʈw�t�βz�סШϥ�Access 2010��@(�ĤG��) "))
		cout << "���\ " << *vptr << endl; // ���\  
	else
		cout << "����" << endl; // ����


	if (vptr = ptr->find("��q���ǿ��ѧ޳N�G����ABBYY FineReader 11 OCR", "�����q"))
		cout << "���\ " << *vptr << endl; // ���\  
	else
		cout << "����" << endl; // ����

	if (vptr = ptr->find("�q����������(�ĤG��)", "�����s"))
		cout << "���\ " << *vptr << endl; // ���\  
	else
		cout << "����" << endl; // ����

	if (vptr = ptr->find("�ʵe�ϸѸ�Ʈw�t�βz�סШϥ�Access 2010��@(�ĤG��) ", "���K��"))
		cout << "���\ " << *vptr << endl; // ���\  
	else
		cout << "����" << endl; // ����


	cout << "�̶Q����: " << ptr->mostExpensive() << endl;
	cout << "�̫K�y����: " << ptr->cheapest() << endl;
	cout << "�����ѻ���: " << ptr->average() << endl;


	cout << "Test clean" << endl;
	ptr->clean();


	if (ptr->remove("�ʵe�ϸѸ�Ʈw�t�βz�סШϥ�Access 2010��@(�ĤG��) ", "���K��", 600))
		cout << "���\ " << val << endl;
		// ���\ ""�ʵe�ϸѸ�Ʈw�t�βz�סШϥ�Access 2010��@(�ĤG��)" "���K��" 600
	else
		cout << "����" << endl; // ����

	if (vptr = ptr->find("��q���ǿ��ѧ޳N�G����ABBYY FineReader 11 OCR"))
		cout << "���\ " << *vptr << endl; // ���\  
	else
		cout << "����" << endl; // ����
	if (vptr = ptr->find("��q���ǿ��ѧ޳N�G����ABBYY FineReader 11 OCR", "�����q"))
		cout << "���\ " << *vptr << endl; // ���\  
	else
		cout << "����" << endl; // ����


	/////////////////////////////////////////////////////////////////////
	// ���O����
	/////////////////////////////////////////////////////////////////////

	cout << "���O����" << endl;
	srand(time(nullptr));

	cout << "Test add" << endl;
	char buffer[16];
	string str1("���O����"), str2;
	for (i = 0; i < 1000; i++)
	{
		_itoa_s(i, buffer, 10);
		str2 = str1 + buffer;
		val.assign(str2.c_str(), str2.c_str(), rand());
		ptr->add(val);
	}

	cout << "Test find" << endl;
	for (i = 0; i < 1000; i++)
	{
		_itoa_s(i, buffer, 10);
		str2 = str1 + buffer;
		ptr->find(str2.c_str());

	}

	cout << "Test find" << endl;
	for (i = 0; i < 1000; i++)
	{
		_itoa_s(i, buffer, 10);
		str2 = str1 + buffer;
		ptr->find(str2.c_str(), str2.c_str());
	}


	cout << "Test remove" << endl;
	for (i = 0; i < 1000; i++)
	{
		_itoa_s(i, buffer, 10);
		str2 = str1 + buffer;
		ptr->remove(str2.c_str(), str2.c_str(),0);
	}
}
