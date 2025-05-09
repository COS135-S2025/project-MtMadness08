File: COS 135 Final Project
Name: Alex St Jarre
Date: 5/9/2025

///////////////////////// Description /////////////////////////


This program is a guessing game based on Pokemon.

It takes in 3 files that each have a list of 21 different Pokemon
and their hints. It steps through each one, and each time a new
question is asked, it gets moved to the bottom of the file. This
way you never get a repeat question when you're done playing.


/////////////// Something not Explicitily Taught////////////////

One thing I used was Strncmp which compares two strings with a set
number of characters. I used this to compare directly with the input.

Another item I used was copying a file into a new one using an array
this was necessary to keep all the information from one file to
another so I could reuse the questions



//////////////////////// How to play ////////////////////////////

To run the makefile, go in the folder that contains the project and
type "make -f MakeFile" this will create the run file

Next, type "./Start". this will start the file.


When you start the file, you will be asked if you are a new player
for this set of games. All new players will be input into a struct
that will be an array. Then you will select a difficulty

Type either "Easy", "Normal", or "Hard" into the command line.
This will take you to whatever difficulty you selected. Visually
there is no change aside from it telling you what difficulty.

When answering your question, respond with a capital at the front
ex. "Pikachu"

You will be given the National Pokedex number of the pokemon.
You can either type "Hint" for a hint, or guess the name of the
pokemon. 

The player gets 5 guesses and hints. When you are out of hints
the game will inform you. Once you run out of hints, the game
ends and tells you the answer.

When the game ends, it will ask if you want to play again, you
may input "y" or "n" to select. These are not capital inputs.

If "y" was input, the game will restart from beginning, asking
for a new player. You can either get a new player or continue.
If "n" was input, the game will close.

