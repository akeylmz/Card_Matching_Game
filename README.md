# Memory Matching Game
Description
Memory Matching Game is a classic card-matching game implemented in C. The game offers three levels of difficulty: Easy, Medium, and Hard. The player needs to find matching pairs of cards by selecting two cards at a time. If the selected cards match, the player earns a point and gets to continue their turn. Otherwise, it's the computer's turn to make a move.

![giriş](https://github.com/akeylmz/Card_Matching_Game/assets/97607813/b126d1f3-4682-4cb2-b8df-ddd7268fdacd)

Features

Three difficulty levels: Easy (16 cards), Medium (36 cards), and Hard (64 cards).

![oyun kuralları](https://github.com/akeylmz/Card_Matching_Game/assets/97607813/7ee31f0d-66c6-42c6-8047-8823198bbff7)

Simple text-based interface for gameplay.
Randomized card distribution to ensure a different game every time.
The game keeps track of the player's and computer's scores.
Interactive gameplay with messages to guide the player.
Supports a maximum of 17 points to determine the winner.


![orta mod oyun](https://github.com/akeylmz/Card_Matching_Game/assets/97607813/82e5613a-4ae1-4ff5-904f-7e041dc0ff3a)
![Uploading kolay mod oyun.PNG…]()![zor mod oyun](https://github.com/akeylmz/Card_Matching_Game/assets/97607813/bcc16128-d206-4c48-93f6-c836047e49df)


Getting Started
Prerequisites
C Compiler (GCC, Clang, etc.)
Standard C Library (stdio.h, conio.h, time.h, stdlib.h)
Running the Game
Clone the repository to your local machine.
bash
Copy code
git clone https://github.com/akeylmz/Card_Matching_Game.git
Navigate to the project directory.
bash
Copy code
cd memory-matching-game
Compile the source code using your preferred C compiler.
css

Copy code
gcc main.c -o memory_matching_game
Run the executable file.
bash
Copy code
./memory_matching_game
Choose the difficulty level (1 for Easy, 2 for Medium, 3 for Hard) and enjoy the game!
How to Play
The game board displays a grid of face-down cards represented by asterisks '*'.
The player's turn:
Enter the row and column coordinates (e.g., 1 2) of the first card to flip.
Enter the row and column coordinates of the second card to flip.
If the cards match, the player earns a point, and the matched cards remain face-up.
If the cards don't match, they will flip face-down again, and it's the computer's turn.
The computer's turn:
The computer will randomly select two face-down cards and try to find a match.
If the computer finds a match, it earns a point, and the matched cards remain face-up.
If the computer doesn't find a match, the turn ends, and it's the player's turn again.
The game continues until all cards are matched or a player reaches 17 points.
Contributing
Contributions are welcome! If you want to improve the game or add new features, feel free to submit a pull request.

License
This project is licensed under the MIT License.

Acknowledgments
This game is inspired by the classic Memory Matching Game and built as a fun coding exercise in C.

Enjoy playing!
