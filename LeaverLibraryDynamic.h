#pragma once
#ifdef M4_L12_Task_2(dynamic_lib)EXPORTS
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif


#include <iostream>
namespace LeaverLibraryDynamic
{
	using namespace std;

	class DynamicLeaver
	{
	public:
		LEAVERLIBRARY_API string leave(string& user_input);

	private:
		string user_name;
	};
}