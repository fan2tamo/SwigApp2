#include <string>
#include <vector>

class CallbackBase
{
public:
	virtual void Callback(const std::string &str, const  std::vector<float>& fVect) = 0;
};

class CppClass
{
public:
	void SetString(const std::string &str);	
	std::string GetString();

	void SetVector(std::vector<float>& fVect);
	std::vector<float> GetVector();

	void SetCallback(CallbackBase& callbackObject);
	void ExeCallback();

private:
	std::string string;
	std::vector<float>  floatVector;
	CallbackBase* pCallbackObj = NULL;
	void InvokeCallback();
};

typedef CppClass* (*GetInstanceFuncPointer)(void);

extern "C" __declspec(dllexport) CppClass * CreateInstance(void);