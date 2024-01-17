#include "../src/patches/url_structs.hpp"

#include "stockprofile.hpp"
#include "defaultprofile.hpp"

class Profile {
private:

    URL_Patch url_patches;

public:
    //Think of this like a reference to the "underlying" profile that smaller 
    //profiles patch on top of
    ProfileMeta base_profile;

    //Then this is current profile data, on top of base_profile's already loaded data:

    ProfileMeta metadata = pn_meta;

    eShop eshop = pn_eshop;

    NPNS npns = pn_npns;

    SpotPass boss = pn_boss;

    IconDatabase icdb = pn_icdb;

    Olive miiverse = pn_juxt;


    //manually (re)builds usedfields
    void GenerateUsedFields(); 

    //This is the special function that returns the array of the exact URL_Patches to apply
    URL_Patch *GetURLsToPatch();

    //Set URLs to the stock Nintendo URLs (bascially a manual reset)
    void SetToStock(); 
    /**
     *  Set URLs back to the default profile, Pretendo Network. 
     * 
     * TODO: Have a stored profile able to be set as default
     */
    void SetToDefault();

    //Load profile from storage, probably alloc mem
    Profile(ProfileMeta meta); 
    ~Profile();

};

