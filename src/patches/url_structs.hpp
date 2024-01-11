#include <cstdint>

typedef struct URL_Patch
{
    unsigned int address;
    char url[80];
} URL_Patch;

struct ProfileMeta {
    //bitfield; used URLs are 1, unused are 0
    //Idea being it is faster to check this to know which to patch when switching profiles
    // than to attempt patching all the URLs, which a profile may or may not need to edit.

    //"Unused" bits may be used for special flags, such as "patch all"

    //It is still on the prerogative of the profile (creators) to make sure a profile patches 
    //what it needs to in order to ensure it works properly.
    uint32_t usedfields;

    char name[15]; //Idk 15 seemed like a good amount
};

//These are mostly just structs for organizing, not because they need to be structs
struct eShop {
    char pushmore[80] = "http://pushmore.wup.shop.pretendo.cc/pushmore/r/%s"; // 1 << 0
    //Tagaya is the eshop applet
    char tagaya[80] = "https://tagaya.wup.shop.pretendo.cc/tagaya/versionlist/%s/%s/%s"; // 1 << 1
    char tagaya_latest[80] = "https://tagaya.wup.shop.pretendo.cc/tagaya/versionlist/%s/%s/latest_version"; // 1 << 2
    //Pushmo is related to title installs
    char pushmo_d[80] = "http://pushmo.wup.shop.pretendo.cc/pushmo/d/%s/%u"; // 1 << 3
    char pushmo_c[80] = "http://pushmo.wup.shop.pretendo.cc/pushmo/c/%u/%u"; // 1 << 4
    //
    char ecs_wup[80] = "https://ecs.wup.shop.pretendo.cc/ecs/services/ECommerceSOAP"; //Exists twice in RAM, does not need to be repeated as a char value. 1 << 5
    char nus_wup[80] = "https://nus.wup.shop.pretendo.cc/nus/services/NetUpdateSOAP"; // 1 << 6
    //c
    char ecsc1[80] = "https://ecs.c.shop.pretendo.cc"; // 1 << 7
    char ecsc2[80] = "https://ecs.c.shop.pretendo.cc/ecs/services/ECommerceSOAP"; // 1 << 8 
    char ias[80] = "https://ias.c.shop.pretendo.cc/ias/services/IdentityAuthenticationSOAP"; // 1 << 9
    char cas[80] = "https://cas.c.shop.pretendo.cc/cas/services/CatalogingSOAP"; // 1 << 10
    char nus_c[80] = "https://nus.c.shop.pretendo.cc/nus/services/NetUpdateSOAP"; // 1 << 11
};
struct NPNS {
    char npns1[80] = "http://npns-dev.c.app.pretendo.cc/bst.dat"; // 1 << 12
    char npns2[80] = "http://npns-dev.c.app.pretendo.cc/bst2.dat"; // 1 << 13
};

struct SpotPass {
    char nnpl[80] = "nppl.app.pretendo.cc"; // 1 << 14
    char npts1[80] = "https://npts.app.pretendo.cc/p01/tasksheet/%s/%s/%s/%s?c=%s&l=%s"; // 1 << 15
    char npts2[80] = "https://npts.app.pretendo.cc/p01/tasksheet/%s/%s/%s?c=%s&l=%s"; // 1 << 16
};

struct IconDatabase {
    char wup1[80] = "https://idbe-wup.cdn.pretendo.cc/icondata/%02X/%016llX.idbe"; // 1 << 17
    char wup2[80] = "https://idbe-wup.cdn.pretendo.cc/icondata/%02X/%016llX-%d.idbe"; // 1 << 18
    char ctr1[80] = "https://idbe-ctr.cdn.pretendo.cc/icondata/%02X/%016llX.idbe"; // 1 << 19
    char ctr2[80] = "https://idbe-ctr.cdn.pretendo.cc/icondata/%02X/%016llX-%d.idbe"; // 1 << 20
};

//All these values are the Miiverse defaults
struct Olive {
    //Discovery +v1/endpoint URL
    char disc_url[39] = "disc.olv.nintendo.net/v1/endpoint"; // 1 << 21
    //This is the base domain, eg. https.nintendo.net
    char whitelist[29] = {
    0x68, 0x74, 0x74, 0x70, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x2E, 0x6E, 0x69, 0x6E, 0x74, 0x65, 0x6E, 0x64,
    0x6F, 0x2E, 0x6E, 0x65, 0x74
    }; // 1 << 22

    //These are the color patches, stored in RGBA8
    unsigned char highlight[16] = {
    0x82, 0xff, 0x05, 0xff, 
    0x82, 0xff, 0x05, 0xff, 
    0x1d, 0xff, 0x04, 0xff, 
    0x1d, 0xff, 0x04, 0xff
    }; // 1 << 23
    unsigned char touch1[8] = {
    0x94, 0xd9, 0x2a, 0x00, 
    0x57, 0xbd, 0x12, 0xff
    }; // 1 << 24
    unsigned char touch2[8] = {
    0x57, 0xbd, 0x12, 0x00, 
    0x94, 0xd9, 0x2a, 0xff
    }; // 1 << 25
};

struct MiscURLs {
    char napp[80] = "n.app.pretendo.cc";
    char accser[80] = "https://%s%saccount.pretendo.cc/v%u/api/";
};