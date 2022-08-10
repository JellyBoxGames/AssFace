# AssFace

A rogue-lite adventure featuring a non-binary ass-faced person slashing, stabbing, burning, and beaming a variety of angry baddies. With a persistent story and tons of powers, weapons and permanent upgrades.

### Patch Plan - Subject to Change
0.0.0.1 - Ass patch *Current*
* Ass Face is fully drawn out
* Ass Face can navigate a simple map
* While navigating, model changes based on direction faced.

0.0.0.2 - Sword Swing
* Slight animation of character image while running
* Sword swinging animation implemented
* Simple enemy model

0.0.0.3 - Health and Damage
* Character and enemies have health pools
* Sword collision
* Character enemy collision

0.0.0.4 - Enemies and maps
* New enemies
* layout of level 1 map

0.0.0.5 - New weapons
* 2 New weapons with animation and textures
* New weapon collision
* 5 in game powers

0.0.0.6 - Start menu
* Start menu
* Pause menu
* Some options

0.0.0.7 - More gear and powers
* Full set of discoverable gear
* 2 more weapons
* 5 more powers

0.0.0.8 - Points
* Accumulating points
* Altars available to swap out powers for different or stronger ones
* Multiplier?

0.0.0.9 - Permanent upgrades 
* Points can be spent on permanent upgrades
* Final boss of stage 1 gives higher rarity item or power
* Final boss of stage 1 gives a lot of points
* Small starter location to spend points and talk to npcs

0.0.1 - Stage 2
* Stage 2 is available
* Stage 1 textures improved
* More weapons
* More Enemies
* More powers
* Story progression
* NPCs at home and in world
* Save files
### Dependencies for Development
* gcc and g++ which you can get with apt-get or another pkg installer
* [VSCode](https://code.visualstudio.com/docs/setup/linux) or some decent IDE
* libegl-mesa0, SDL2: libsdl2-dev, SDL image, SDL mixer, SDL ttf, Xorg; see below.
 ```console
 sudo apt-get install libegl-mesa0
 sudo apt-get install libsdl2-dev
 sudo apt-get install libsdl2-image-dev
 sudo apt-get install libsdl2-mixer-dev
 sudo apt-get install libsdl2-ttf-dev
 sudo apt-get install xorg-dev
 ``` 
### Useful Github Actions

Clone the Repository and create your own branch:
```console
git clone https://github.com/JellyBoxGames/AssFace.git
git branch username-working-branch
```
List branches and switch into a branch:
```console
git branch --list
git checkout username-working-branch
```
Pull updates from a branch:
```console
git pull origin branch_name
```
Merge a branch into the active branch:
```console
git merge branch_name
```
Grab anything that doesn't exist in current working branch:
```console
git fetch origin
```
And Finally, push changes to branch:
```console
git add path_to_push
git commit -m "updates"
git push -uf origin branch_name
```

### Contact:
Email jellybox\_games@proton.me
