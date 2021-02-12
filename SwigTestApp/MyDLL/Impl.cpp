#include <thread>
#include "Header.h"

void CppClass::SetString(const  std::string& str)
{
	string = str;
}

std::string CppClass::GetString()
{
	return string;
}

void CppClass::SetVector(std::vector<float>& fVect)
{
	floatVector = fVect;
}

std::vector<float> CppClass::GetVector()
{
	return floatVector;
}

void CppClass::SetCallback(CallbackBase &callbackObj)
{
	pCallbackObj = &callbackObj;
}

void CppClass::ExeCallback()
{
	std::thread *th = new std::thread(&CppClass::InvokeCallback, this);

	th->join();
}

void CppClass::InvokeCallback()
{
	if (pCallbackObj != NULL)
	{
		pCallbackObj->Callback(string, floatVector);
	}
}

__declspec(dllexport) CppClass* CreateInstance(void)
{
	return new CppClass;
}