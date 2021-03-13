//
//  main.cpp
//  Raytracer
//
//  Created by Gracjan Jeżewski on 07/03/2021.
//  Copyright © 2021 Gracjan Jeżewski. All rights reserved.
//

#include "App.hpp"
#include "Ray.hpp"

int main()
{
    App Raytracer(1400,700); //maximum height for my resolution 1534
    Raytracer.Run();
    
    return 0;
}
