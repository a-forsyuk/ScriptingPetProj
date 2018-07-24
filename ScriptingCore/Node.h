#pragma once

#include "ScriptingCoreLib.h"
//#include "Slot.h"

#include <vector>

template <typename TDescriptor>
class SCRIPTING_CORE_API Node
{
public:
	class Node() {};
	virtual	~Node() {};

	template<int index, typename TValue>
	void ActivateInput(const TValue& val)
	{
		auto callback = std::get<index, decltype(TDescriptor::Inputs)>(Inputs);
		this->*callback(val);
	}

private:
};