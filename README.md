# Ascent

#### COMP313 - Nicholas Woolf-Ben-Avraham - Assignment 1

This game is a 3D platformer, and as such the main action is to navigate a stage with the character’s jumping ability. To win, the player must find 5 items scattered throughout the stage, hidden behind both platforming challenges and enemies. The main ‘gimmick’ of the game is that the character has an ability that propels them forward at speed once per jump, and this ‘dash’ can also be used as an attack. The platforming in the stage is designed around this and it is also the only way to defeat enemies, making it a central ability to the gameplay.

It is hard to narrow down what the hardest part of the game to get working was, as over time I got more and more familiar with the engine and therefore implementations of certain things, such as moving platforms, got easier over time (for example I changed how my moving platforms were implemented as I learnt, as my old system was based on time moving rather than locations). However, I would say that working with C++ was more difficult than working with Blueprints, as there are less resources for learning how to work with that part of the engine. This led to a very specific annoying case, where I had built the dash move in C++ and wanted to add a sound effect to this. I found a couple of similar but different partial implementations on how to accomplish this from forum responses but attempting to adapt these to my specific project caused headaches and an eventual editor crash. The culprit ended up being the assignment of a specific asset to a variable, and in retrospect I likely simply got the file path wrong, but my solution was to define the variable in my character’s header file, assign the asset to the variable in Blueprints on BeginPlay, then use the variable in C++ to trigger the sound cue.

I would say that the most ‘interesting’ part of the game is the dash attack, not due to any technical complexity, but more from a player’s perspective. While undeniably somewhat rough, and there are improvements I would like to make to it if I had more time, I would consider it the main sticking point of the game in its current state. The dash grants the player a rush of speed (it is the fastest movement action present) but at a slight loss of control, therefore both giving the satisfaction of a speed boost with the requirement of some skill to use it effectively without catapulting off the stage.

Video link - To Be Added

## References:
Tree model: https://free3d.com/3d-model/tree-oak-v9-29481.html

Footstep audio: https://www.premiumbeat.com/blog/40-free-footstep-foley-sound-effects/

Laser sizzle: https://www.storyblocks.com/audio/stock/electrical-sizzle-sxogjjaniwrk0wxvglu.html

Attack whoosh: https://www.fesliyanstudios.com/

Button hover noise: https://freesound.org/people/unfa/sounds/565131/

Item pickup noise: https://freesound.org/people/cameronmusic/sounds/138419/

Enemy collision noise: https://soundbible.com/947-Metal-Bang.html

Background ambience: https://erikmmusic.gumroad.com/l/cWdaX 

Button icons: https://opengameart.org/content/free-keyboard-and-controllers-prompts-pack
