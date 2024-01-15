#include "src/patches/url_structs.hpp"

#include "stockprofile.hpp"
#include "defaultprofile.hpp"

class Profile {
public:
    
    ProfileMeta metadata = pn_meta;

    eShop eshop = pn_eshop;

    NPNS npns = pn_npns;

    SpotPass boss = pn_boss;

    IconDatabase icdb = pn_icdb;

    Olive miiverse = pn_juxt;

    //manually (re)builds usedfields
    void GenerateUsedFields(); 

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

