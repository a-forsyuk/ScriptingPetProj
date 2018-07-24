#pragma once

#include "ScriptingCoreLib.h"
#include "InputSlot.h"

#include <vector>

using namespace std;

template<typename T>
class SCRIPTING_CORE_API OutputSlot
{
public:
	using InputSlotT = InputSlot<T>;

	class OutputSlot();
	~OutputSlot();

	T & SetData(const T& value)
	{
	};

	void ConnectTo(const InputSlotT* inputSlot)
	{
		inputSlots_.push_back(inputSlot);
	};

private:
	
	using InputSlotCollection = vector<InputSlotT>;
	InputSlotCollection inputSlots_;
};