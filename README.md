# Forker's note
This project isn't very high on my current priority list, I just opened this fork ahead of time so that it is here when I eventually take a swing at it.

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
