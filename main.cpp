#include "define/stdafx.h"
#include "api/xor.h"
#include "api/api.h"
#include "driver/driver.h"
#include "inject/injector.h"
#include "api/drvutils.h"

int main()
{
	// driver init
	start_driver();
	cout << endl;

	face_injecor_v2(xor_a("UnityWndClass"), xor_w(L"test.dll"));

	cout << endl;
	system("pause");
}