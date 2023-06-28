#ifndef CLASS_H
#define CLASS_H
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

#include"Filee.h"
using namespace std;

//-------------INTRO BEFORE GAME START --------------------//
void  intro()
{
	 cout << "\n\n *";
    for(int a=1;a<20;a++) // Change 'a<?' to how many * you want
	{

	}
   
	
	 cout<<"YOU HAVE BEEN APPOINTED TO BECOME ONE OF THE CHALLANGER TO WIN $1,000,000"<<endl;
    cout<<"TO WIN THIS GRAND PRIZE,YOU NEED TO ESCAPE FROM ALL OF THE ROOM IN THIS BUILDING"<<endl;
    cout<<"EACH ROOM HAS ITS OWN ~INTERESTING GAME~.COMPLETE THE GAME TO ESCAPE FROM THAT PARTICULAR ROOM "<<endl
        <<"ALL OF MONEY WILL BE YOURS IF YOU ESCAPE ! HOWEVER YOU WILL LOSE YOUR LIFE IF YOU DONT ESCAPE !"<<endl<<endl<<endl
        <<"                          GOODLUCK !!!!!!!!!!                                                  "<<endl<<endl<<endl;
	cout<<"********************************************************"<<endl;
	cout<<"********************************************************"<<endl;
	cout<<"|                                                       |"<<endl;
	cout<<"|              WELCOME TO ESCAPE ROOM                   |"<<endl;
	cout<<"|                  'survive or die'                      |"<<endl;
	cout<<"|                                                       |"<<endl;
	cout<<"********************************************************"<<endl;
	cout<<"********************************************************"<<endl;
	
	
	
}
//--------------------STARTING MENU-------------------------//
void StartMenu()
{
	cout<<"________________________"<<endl;
	cout<<"   1.START NEW GAME     "<<endl;
	cout<<"   2.---------          "<<endl;
	cout<<"   3.LOAD GAME          "<<endl;
	cout<<"   4.QUIT               "<<endl;
	cout<<"________________________"<<endl;
	
}

//-------------MENU APPEAR WHEN WIN THE CHALLENGE----------------//
void menuWin()
{
	cout<<"________________________"<<endl;
	cout<<"|                       |"<<endl;
	cout<<"|  1.NEXT LEVEL         |"<<endl;
	cout<<"|  2.RESTART GAME       |"<<endl;
	cout<<"|  3.LOAD PREVIOUS GAME |"<<endl;
	cout<<"|  4.QUIT               |"<<endl;
	cout<<"|_______________________|"<<endl;
	

	
	
	
}

//--------------MENU WHEN YOU LOSE THE GAME-----------------//
void menuLose()
{
	cout<<"________________________"<<endl;
	cout<<"|                       |"<<endl;
	cout<<"|                       |"<<endl;
	cout<<"|  2.RESTART GAME       |"<<endl;
	cout<<"|  3.LOAD PREVIOUS GAME |"<<endl;
	cout<<"|  4.QUIT               |"<<endl;
	cout<<"|_______________________|"<<endl;
	
	
	
}
//-----------WHEN SUCCESSFULLY ESCAPED FROM ALL DOORS--------------//
void escapefull(){
	
	cout <<endl<<endl;
	cout <<"***************************************************************************************************"<<endl
	     <<"* CONGRATULATION !!!!! YOU HAVE ESCAPE FROM ALL OF THE ROOM ! ALL OF $1,000,000 WILL BE YOURS !   *"<<endl
	     <<"*************************************************************************************************** "<<endl;
}



//-----------INHERIT CLASS FILE TO CLASS GAME---------------//
class Game : public File {
private:
    int gameNum;
    int level;

public:
    Game() : File(), gameNum(0) {}

    Game(int n) : File(), gameNum(n) {}

    void setLevel(int l) {
        level = l;
    }

    int getLevel() const {
        return level;
    }

    void setGameNum(int n) {
        gameNum = n;
    }

    int getGameNum() const {
        return gameNum;
    }

	//------------------GAME LOGIC --------------------//     
    void g1();
    void g2();
    void g3 ();
    void g4 ();
   // void g5();
    void DisplayGame();
};

//---------ENTER THE GAME BASED ON THE CURRENT LEVEL -------//
void Game::DisplayGame() {
    int num = getGameNum();

    if (num == 1) {
        // Placeholder function g1() -
        g1();
		setLevel(1);
        int l = getLevel();
        writeFile(l);
    }
    else if (num == 2) {
        g2();// Placeholder function g2() - 
        setLevel(2);
        int l = getLevel();
        writeFile(l);
    }
    else if (num == 3) {
        // Placeholder function g3() - 
        g3();
		setLevel(3);
        int l = getLevel();
        writeFile(l);
    }
    else if (num == 4) {
      
	  g4();  // Placeholder function g4() - 
        setLevel(4);
        int l = getLevel();
        writeFile(l);
    }
};

//--------------GAME 1'S CHALLENGE ----------------//
void Game::g1(){
			
		
	char ans1,ans2,ans3;
	int count=0;
	int c;

	cout<<"||                                 WELCOME TO ROOM 1                                                    ||" <<endl; 
    cout<<"||           You are now on the first challenge.You need to get the key to escape from this room        ||"<<endl; 
    cout<<"||                   In order to get the key,you need to solve 3 riddle game.                           ||" <<endl; 
    cout<<"||                     Key will be given only if you get 2 corrrect or more                             ||" <<endl; 
    cout<<"||                                 Best of luck !!!!!!                                                  ||" <<endl<<endl<<endl; 
   
	cout<<"                         *********************************************************"<<endl;
	cout<<"                         *********************************************************"<<endl;
	cout<<"                                                RIDDLE GAME                       "<<endl;
	cout<<"                                                                                  "<<endl;
	cout<<"                                         2 WIN TO GO TO THE NEXT LEVEL            "<<endl;
	cout<<"                                                                                  "<<endl;
	cout<<"                                                                                  "<<endl;
	cout<<"                                            BEGINING OF THIS LEVEL                "<<endl;
	cout<<"                                                                                  "<<endl;
	cout<<"                                                                                  "<<endl;
	cout<<"                          ********************************************************"<<endl;
	cout<<"                          ********************************************************"<<endl;
	cout<<"                                                  RIDDLE 1                        "<<endl;
	cout<<"                                                                                  "<<endl;
	cout<<"                                       Sometimes to get inside a door             "<<endl;
    cout<<"                                        All you need to do is knock               "<<endl;
    cout<<"                                     Other times you will need this thing         "<<endl;
    cout<<"                                        So the door you can unlock                "<<endl;
    cout<<"                                                                                  "<<endl;
    cout<<"                          ********************************************************"<<endl;
	cout<<"                          ********************************************************"<<endl;
    cout<<"                                                 YOUR ANSWER                      "<<endl;
    cout<<"                                                    A.WOOD                        "<<endl;
    cout<<"                                                    B.WINDOW"                      <<endl;
    cout<<"                                                    C.KEY"                         <<endl;
    cout<<"Your Answer : ";
    cin>>ans1;
    cout<<"                                                                                  "<<endl;
    cout<<"                          ********************************************************"<<endl;
	cout<<"                          ********************************************************"<<endl;
    
    

	 if(ans1=='A'|| ans1=='a')
    {
    	cout<<"                                             WRONG ANSWER!!!!                 "<<endl;
    	
	}
	else if(ans1=='B'||ans1=='b')
	{
		cout<<"                                            WRONG ANSWERR!!!!!                "<<endl;
		
		
	}
	else if(ans1=='C'||ans1=='c')
	{
		cout<<"                                          NICEEE.....CLEVER BOY               "<<endl;
		count++;
	}
	else
	{
		cout<<"                  WRONGG INPUT!!!...your consider don't know the ANSWERRR!    "<<endl;
	}
   
	cout<<"                          ********************************************************"<<endl;
	cout<<"                          ********************************************************"<<endl;
	cout<<"                                                  RIDDLE 2                        "<<endl;
	cout<<"                                                                                  "<<endl;
	cout<<"                                         I'm a piece of silverware                "<<endl;
    cout<<"                                          Although I am not a fork                "<<endl;
    cout<<"                                        But if I'm combined with one              "<<endl;
    cout<<"                                       Then you end up with a spork               "<<endl;
    cout<<"                                                                                  "<<endl;
    cout<<"                          ********************************************************"<<endl;
	cout<<"                          ********************************************************"<<endl;
    cout<<"                                                 YOUR ANSWER                      "<<endl;
    
    cout<<"                                                  A.SPOON                         "<<endl;
    cout<<"                                                  B.KNIFE                         "<<endl;
    cout<<"                                                  C.MUG                           "<<endl;
    cout << "Your Answer: ";
	cin>>ans2;
    
    cout<<"                         ********************************************************"<<endl;
	cout<<"                         ********************************************************"<<endl;
    
 if(ans2=='A'|| ans2=='a')
    {
    	cout<<"                                             NICEEE.CLEVER BOY                     "<<endl;
		count++;
	}
	else if(ans2=='B'||ans2=='b')
	{
		cout<<"                                             WRONG ANSWERR!!!!!                     "<<endl;
		
		
	}
	else if(ans2=='C'||ans2=='c')
	{
		cout<<"                                             WRONG ANSWERR!!!!!                    "<<endl;
		
	}
	else
	{
		cout<<                         "WRONGG INPUT!...your consider don't know the ANSWER!"<<endl;
	}
	
	cout<<"                         ********************************************************"<<endl;
	cout<<"                         ********************************************************"<<endl;
	cout<<"                                                 RIDDLE 3                        "<<endl;
	cout<<"                                                                                 "<<endl;
	cout<<"                                          This item can be used                  "<<endl;
    cout<<"                                        To see what is right there               "<<endl;
    cout<<"                                         An evil queen used hers                 "<<endl;
    cout<<"                                        To find out who's most fair              "<<endl;
    
    cout<<"                        ********************************************************"<<endl;
	cout<<"                        ********************************************************"<<endl;
    cout<<"                                             YOUR ANSWER                        "<<endl;
    
    cout<<"                                               A.PHONE                           "<<endl;
    cout<<"                                               B.MIRROR                          "<<endl;
    cout<<"                                               C.GPS                             "<<endl;
    
    
    cout << "Your Answer: ";
    cin>>ans3;
    
	
	if(ans3=='A'|| ans3=='a')
    {
    	cout<<"                                     WRONG ANSWERR!!!!!"<<endl;
		
	}
	else if(ans3=='B'||ans3=='b')
	{
		cout<<"                                    NICEEE.....CLEVER BOY"<<endl;
		count++;
		
	}
	else if(ans3=='C'||ans3=='c')
	{
		cout<<"                                             WRONG ANSWERR!!!!!           "<<endl;
		
	}
	else
	{
		cout<<"                        WRONGG INPUT!.your consider don't know the ANSWER!"<<endl;
	}
	
	if(count>2 || count==2)
	{
		cout<<"                                   YOU GOT THE KEY ! YOU CAN ESCAPE NOW !      "<<endl;
		cout<<"                       ********************************************************"<<endl;
	    cout<<"                       ********************************************************"<<endl;
		
		menuWin();
    }
	else
	{
		cout<<"                                         YOU FAILED TO ESCAPE !                "<<endl;
		cout<<"                       ********************************************************"<<endl;
	    cout<<"                       ********************************************************"<<endl;
//		//pointer to start menu
  	menuLose(); 
	}
		
}

//--------------GAME 2'S CHALLENGE ----------------//
void Game::g2(){
	
	
			cout<<"             *****  Congratulaion ! You pass the first room! But,here is the real challenge   *****             "<<endl;
	cout <<"||                                   WELCOME TO ROOM 2                                                      ||"<<endl;
	cout <<"||           Now, you are in room number 2.The challenge will be more danger ! Please be careful !          ||"<<endl;
	cout <<"||            So,to escape from this room, you will be given 1 from 5 items in the list below               ||"<< endl;
	cout <<"||            We do not provide the full word of the item.You need to guess by yourself                     ||"<< endl;
	cout <<"||                In order to get the item,you need to guess which item that you will get.                  ||"<< endl;

	cout <<"                             __________________________________________                                 "<<endl
	     <<"                            |             1._oo_                       |                                "<<endl
	     <<"                            |             2.m_t_l                      |                                "<<endl
	     <<"                            |             3.p_p_rcli_                  |                                "<<endl
	     <<"                            |             4.c_ow_ar                    |                                "<<endl
	     <<"                            |             5.sc_sso_s                   |                                "<<endl
	     <<"                            |__________________________________________|                                "<<endl<<endl<<endl;
	     
    string words[] = { "wood", "metal", "paperclip", "crowbar", "scissors" };
    int numWords = sizeof(words) / sizeof(words[0]);

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random index to select a word from the array
    int randomIndex = rand() % numWords;
    string wordToGuess = words[randomIndex];

    int wordLength = wordToGuess.length();
    string guessedLetters(wordLength, '_');

    int maxAttempts = 6;
    int attempts = 0;
    bool isWordGuessed = false;

    while (attempts < maxAttempts && !isWordGuessed) {
        cout << "Item to guess: " << guessedLetters << endl;
        cout << "Attempts remaining: " << maxAttempts - attempts << endl;

        char guess;
        cout << "Enter your guess: ";
        cin >> guess;

        // Check if the guessed letter is in the word
        bool isLetterFound = false;
        for (int i = 0; i < wordLength; ++i) {
            if (wordToGuess[i] == guess) {
                guessedLetters[i] = guess;
                isLetterFound = true;
            }
        }

        if (isLetterFound) {
            cout << "Correct guess!" << endl;
        } else {
            cout << "Incorrect guess!" << endl;
            ++attempts;
        }

        // Check if the word has been fully guessed
        if (guessedLetters == wordToGuess) {
            isWordGuessed = true;
        }

        cout << endl;
    }

    if (isWordGuessed) {
        cout << "Congratulations! You have got "<<wordToGuess<<" Now use it to escape from this room" << endl;
        menuWin();
    } else {
        cout << "YOU FAILED TO GET THE ITEM ! THE DOOR IS LOCKED.THIS ROOM WILL EXPLODE ANYTIME !!!"  << endl;
        menuLose();
    }
}

//--------------GAME 3'S CHALLENGE ----------------//
void Game::g3(){
	
	
	 int attempt =3;
 char x[5] ={} , y[5]= {'C' ,'E', 'D' ,'B' , 'A'}; 
 bool complete =false; 
  
  cout<<"*****  Congratulaion ! You have pass two room ! But,here is the real challenge   *****"<<endl<<endl;
 cout<<"||                        WELCOME TO ROOM 3                                                             ||" <<endl;
 cout<<"|| In this challenge You will be provided with 5 letters that consists of  <|A | B | C | D |E |>        ||" <<endl; 
 cout<<"|| Each letter has their own value                                                                      ||"<<endl; 
 cout<<"|| Your task is to key in the letters given in increasing order.                                        ||" <<endl; 
 cout<<"|| The arrangment is the password to open the door of this room.                                        ||" <<endl; 
 cout<<"|| Note that you only have three chances                                                                ||" <<endl; 
 cout<<"|| Don't worry ,We will provide you some clues for references                                           ||" <<endl; 
 cout<<"|| Good luck                                                                                            ||"<<endl<<endl<<endl; 
  
 cout<<"                           ________________________________________________________________ " <<endl;
 cout<<"                           |     CLUE 1:  given: C<D<A                                     |" <<endl; 
 cout<<"                           |     CLUE 2:  given: D + B < A                                 |" <<endl; 
 cout<<"                           |     CLUE 3:  given: 1/2B = D                                  |" <<endl; 
 cout<<"                           |     CLUE 4: E + A > C + A                                     |" <<endl; 
 cout<<"                           |     CLUE 5: square root of E is smaller than square root of D |" <<endl
     <<"                           _______________________________________________________________" <<endl; 
 cout<<endl; 
  
  
 cout<<"Key in the password (letter by letter) : " <<endl; 
 cout<<"[]NOTE]: please use Capital letter!." <<endl; 
  
do{ 
  bool game =true;
  for (int i=0 ; i<5 ; i++){ 
  cout<<"term " <<i+1 <<":"; 
  cin>> x[i]; 
 } 
  
 for(int j=0; j<5 ; j++){ 
   
  if (x[j] != y[j]) 
  { 
    game =false ; 
    
     } 
} 
    if (game){ 
 
    cout<<"THE DOOR IS UNLOCKED !" <<endl; 
    complete =true; 
    } 
     else{
	 
	 attempt--;
	 if (attempt ==0){
	 	break;
	 }
	 else { 
    cout<<"Wrong Password .... TRY AGAIN " <<endl;
	cout<<"remaining attempt :" <<attempt <<endl; 
 }
}
  }while (complete ==false); 
  
  
  if (complete ==true){
  	
   menuWin();
}
else {
	cout<<"YOU HAVE EXCEED THE TRY LIMIT !THE ROOM WILL EXPLODE !" 	<<endl;
	menuLose();
}

}



//------------------   GAME 4'S CHALLENGE------------------//
//------------------                     -------------------//

///-------------set to get random number ------------------//
int getRandomNumber(){ 
 return rand() %7 + 1 ; 
} 
 
 
//------------ Function to get the value of a card -----------------
int getCardValue(int card) { 
   return card; 
    } 
 

void Game::g4(){


	
 cout<<"        *****  Congratulaion ! You have pass three room ! Your performance is not bad !   *****           "<<endl<<endl;
 cout<<"||                        WELCOME TO ROOM 4                                                                   ||" <<endl;
 cout<<"|| In this room, You need to play 'BLACK JACK GAME' with our cute robot named 'CHIKA'                         ||" <<endl; 
 cout<<"|| She is the best robot we have programmed                                                                   ||"<<endl; 
 cout<<"|| Do you know how to play 'BLACK JACK' ? Press Y if yes / N if no                                            ||" <<endl; 
 char ans;
cin >>ans;
if(ans =='Y' || ans == 'y'){
 cout<<"|| Win against Chika and she will help you to break the security of this room's door                          ||" <<endl; 
 cout<<"|| However,if you lose,she will kill you !                                                                    ||" <<endl; 
 cout<<"|| Good luck  !   ||                                                                                          ||" <<endl;
                                                                             
}
else{
     cout<<"~this game is a card type game . you will be given 2 card in every rounds~                      " <<endl; 
     cout<<"~the 1st card will not revealed untill certain condition, while the others card will be revealed~" <<endl; 
     cout<<"~your goal is to estimate the sum of your card to the particular value~ " <<endl; 
     cout<<"~not to mention , you can ask for additional card in case you want to~" <<endl; 
     cout<<"~the first card will be revealed when both player refuse to draw a card~" <<endl; 
     cout<<"~the process of calcualtion will proceed ~" <<endl; 
     cout<<"~The player who get the exact targeted value or get closest to it will win~" <<endl; 
     cout<<"~But....if your score is higher than targeted value you will be lose automatically~" <<endl; 
     cout<<"~if both's score got higher ..it will consider as draw same if both player got same score~" <<endl<<endl<<endl; 
 cout<<"|| Win against Chika and she will help you to break the security of this room's door                          ||" <<endl; 
 cout<<"|| However,if you lose,she will kill you !                                                                    ||" <<endl; 
 cout<<"|| Good luck  !                                                                                               ||" <<endl;  

}
	
		 unsigned int seed = time(0);  // Seed the random number generator 
    srand (seed); 
     
 
    int playerScore ,Ppoint = 0; 
    int computerScore ,Cpoint= 0; 
    int round = 1; 
    
 
    while (round <= 3) { 
        cout << "Round " << round << endl; 
 
        int playerCard1 = getRandomNumber(); 
        int playerCard2 = getRandomNumber(); 
        int computerCard1 = getRandomNumber(); 
        int computerCard2 = getRandomNumber(); 
 
        playerScore = getCardValue(playerCard1) + getCardValue(playerCard2); 
        computerScore = getCardValue(computerCard1) + getCardValue(computerCard2); 
 
        cout << "Player: " << playerCard1 << ", " << "?" << " (Score: " << "?" << ")" << endl; 
        cout << "Chika: " << computerCard1 << ", " << "?" << " (Score: " << "?" << ")" << endl; 
 
        if (playerScore == 18) { 
            cout << "Player wins!" << endl; 
            round++; 
            Ppoint++;

        } else if (computerScore == 18) { 
            cout << "Chika wins!" << endl; 
            round++; 
            Cpoint++;

        } 
 
        cout << "Player's turn. Do you want to draw another card? (y/n) "; 
        char choice; 
        cin >> choice; 
       
         
 
        if (choice == 'y' || choice == 'Y') { 
          
         do{ 
    cout<<endl; 
             int newCard = getRandomNumber(); 
              playerScore += newCard; 
              cout << "Player drew: " << newCard << " (Score: " << "?" << ")" << endl; 
                 cout << "Player's turn. Do you want to draw another card? (y/n) " ; 
                  
                 cin >> choice; 
                  
               
        }while(choice=='y' || choice=='y'); 
    } 
 
        // Computer's turn 
        while (computerScore < 18) { 
         if ((computerScore >=15) && (computerScore <=18)) break; 
         cout<<endl; 
            int newCard = getRandomNumber(); 
            computerScore += newCard; 
            cout << "Chika drew: " << newCard << " (Score: " << "?" << ")" << endl; 
        } 
         
//        showing the value of the card for both players: 
  cout<<"YOUR SCORE : " <<playerScore <<endl; 
  cout<<"CHIKA'S SCORE' : " <<computerScore <<endl; 
   
 
       if ((playerScore >18 && computerScore>18) || (playerScore == computerScore))  
    { 
    cout<<"IT'S A DRAW !!" <<endl; 
       } 
        else if (playerScore <= 18 && (computerScore > 18 || computerScore < playerScore)) { 
            cout << "Player wins!" << endl; 
            
            Ppoint++;
            round++;

			 cout<<endl;
			 
        } else { 
            cout << "CHIKA wins! " <<endl ; 
            Cpoint++; 
            round++; 

            cout<<endl;
        } 
    } 
   if (Ppoint > Cpoint) {
   cout <<"YOU WIN !!!CHIKA WILL HELP YOU TO ESCAPE FROM THIS ROOM !!!"<<endl;
      escapefull();
	  menuLose();
      }
      
    else {
	
    cout <<"YOU LOSE !!! SAY GOODBYE TO THE WORLD :("<<endl;
    menuLose();}
}




#endif
