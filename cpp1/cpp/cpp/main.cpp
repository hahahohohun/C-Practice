using namespace std;
#include <iostream>
#include <string.h>

int main()
{
	wchar_t szWchar[] = L"abcdef";
	szWchar[1] = 'z';
	//배열의 두번째 값을 'b' -> 'z'로 바꾼다.

	const wchar_t* pChar = L"abcdef";
	//wchar_t* pChar = L"abcdef"; //컴파일에러 : 수정이 불가한 코드영역이라 const키워드가 필요함.
	//pChar[1] = 'z'; // 컴파일에러: 힙메모리에 접근하여 값을 수정하는 wchar_t szWchar[1]와 다르게 
	//"abcdef"이라고 작성된 코드(ROM)의 시작주소를 받는 포인터변수에서는 변경이 불가하다.
}

