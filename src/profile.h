
<<<<<<< HEAD
=======

>>>>>>> 5629fee (I honestly don't remember what all I've done for this commit)
typedef struct URL_Patch
{
    unsigned int address;
    char url[80];
} URL_Patch;


<<<<<<< HEAD
struct profile {
    char name[15];

    struct eshop {
        char pushmore[80];

    };

    struct icons {

    };



    struct miiverse {
        char discurl[38];
=======
class profile
{
public:
    //bitfield; used URLs are 1, otherwise 0
    //Idea being it is faster to check this and know which to patch than to attempt
    //patching all the URLs, which a profile may or may not seek to edit
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
        //This is your "disc.olv.pretendo.cc/v1/endpoint" type URL
        char discurl[38];
        //These are the color patches
>>>>>>> 5629fee (I honestly don't remember what all I've done for this commit)
        char wave[29];
        unsigned char highlight[16];
        unsigned char touch1[8];
        unsigned char touch2[8];
    };
<<<<<<< HEAD
};
=======
    
    
    void CheckUsedFields(); //sets or updates usedfields

    profile();
    ~profile();
};

>>>>>>> 5629fee (I honestly don't remember what all I've done for this commit)
