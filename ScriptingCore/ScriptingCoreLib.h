#if defined (WIN32)
//#if defined (_MSC_VER)
//#pragma warning(disable: 4251)
//#endif
#if defined(ScriptingCore_EXPORTS)
#define  SCRIPTING_CORE_API __declspec(dllexport)
#else
#define  SCRIPTING_CORE_API __declspec(dllimport)
#endif
#else
#define SCRIPTING_CORE_API
#endif
