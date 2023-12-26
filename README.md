# Forker's note
Note: this project does not have a set time scale for completion.

This fork aims to make Inkay into a *profile manager* for the patching features it provides. I've seen various Miiverse revivals and other projects all fork Inkay to edit in their own patches, but then this causes several issues:
* Several Inkay patches will overlap with each other, causing whichever Inkay named closest to z alphabetically to be the actual active one when several are active, despite what the user may actually want.
* Services that want to keep their URLs private (eg. rverse3, which is in private testing) have licensing issues due to Inkay using GPL 3, because they either break the license by not publishing their fork's code, or MUST make their fork open source as per the license, making their URLs... less than private.
* Several Inkay patches in a single Aroma env are annoying to manage
* Having seperate environments for each Inkay is inconvenient for users

I couldn't help but think there could/should be a better way for this to get done. So, this fork aims to utilize Aroma WUPS' storage system to store several patch profiles simultaneously, for one Inkay plugin to access to patch and/or switch. This has several benefits:

* No conflicing Inkays, because all patches are handled by the singular plugin
* Patches can be edited/added without (re)compiling, adding a new Inkay to the system, etc.
* No need to switch environments to run different Inkays
* Depending on what other patches do in relation to the active patch set, rebooting will not be required for switching (hypothetically; untested)

About that last bit: So, theoretically, the Wii U isn't constantly accessing certain URLs, namely the Miiverse discovery URL. The hypothesis is that two Miiverse revivals that use the same network (eg. both on Pretendo, or both on Nintendo Network), or in other words, only patch the one URL differently, don't necessitate a full system reboot to be switched, as long as they are not being actively accessed. So, if a user were to switch between these two, it will merely need a restart of the current application, not the entire system, making it MUCH more convenient for users swapping between Miiverse revivals. 

Also, if you see a PR for this, I apologize, I misclicked a button or didn't know that something I did would cause a PR. This is NOT ready to be PRed, and I'm not even sure if I'll PR it once its done either.

# Inkay - Aroma patches for Pretendo

[![Pretendo network logo](https://github.com/PretendoNetwork/website/raw/master/public/assets/images/opengraph/opengraph-image.png)](https://pretendo.network)

Inkay is an Aroma/WUPS plugin that patches various Nintendo Network URLs on a Wii U to use Pretendo Network instead. It also (for the time being) bypasses SSL verification in most cases.

Inkay does not currently include the game-specific patches present in [Nimble](https://github.com/PretendoNetwork/Nimble). These will be implemented soon™.

## Dependencies
Inkay is only supported on the release version of Aroma configured for autoboot/coldboot. For Tiramisu, see [Nimble](https://github.com/PretendoNetwork/Nimble).

## Safety
Inkay's patches are all temporary, and only applied in-memory without modifying your console. The SSL patch, while also temporary, could reduce the overall security of your console while active - this is because it no longer checks if a server is verified. However, this does not apply to the Internet Browser, where SSL still works as expected.

## TODO
See [Issues](https://github.com/PretendoNetwork/Inkay/issues).
