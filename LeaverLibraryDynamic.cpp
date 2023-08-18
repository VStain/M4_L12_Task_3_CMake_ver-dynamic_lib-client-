#include "LeaverLibraryDynamic.h"

namespace LeaverLibraryDynamic
{
	string DynamicLeaver::leave(string& user_input)
	{
		return "До свидания, " + user_input + "!";
	}
}