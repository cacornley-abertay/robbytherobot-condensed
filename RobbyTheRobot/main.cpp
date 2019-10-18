// Includes
#include <iostream>
#include "GraphicsManager.h"	

//Ponter reference to classes
Room* room;
Robot* robby;
GraphicsManager* picture;

int main()
{
	room = new Room(5);								// Create a room for Robby to navigate
	robby = new Robot();							// Create Robby
	picture = new GraphicsManager(room, robby);		// Create a GraphicsManager to draw everything

	// Speed of the render delay in milliseconds
	picture->setDrawDelay(1000);

	/*
		START OF OUR CODE
	*/

	// Code here

	/*
		END OF OUR CODE
	*/

	std::cout << "End of Instructions";
	system("Pause");
}