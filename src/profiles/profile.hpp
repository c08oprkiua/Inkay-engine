#include "src/patches/url_structs.hpp"

class Profile
{
public:

    ProfileMeta metadata;

    eShop eshop;

    NPNS npns;

    SpotPass boss;

    IconDatabase icdb;

    Olive miiverse;

    void ValidateUsedFields(); //manually validates usedfields
    bool ProfileSizeCheck(); //Make sure all the values in the profile aren't too big

    Profile(ProfileMeta meta); //Probably alloc mem
    ~Profile();
};

