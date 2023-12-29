#include "profile.hpp"

//When profiles are loaded, they're simply stored as their order when read from storage.
//This keeps them as a tiny reference value in RAM until we actually want them, at which point
//we use the value in the array to fetch the actual values. This could cause some issues if the 
//profiles get edited during runtime, but I don't think most people will do that... hopefully.
unsigned int ProfileArray[];

bool LoadProfileFromStorage();