# SMT1-Decomp
A very WIP decompilation of Shin Megami Tensei 1 for the Playstation.

## Why?
- The classic SMT games (with the exception of 1) have yet to be released in the west, and none of them have been re-released on PC, even via an emulated release.
- The goal of this project is primarily the creation of a PC port of the three classic games (SMT1, SMT2, and If...), with optional enhancements that would be difficult to implement as a hack.
- The other reason for this project is that I have a personal interest in these games, and wanted to learn more about how they work under the hood.
## Contributing
As of right now there isn't a super easy workflow to contributing to the project directly. However, if you just want to do some small function matching work, I'd highly encourage checking out the [decomp.me preset](https://decomp.me/preset/165), and seeing which functions need work.

If you do want to get the project set up on your own machine, then the general flow is as follows:
- Create a WSL environment for the project.
- Acquire the original game files (hashes can be found in /game).
- Rip the filesystems with PSXimager or a similar program, and place them under /game/smtX, where X is "1", "2", or "if" corresponding to the game.
- Run `make split` in the project directory to create the assembly files.

PS: if you have experience with git, make, or open source software in general then please reach out to me to help make the setup as easy as possible.
## Building
TODO
