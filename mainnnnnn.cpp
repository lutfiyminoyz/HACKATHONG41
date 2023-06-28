#include<iostream>
#include "LinkedListt.h"
#include "Gamee.h"

using namespace std;

//MAIN
int main()
{
    int c, l = 0;
    LinkedList<Game> gameList; //identify <T>

//---------ADDING/APPEND THE GAMES ------------//

    Game game1(1);
    gameList.appendNode(game1);
    Game game2(2);
    gameList.appendNode(game2);
    Game game3(3);
    gameList.appendNode(game3);
    Game game4(4);
    gameList.appendNode(game4);


//------------start the game-----------------//

    intro();
    StartMenu();

    cin >> c; //fixed choice 

    int n = 0;
    while (n < 10) //avoid spamming 
    {
    	
//---------move to the linkedlist@start game ----------//
        if (c == 1) 
        {
//        	system("CLS");
//      	       cout << "\n\n *";
//    	for(int a=1;a<20;a++) 
//		{
//			Sleep(200);
//			cout << "*";
//		}
//		system("CLS");
        	
            gameList.accessNode();
            
      
        
		}
		
		//--------reboot the game to start from first -------//
        else if (c == 2)
        {
//        	system("CLS");
//        	cout<< "\n\n *";
//    	for(int a=1;a<20;a++) // Change 'a<?' to how many * you want
//		{
//			Sleep(200);
//			cout << "*";
//		}
//		system("CLS");
//        	
            gameList.restartNode();
            
        }
        
        //----------CONTINUE THE GAME RELOADED----------//
        else if (c == 3)
        {
//        	system("CLS");
//        	
//    	    cout << "\n\n *";
//   		 for(int a=1;a<20;a++) // Change 'a<?' to how many * you want
//		{
//			Sleep(200);
//			cout << "*";
//		}
//		system("CLS");
//   		// cin.sync(); cin.ignore(); //buat loading screen
        
			
    //--------------- LOAD CURRENT GAME FROM FILE---------------//
            string line;
            int loadedGameNum;
            ifstream myfile("Load.txt");
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    cout << line << '\n';
                }
                myfile.close();
                loadedGameNum = stoi(line);
                Game loadedGame(loadedGameNum);
                gameList.LoadNode(loadedGame);
                   
            }
            //if no file detected 
            else
            {
                cout << "Unable to open file";
            }
        }
        
        //----------QUIT GAME----------------//
        else if (c == 4)
        {
            // Quit game
            exit(0);
        }
        else
        //------INVALID CHOICE ---------------//
        {
            cout << "INVALID..AGAIN" << endl;
        }
        n++;
        cin >> c;
    }

    return 0;
}

