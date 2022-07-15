/*
    Mite Engine 1 Example Project
    by Mite Productions

    Call miteEngine1Start to start the program
    Example project is based on

*/

#include "miteengine1.hpp"

int main(int argc, char* argv[])
{
    //Set window dimensions
    windowX = 960;
    windowY = 640;
    //Call the function in the header file to start. 
    //Input args are argc, argv and a string for the window title
    miteEngine1Start(argc, argv, "Example Project using Mite Engine 1");
}