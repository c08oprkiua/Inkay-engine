#include "../patches/url_structs.hpp"

//Basically all the values to connect to Pretendo+Juxt

ProfileMeta pn_meta = {
    //Usedfields (placeholder)
    (1 << 31),
    //Name
    "Pretendo", 
};

eShop pn_eshop {
    //Pushmore
    "http://pushmore.wup.shop.pretendo.cc/pushmore/r/%s",
    //tayaga
    "https://tagaya.wup.shop.pretendo.cc/tagaya/versionlist/%s/%s/%s",
    //tayaga_latest
    "https://tagaya.wup.shop.pretendo.cc/tagaya/versionlist/%s/%s/latest_version",
    //pushmo_d
    "http://pushmo.wup.shop.pretendo.cc/pushmo/d/%s/%u",
    //pushmo_c
    "http://pushmo.wup.shop.pretendo.cc/pushmo/c/%u/%u",
    //ecs_wup
    "https://ecs.wup.shop.pretendo.cc/ecs/services/ECommerceSOAP",
    //nus_wup
    "https://nus.wup.shop.pretendo.cc/nus/services/NetUpdateSOAP",
    //ecsc1
    "https://ecs.c.shop.pretendo.cc",
    //ecsc2
    "https://ecs.c.shop.pretendo.cc/ecs/services/ECommerceSOAP",
    //ias
    "https://ias.c.shop.pretendo.cc/ias/services/IdentityAuthenticationSOAP",
    //cas
    "https://cas.c.shop.pretendo.cc/cas/services/CatalogingSOAP",
    //nus_c
    "https://nus.c.shop.pretendo.cc/nus/services/NetUpdateSOAP",
};

NPNS pn_npns {
    //npns1
    "http://npns-dev.c.app.pretendo.cc/bst.dat",
    //npns2
    "http://npns-dev.c.app.pretendo.cc/bst2.dat",
};

SpotPass pn_boss{
    //nnpl
    "nppl.app.pretendo.cc",
    //npts1
    "https://npts.app.pretendo.cc/p01/tasksheet/%s/%s/%s/%s?c=%s&l=%s",
    //npts2
    "https://npts.app.pretendo.cc/p01/tasksheet/%s/%s/%s?c=%s&l=%s",
};

IconDatabase pn_icdb {
    //wup1
    "https://idbe-wup.cdn.pretendo.cc/icondata/%02X/%016llX.idbe",
    //wup2
    "https://idbe-wup.cdn.pretendo.cc/icondata/%02X/%016llX-%d.idbe",
    //ctr1
    "https://idbe-ctr.cdn.pretendo.cc/icondata/%02X/%016llX.idbe",
    //ctr2
    "https://idbe-ctr.cdn.pretendo.cc/icondata/%02X/%016llX-%d.idbe",
};

Olive pn_juxt = {
    //Discovery URL
    "disc.olv.pretendo.cc/v1/endpoint",
    //Whitelist
    {
    0x68, 0x74, 0x74, 0x70, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x2E, 0x70, 0x72, 0x65, 0x74, 0x65, 0x6E, 0x64,
    0x6F, 0x2E, 0x63, 0x63, 0x00
    },
    //Highlight
    {
    0x5d, 0x4a, 0x9a, 0xff, 
    0x5d, 0x4a, 0x9a, 0xff, 
    0x5d, 0x4a, 0x9a, 0xff, 
    0x5d, 0x4a, 0x9a, 0xff
    },
    //Touch1
    {
    0x5d, 0x4a, 0x9a, 0x00, 
    0x5d, 0x4a, 0x9a, 0xff
    },
    //Touch2
    {
    0x5d, 0x4a, 0x9a, 0x00, 
    0x5d, 0x4a, 0x9a, 0xff
    },
};