#pragma once

#include "ScriptingCoreLib.h"
#include "Node.h"

#include <vector>

class SCRIPTING_CORE_API Script
{
public:
	Script();
	~Script();

private:

	std::vector<Node> nodes_;
};