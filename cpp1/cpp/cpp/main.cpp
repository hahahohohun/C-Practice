using namespace std;
#include <iostream>
#include <string.h>

int main()
{
	wchar_t szWchar[] = L"abcdef";
	szWchar[1] = 'z';
	//�迭�� �ι�° ���� 'b' -> 'z'�� �ٲ۴�.

	const wchar_t* pChar = L"abcdef";
	//wchar_t* pChar = L"abcdef"; //�����Ͽ��� : ������ �Ұ��� �ڵ念���̶� constŰ���尡 �ʿ���.
	//pChar[1] = 'z'; // �����Ͽ���: ���޸𸮿� �����Ͽ� ���� �����ϴ� wchar_t szWchar[1]�� �ٸ��� 
	//"abcdef"�̶�� �ۼ��� �ڵ�(ROM)�� �����ּҸ� �޴� �����ͺ��������� ������ �Ұ��ϴ�.
}

