# 2025 2D rouge-like game in C++

## Gameplay and Design

Wave based rouglike with more enemies and scaling health as the levels go on.

Augments/item pickups or shop for improved stats to help you last more rounds.

Multiple levels with travel between levels like RoR2.

Boss rooms/areas on each level that allow for progression.

Binding of Isaac style graphics with bright colourful blocky shapes.

Final boss in last map as win condition.

Characters weapon must move independently from the character and follow the mouse which has a cursor following it to allow for easy aiming.

Lots of enemy variation between levels to allow for unique enemies in their matching environments.

One large map with an enterance to a dungeon/boss room.

## Lore/Backstory (WIP)

You are traveling on a ship to a certain final planet to defeat a galactic enemy. You are a robot from a planet where there are only robots and they use creature flesh as fuel for more machinery (think The Matrix). Perhaps the final boss has a certain magical aura that makes their flesh the ultimate fuel and it is your lone task to collect this fuel to save your civilization. You land on the planets on the way to collect more boss flesh to give your ship enough fuel to get to the final planet. 

## Characters

All characters will have a set amount of abilities baked in to their kits.

All characters are robots and need the flesh of the boss to power their ship to move to the next planet (map).

All characters will have an item/augment/pickup that is like a carry augment in TFT and will fundamentally change the way the character is played.

### Soldier

First character is a generic soldier droid with a large gun that shoots basic projectiles.

Cold blue grey main colour of robot with bright pastel blue accents for eyes and powercore.

This will be the first character you will play and is meant to be a very generic intro character with no fancy kit to allow players to be eased into the gameplay loop first then experiment with characters and item builds.

- Gun is generic looking M4 but futuristic.
- Gun has a canister of purple goop instead of a magazine. (This will be the same for all characters with a gun)
- Potential jetpack ability?

### Knight (name WIP)

The second character is a fast melee character with a cool futuristic sword. Lots of utility/movement in their kit to make up for a lack of range. An older looking robot who resembles a medievil knight with some inspo drawn from Malenia from Elden Ring. 

- Cool gold looking armour over the robotic body with a large ornate helmet with red eyes peeking through the slots in the mask.
- Perhaps some fabric on the back of its head to resemble hair.
- Sword made out of metal with gold and red accents to match the character.

### Sniper

The third character is a sniper character whos design is based on the Nighthawk stealth planes. He has a large sniper rife with bullets that peirce enemies but he has a fixed attack speed so no AS buffs work on him but his projectile damage scales off AS as well so it is not a useless stat.

- All black and dark grey design with slightly lighter accents for the eyes.
- Very triangular design to match the design of the Nighthawk.
- Sniper rifle is based on the WA2000 from Black Ops 1 and has a glass panel in the back to see through to the purple goo *ammo*.

## Maps

There will be 5 main maps to the game that will be in a random order determined at the start of the run. This allows for a bit of variety in gameplay loop. Final level will always be the last level though. 

Maybe each level can have it own shrines/totems that can provide aoe buffs for the player to add more variety between levels. Maybe even some gamba shrines like in RoR2.

### Map 1 - Desert 

Pastel pink desert with sand dunes. Lots of blueish grey rocks lying around and palmtree esque trees with a weird pastel alien colour palette. Green and purple/pink shrubs lying around in small patches. Maybe some dead bushed too in a light brown/tan colour. 

### Map 2 - Bog

Generic swamp world with lots of brown and dark green to contrast most maps strong colourful palettes. Tall dark jungle trees, lots of bushes and shrubs and large patches of bog that are just brown and goopy looking. This level could have the totems mentioned above that provide healing nature buffs. 

### Map 3 - Void

Futuristic void style planet with you being on a floating island with the galaxy/gassueus space below you. This planet isn't really a planet and is more a collection of asteroids that clump together. Lots of purple, pink, light blue stars and cold blue grey stone flooring. No shrubbery on this map, very barron but lots of rocks with ores sticking out.

### Map 4 - Ruins

This is a planet that was once inhabited by some civilization and is now all in ruins and nature has taken over again. Perhaps this is a post apocalyptic earth with nature taking control again over thousands of years with enemies looking almost like a native earth animal but they're more alien now as its been thousands of years. Lots of bright green grass and buildings covered in moss/vines. Imagine generic plains biome in video games. Trees and shrubs. 

### Map 5 - Church

This is the final map of the game and where the final boss is. You arrive outside a large ornate creamy white marble building and the enterance is the only place you can go. Once you enter it is a beautiful ornate chapel/church with beautiful pristine flooring with ornate patterns. Lots of Greek/Athens style pillars. Slight religious symbolism. MAYBE YOU ARE KILLING GOD????????

## Game systems

### Waves

Waves will increase in number after you kill all monsters. Then the next wave will spawn more monsters adding to the difficulty. Wave progression will stay between planets and it will allow for the end game to be harder and the early game easier. It will also stop players from over-farming items and force them to move on or the later planets will be too hard. Wave progression will also spawn harder enemies.

### Augments

Augments will be offered at intervals of waves (maybe every 5 waves?) and will allow for more in-depth adjustment of playstyle. There will be 3 augments offered at these intervals and will be randomly chosen from a large pool of potential augments. This is where character specific augments will come from although they will be rarer.

### Items

UNSURE

### Boss fights

Each map will have a dedicated boss with its own design. Each boss should have 3 phases and how many phases you have to fight is determined by what wave you are on. An entrance will be generated for the boss rooms in a random location on the map each time a new map is entered. This allows players to go right in to the boss room if they feel like they can take the challenge and allows for people to "speedrun" the game if they are good enough but shouldnt be viable for newer players.

