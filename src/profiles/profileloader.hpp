#include "profile.hpp"
#include <vector>

//When profiles are loaded, their metadata struct is loaded into this array. 
//When a profile is actually requested, *then* the full Profile will be processed
std::vector<ProfileMeta> ProfileArray;

bool InitializeProfileArray();
bool LoadProfileFromStorage(ProfileMeta profile);