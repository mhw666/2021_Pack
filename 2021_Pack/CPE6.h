#pragma once

#include <iostream>
#include "..\DLLPack6\CData6.h"
#pragma comment(lib,"..\\Debug\\DLLPack6.lib")
//#pragma comment(lib,"..\\Release\\DLLPack6.lib")


class CPE6
{
public:
	CPE6();
	~CPE6();

	BOOL SetPE(LPBYTE pDLL, LPBYTE pEXE, LPMyLz4);
private:

};

