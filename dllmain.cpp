// dllmain.cpp: DLL 응용 프로그램을 위해 내보낸 함수를 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include "dllmain.h"

using namespace std;

namespace Hello
{
	void printHello() {
		cout << "Hello" << endl;
	}

	void printGoodBye() {
		cout << "GoodBye" << endl;
	}
}