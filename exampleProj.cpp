/*
    Mite Engine 1 Example Project
    by Mite Productions

    Call miteEngine1Start to start the program
    Example project textures from our Backrooms First Contact game

    Textures are saved in a .ppm format. Follow 3DSage's raycaster tutorial part 2 to export an image to a .ppm

    Check map01.txt in the Maps folder to edit the map's layout
    Textures in slots 1, 2, 3 and 6 will be a solid wall
    Textures in slots 4 and 5 will be doors
    0 means no wall

    Textures should be 32x32 in size except for lost.ppm, sky.ppm, Title.ppm, won.ppm and TexAtlas.ppm.
    All of the mentioned textures should be the same resolution as the game window except for TexAtlas.ppm

    TexAtlas.ppm should be all of the wall textures laid out like this:

        Tex1
        Tex2
        Tex3

    etc

    Required files:
    MinGW64 (install through MSYS2)
    Fluidsynth x64 (from fluidsynth.org)
    MinGW Freeglut (install through MSYS2)

    Most GLUT headers are contained within the GL folder.

    

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