#pragma once

#include "ScriptingCoreLib.h"

template<typename T>
class SCRIPTING_CORE_API OutputSlot
{
public:
	class OutputSlot();
	~OutputSlot();

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