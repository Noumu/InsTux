# InsTux

This is InsTux, a hack for Insurgency on Linux. It is currently a work in progress.

# Features

- XQZ Cham
    ![cham](http://i.imgur.com/oJ7cZaS.png)

- Natural auto-aim activated when Shift is pressed

Demo video:

# Installation

1. clone the repository
2. cd to the repository's root directory
3. run "cmake ." to generate the Makefile
4. run "make" to conpile

The process is virtually identical to that of project AimTux, please see thier detailed installation guide if you do now know what tools are needed.
To use, start the game and wait until it finishes loading, then run "./load" in the repo directory.

# Known issues
Currently there seems to be some false positives when it comes to visibility check, which causes the auto-aim to target players behind cover occasionally. This does not include cases when the targets is within 1 degree fov of center of screen, which is intended as a force targeting feature.
