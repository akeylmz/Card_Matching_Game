# Card Matching Game
## Description
This project was made for my undergraduate education at Yıldız Technical University at 2021.
Card Matching Game is a classic card matching game implemented in C. The game offers three levels of difficulty: Easy, Medium, and Hard. The player needs to find matching pairs of cards by selecting two cards at a time. If the selected cards match, the player earns a point and gets to continue their turn. Otherwise, it's the computer's turn to make a move.

![giriş](https://github.com/akeylmz/Card_Matching_Game/assets/97607813/d9a0d030-6178-4832-bb5d-e812f18aa674)


Features

Three difficulty levels: Easy (16 cards), Medium (36 cards) and Hard (64 cards).

![oyun kuralları](https://github.com/akeylmz/Card_Matching_Game/assets/97607813/7f6c2580-fba2-4b6c-9999-910c2158458f)

Simple text-based interface for gameplay.
Randomized card distribution to ensure a different game every time.
The game keeps track of the player's and computer's scores.
Interactive gameplay with messages to guide the player.
Supports a maximum of 17 points to determine the winner.

![kolay mod oyun](https://github.com/akeylmz/Card_Matching_Game/assets/97607813/da583c1e-cdc5-4e20-8051-b40f3c47b3ac)

![orta mod oyun](https://github.com/akeylmz/Card_Matching_Game/assets/97607813/95f7fd6a-d239-4166-90fa-c07d018bae9f)

![zor mod oyun](https://github.com/akeylmz/Card_Matching_Game/assets/97607813/474bd2cb-e562-465b-8b07-0afccbdbbc8e)

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
cd Card-matching-game
Compile the source code using your preferred C compiler.
css

Copy code
gcc main.c -o Card_matching_game
Run the executable file.
bash
Copy code
./Card_matching_game
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
This game is inspired by the classic Card Matching Game and built as a fun coding exercise in C.

Enjoy playing!!
