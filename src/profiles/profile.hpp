
typedef struct URL_Patch
{
    unsigned int address;
    char url[80];
} URL_Patch;


class Profile
{
public:
    //bitfield; used URLs are 1, otherwise 0
    //Idea being it is faster to check this to know which to patch when switching profiles
    // than to attempt patching all the URLs, which a profile may or may not need to edit
    unsigned int usedfields; 

    char name[15]; //Idk 15 seemed like a good amount

    struct eshop {
        char pushmore[80];
        //Tagaya is the eshop applet
        char tagaya[80];
        char tagaya_latest[80];
        //Pushmo is related to title installs
        char pushmo_d[80];
        char pushmo_c[80];
        //
        char ecs_wup[80]; //Exists twice in RAM, does not need to be repeated as a char value
        char nus_wup[80];
        //c
        char ecsc1[80];
        char ecsc2[80];
        char ias[80];
        char cas[80];
        char nus_c[80];
    };

    struct npns {
        char npns1[80];
        char npns2[80];
    };

    struct spotpass {
        char nnpl[80];
        char npts1[80];
        char npts2[80];

    };

    struct icondatabase {
        char wup1[80];
        char wup2[80];
        char ctr1[80];
        char ctr2[80];
    };


    struct miiverse {
        //Discovery +v1/endpoint URL
        char discurl[39] = "disc.olv.pretendo.cc/v1/endpoint";
        //These are the color patches
        char wave[29];
        unsigned char highlight[16];
        unsigned char touch1[8];
        unsigned char touch2[8];
    };
    
    void ValidateUsedFields(); //manually validates usedfields
    bool ProfileSizeCheck(); //Make sure all the values in the profile aren't too big

    Profile(); //Probably alloc mem
    ~Profile();
};

