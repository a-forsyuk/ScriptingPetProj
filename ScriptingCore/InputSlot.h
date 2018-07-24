#pragma once

#include "ScriptingCoreLib.h"

void sampleFunc(int val) {};

template<typename T, void (*handler)(T)>
class SCRIPTING_CORE_API InputSlot
{
public:
	class InputSlot() {};
	~InputSlot() {};
	
	//using InputHandler = void (Slot<T>::*)(T);

	T & SetData(const T& value)
	{
		handler(value);
	};

	//T & SetInputHandler(const InputHandler& handler)
	//{
	//	inputHandler_ = handler;
	//};

//private:
//	
//	InputHandler inputHandler_ = nullptr;
};