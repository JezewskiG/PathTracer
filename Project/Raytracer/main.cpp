//
//  main.cpp
//  Raytracer
//
//  Created by Gracjan Jeżewski on 07/03/2021.
//  Copyright © 2021 Gracjan Jeżewski. All rights reserved.
//

#include "App.hpp"
#include "main.h"

int main()
{
    App Raytracer(1534,1534); //maximum height for my resolution 1534
    Raytracer.Run();

    return 0;
}

// TODO: Make the window open before renderer finishes initial render, so that the window is already visible when rendering.

// TODO: Cube class with intersection.

// TODO: Basic shadows using calculated normals

// TODO: (IDEA) Make volumes where intersection function, is simply random generator where probability is dependent on density, the denser the volume, the more particles are hit and so it will maybe look like clouds.

// TODO: https://medium.com/csharp-architects/whats-faster-in-c-a-struct-or-a-class-99e4761a7b76
// TODO: Maybe use struct somewhere where class it not really needed?

// TODO: Keep record of recent collisions to optimise intersection code
