#include <cstdint>


typedef struct URL_Patch
{
    unsigned int address;
    char url[80];
} URL_Patch;

struct ProfileMeta {
    //bitfield; used URLs are 1, otherwise 0
    //Idea being it is faster to check this to know which to patch when switching profiles
    // than to attempt patching all the URLs, which a profile may or may not need to edit
    uint32_t usedfields;

    char name[15]; //Idk 15 seemed like a good amount
};


class Profile
{
public:

    ProfileMeta metadata;

    struct eshop {
        char pushmore[80]; // 1 << 0
        //Tagaya is the eshop applet
        char tagaya[80] ; // 1 << 1
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
    struct npns {
        char npns1[80]; // 1 << 12
        char npns2[80]; // 1 << 13
    };

    struct spotpass {
        char nnpl[80]; // 1 << 14
        char npts1[80]; // 1 << 15
        char npts2[80]; // 1 << 16
    };

    struct icondatabase {
        char wup1[80]; // 1 << 17
        char wup2[80]; // 1 << 18
        char ctr1[80]; // 1 << 19
        char ctr2[80]; // 1 << 20
    };

    //All these values are the Miiverse defaults
    struct miiverse {
        //Discovery +v1/endpoint URL
        char discurl[39] = "disc.olv.nintendo.net/v1/endpoint"; // 1 << 21
        //This is the base domain, eg. https.nintendo.net
        char wave[29] = {
        0x68, 0x74, 0x74, 0x70, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x2E, 0x6E, 0x69, 0x6E, 0x74, 0x65, 0x6E, 0x64,
        0x6F, 0x2E, 0x6E, 0x65, 0x74
        }; // 1 << 22

        //These are the color patches, stored in RGBA
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
    
    void ValidateUsedFields(); //manually validates usedfields
    bool ProfileSizeCheck(); //Make sure all the values in the profile aren't too big

    Profile(); //Probably alloc mem
    ~Profile();
};

