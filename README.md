# GROUP MEMBER
1. MUHAMMAD LUTFI BIN YAHYA 160382

2. IDHAM FITRI BIN MOHD RODZI 160474

3. MUHAMMAD IKMAL DANIEL BIN AZMI 160331





# HACKATHON_G41

# Description of game
We have developed a game named ESCAPE ROOM.It is a game where player need to escape all of the rooms to win $1,000,000.Each room will have it’s own challenge where player needs to pass the challenge to go to the next room.If player lose,the current challenge he/she will have choice whether to restart the game or only restart the current room that he do not manage to pass.

# Features of Game
For this game,there are some features we provided such as:
1. Start the game-At the beginning of the game,player can press no 1 to start new game which means start from room number 1.
2. Load Game-players can choose to load the game which means player can play game in the last room before player quit the game.
3. Restart the Game-player can choose to restart again the game if they win or lose the game.
4. Load Previous Game-player can restart the current room(level).Whether they win or not.
5. Quit-if player choose to quit the game,the current room(level) will automatically saved.And if player play the game back he/she can choose the load game to go straight to the last room(level) they have quitted.

# How to play our game:
 1. First, the menu will appear where player need to choose to start game,load game or quit.
2. If player choose to start the game it will appear the challenge from room 1.If player choose to load the game it will appear the last room player played before quit the game.
3. For the room 1,player need to solve riddle.Choose the answer between 3 provided.There are three riddles.Player need to solve at least 2 to go to the next room.If win,player can choose to go to the next room,restart the current level,or restart the game.Player can also quit from game and the last level will saved.If player lose,they can only restart the current level,restart game or quit.This will happen for all the rooms.
4. For the room 2,player need to guess the word among 5 words given.Clue of the words has been given Player need to key in letter one by one until the correct word appear.Player has total 6 chances.
5. For the room 3,player need to solve the arrangement of letter based on the ascending order.Each letter has its own value.The clue of value has been given.Player has 3 chances.
6. For room 4,The game consists of three rounds. In each round, both the player and Chika receive two cards with random values. The player's goal is to get a score of exactly 18 by drawing additional cards. The player can choose to draw cards until they decide to stop. Chika's goal is also to get a score of exactly 18 or as close to it as possible without going over.After the player finishes drawing cards, Chika takes their turn and draws cards until their score is 18 or greater. Once both the player and Chika have completed their turns, their scores are compared. If both the player and Chika have scores over 18 or their scores are equal, the round is a draw.If the player's score is less than or equal to 18 and Chika's score is greater than 18 or lower than the player's score, the player wins the round. Otherwise, Chika wins the round. The process repeats for three rounds.After three rounds, the game is over, and the player's and Chika's scores are compared. If the player has a higher score than Chika, the player wins the game and is declared the winner. They are then prompted to escape from a room. However, if the player's score is lower than Chika's score or the scores are tied, the player loses the game The player's objective is to get a score of 18 while competing against Chika's attempts to achieve the same goal or get as close to it as possible.
 # How object-oriented concepts were used
 1. Classes:
 	- Our code includes several classes such as ‘LinkedList’,’File’,and ‘Game’.
	- LinkedList class implements a linked list data structure and provides methods to append,access,restart game.
 	- The File class represents a basic file manipulation class. It allows write an integer value to a file and read an integer value from a file. It has a method called writeFile to write the value to the file and a method called readFile to read the value from the file. The class provides a simple interface for performing these file operations.
 - The Game class has public member functions including mutator  and accessor for "level" and "gameNum". It also has four functions named "g1", "g2", "g3", and "g4", which are placeholder and functions for different game challenges. Finally, there is a function named "DisplayGame" that takes the current game number and performs different actions based on the game number. It calls the corresponding game function and sets the level based on the game number. After that, it writes the level to a file using the "writeFile" function.
2. Inheritance:
The Game class is derived from the File class, meaning it inherits the members and functionality of the File class.
The DisplayGame function is used to display the game based on the gameNum value. It checks the value of gameNum and calls the appropriate game function (g1, g2, g3, or g4) based on the value. After completing the game, it updates the level value and calls the writeFile function to save the level in the "Load.txt" file.
3. Objects: Objects are instances of classes. In the main() function, objects of the LinkedList<Game> class and the Game class are created. For example, gameList is an object of the LinkedList<Game> class, and game1, game2, game3, and game4 are objects of the Game class.
4. Encapsulation: Encapsulation is a concept of bundling data and methods together within a class. The Game class encapsulates data related to a game, such as the game number, and provides methods to interact with that data, like LoadNode(), accessNode(), and restartNode().
5. Class Interactions: The LinkedList class interacts with the Game class through the use of nodes. The LinkedList class manages a linked list of nodes, where each node contains an object of the Game class. The LinkedList class provides methods like appendNode() to add a new node with a Game object to the linked list.
6. Method Invocation: In the main() function, methods of different classes are invoked to perform various operations. For example, gameList.appendNode(game1) adds a new node with game1 object to the linked list. gameList.accessNode() accesses the data of the current node, and gameList.restartNode() resets the data of the current node.
7. File Handling: The code also demonstrates the usage of file handling to load a game from a file. The ifstream class is used to read from a file, and the ofstream class can be used to write to a file. The loaded game data is then used to create a new Game object, which is inserted into the linked list using gameList.LoadNode(loadedGame).

# How linked lists/stacks/queues play a role in our game:
- Adding a game(level of the game): The appendNode() function in the LinkedList class likely takes a Game object as a parameter and adds it to the linked list. It create a new node and set the value of the node to the Game object. This way, the linked list acts as a container for the Game objects.All levels of the game appended first before the user be able to play it well.Each level are fix at it state which mean there is no random level selected each time the user play it.Each level are connected to each other  for instance level 1 is connected to level 2.Level 1 will point to the level 2 which mean the user be able to proceed to the level 2 after winning the first level.Same goes the other level,the level are connected in sequence.
 
- Accessing games: The accessNode() function in the LinkedList class is responsible for accessing the nodes in the linked list.Whenever programme is starting,the toward pointer will always point at the first node that have been added.Then it will move to the next node and can be accessed if player choose to go to the next room(level).Every time the user go to the level 1,game 1 will be run and the toward pointer will automatically pointer to the next level to proceed the after winning the first level.
 
- Loading the game:The LoadNode () function is to trace the value that have been loaded from the saved txt file.The toward pointer will keep traverse until the toward->value match the value of game number(room number)in the class game.Then it will display the game based on the number in the node that toward pointer point to.The game automatically save after the user play the first level.Whenever the user quit at certain level for instance level 3,the save file will store the value of the level (3) in file,when the user load the game,value of the level will read from the file and run the level 3.
- Restart the game: The restartNode() function in the linkedlist class is to make the toward pointer point back to the first node.So that if player choose to restart the game the first game(room 1) will appear.toward pointer will be equal to head pointer which mean it will point to the first node.First node store the first level of our game.
 
- Overall,the linkedlist play a role to allow player move from one room to the next room and also to access the last room that have been saved.It also allow player to restart the game where it will go back to the first room.

# SCREENSHOTS OF GAME
![image](https://github.com/lutfiyminoyz/HACKATHONG41/assets/121544132/16b7771a-dc06-4947-a754-f4fd1bbb8764)
![image](https://github.com/lutfiyminoyz/HACKATHONG41/assets/121544132/abbb431e-4d67-46d1-bca0-bf7b2d9b004b)
![image](https://github.com/lutfiyminoyz/HACKATHONG41/assets/121544132/4abd53b0-5e7b-46f9-a916-89d01e7bcb43)
![image](https://github.com/lutfiyminoyz/HACKATHONG41/assets/121544132/9810718a-b50a-49de-874f-855ed74ff2b1)
![image](https://github.com/lutfiyminoyz/HACKATHONG41/assets/121544132/d1775e79-b282-4c0f-ac1b-d877b373b681)
![image](https://github.com/lutfiyminoyz/HACKATHONG41/assets/121544132/23092b5d-fbc5-4062-af3e-90d0d3c187ec)
![image](https://github.com/lutfiyminoyz/HACKATHONG41/assets/121544132/d0f94cc3-1453-4a56-aae3-2a8b8c092e2c)
![image](https://github.com/lutfiyminoyz/HACKATHONG41/assets/121544132/17d4d1eb-2815-434e-a7b7-dd963295afad)
![image](https://github.com/lutfiyminoyz/HACKATHONG41/assets/121544132/c5b8964d-d392-47a6-8b5f-31dcbffea037)
![image](https://github.com/lutfiyminoyz/HACKATHONG41/assets/121544132/dd5e67ee-fea7-4705-acf8-ae76a5d81c16)
![image](https://github.com/lutfiyminoyz/HACKATHONG41/assets/121544132/16d5b326-1f8c-4c6a-b3cd-22f4698e6f93)









# LINK FOR DEMO VIDEO
https://youtu.be/l3Oc4pJ9PoE


