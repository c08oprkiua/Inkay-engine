#include "profileloader.hpp"
#include <wups.h>

bool LoadProfileFromStorage(ProfileMeta profile){
    //Open profile.name in WUPS Storage
    WUPS_OpenStorage();
    
    //Then, based on profile.usedfields, fetch values and load 
    //them into... A dictionary or something, idk yet
    
    return false; //Function failed (ofc it did, it's literally not written :P)

}