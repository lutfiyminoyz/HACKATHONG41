#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include"Gamee.h"
#include<iostream>
using namespace std;


template <class T>
class LinkedList
{
private:
    struct ListNode
    {
        T value;
        struct ListNode *next; //pointer that  point to next list 
    };

    ListNode *head;
    ListNode *toward;

public:
	//constructor
    LinkedList()
    {
        head = nullptr;
        toward = nullptr; // Initialize toward pointer
    }

    ~LinkedList();

// ------------LINKEDLIST OPERATOR ----------------//
    void appendNode(T);
    void accessNode(); //starting the game 
    void restartNode();
    void LoadNode(T);
};


//---------APPEND GAME TO THE LINKEDLIST----------------//
template <class T>
void LinkedList<T>::appendNode(T newValue)
{
    ListNode *newNode;
    ListNode *nodePtr;

    newNode = new ListNode;
    newNode->value = newValue;
    newNode->next = nullptr;

    if (!head)
    {
        head = newNode;
        toward = head; // Initialize toward pointer to head
    }
    else
    {
        nodePtr = head;
        while (nodePtr->next)
        {
            nodePtr = nodePtr->next;
        }

        nodePtr->next = newNode;
    }
}

//-------------GO THROUGH THE GAME -----------------//
template <class T>
void LinkedList<T>::accessNode()
{
    if (toward == nullptr)
    {
        cout << "No game to access" << endl;
    }
    else
    {
        toward->value.DisplayGame();
        toward=toward->next;
    }
}

template <class T>
LinkedList<T>::~LinkedList() //destructor
{
    ListNode *nodePtr;
    ListNode *nextNode;

    nodePtr = head;
    while (nodePtr != nullptr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

template <class T>
void LinkedList<T>::LoadNode(T newValue)
{
   //initialize toward to head
   
    toward = head; // Start searching from the head

    //tracing the current level :  while not same with file 
    while (toward != nullptr && toward->value.getGameNum() != newValue.getGameNum())
    {
        toward = toward->next;
    }

//start to load the game 
    if (toward != nullptr)
    {
        toward->value = newValue;
        toward->value.DisplayGame();
        toward = toward->next; 
    }
    else
    {
    	//when there is no saved data 
        cout << "Game not found" << endl;
    }
}

template <class T>
void LinkedList<T>::restartNode()
{
	
    toward = head;
    if (toward != nullptr)
    {
        toward->value.DisplayGame();
        toward=toward->next;
    }
}

#endif
