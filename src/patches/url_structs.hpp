#include <cstdint>

typedef struct URL_Patch
{
    unsigned int address;
    char url[80];
} URL_Patch;

struct ProfileMeta {
    /*bitfield; used URLs are 1, unused are 0
    Idea being it is faster to check this to know which to patch when switching profiles
    than to attempt patching all the URLs, which a profile may or may not need to edit.

    "Unused" bits may be used for special flags, such as "patch all"

    It is still on the prerogative of the profile (creators) to make sure a profile patches 
    what it needs to in order to ensure it works properly.
    */
    uint32_t usedfields;

    char profile_name[15] = "Stock"; //Idk 15 seemed like a good amount. Could be bigger in the future, idrc
};

//These are mostly just structs for organizing, not because they need to be structs


struct eShop {
    char pushmore[80]; // 1 << 0
    //Tagaya is the eshop applet
    char tagaya[80]; // 1 << 1
    char tagaya_latest[80]; // 1 << 2
    //Pushmo is related to title installs
    char pushmo_d[80]; // 1 << 3
    char pushmo_c[80]; // 1 << 4
    //
    char ecs_wup[80]; //Exists twice in RAM, does not need to be repeated as a char value. 1 << 5
    char nus_wup[80]; // 1 << 6
    //c
    char ecsc1[80]; // 1 << 7
    char ecsc2[80]; // 1 << 8 
    char ias[80]; // 1 << 9
    char cas[80]; // 1 << 10
    char nus_c[80]; // 1 << 11
};
struct NPNS {
    char npns1[80]; // 1 << 12
    char npns2[80]; // 1 << 13
};

struct SpotPass {
    char nnpl[80]; // 1 << 14
    char npts1[80]; // 1 << 15
    char npts2[80]; // 1 << 16
};

struct IconDatabase {
    char wup1[80]; // 1 << 17
    char wup2[80]; // 1 << 18
    char ctr1[80]; // 1 << 19
    char ctr2[80]; // 1 << 20
};

struct Olive {
    //Discovery +v1/endpoint URL
    char disc_url[39]; // 1 << 21
    /*
    This is the base domain, eg. https.nintendo.net

    According to the findings of Trace, this field has a size of around 255 bytes.
    Furthermore, apparently more whitelist fields exist, but Inkay does not yet offer patching them.
    */
    char whitelist[255]; // 1 << 22

    //These are the color patches, stored in RGBA8
    unsigned char highlight[16]; // 1 << 23
    unsigned char touch1[8]; // 1 << 24
    unsigned char touch2[8]; // 1 << 25
};

struct MiscURLs {
    char napp[80] = "n.app.pretendo.cc";
    char accser[80] = "https://%s%saccount.pretendo.cc/v%u/api/";
};