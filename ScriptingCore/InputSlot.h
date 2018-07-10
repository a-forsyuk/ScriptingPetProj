#pragma once

#include "ScriptingCoreLib.h"

template<typename T>
class SCRIPTING_CORE_API InputSlot
{
public:
	class InputSlot();
	~InputSlot();
	
	using InputHandler = void (Slot<T>::*)(int);

	T & SetData(const T& value)
	{
	};

	T & SetInputHandler(const InputHandler& handler)
	{
		inputHandler_ = handler;
	};

private:
	
	InputHandler inputHandler_ = nullptr;
};