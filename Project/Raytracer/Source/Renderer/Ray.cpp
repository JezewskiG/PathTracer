//
//  Ray.cpp
//  Raytracer
//
//  Created by Gracjan Jeżewski on 10/03/2021.
//  Copyright © 2021 Gracjan Jeżewski. All rights reserved.
//

#include "Ray.hpp"
#include <iostream>
#include "Vectors.hpp"

// MARK: Constructors
Ray::Ray() {
    //No need to pre-initialise, vect3D default constructor sets each vect3D to be 0,0,0
}

Ray::Ray(const vect3D& origin, const vect3D& destination) : orig(origin), dest(destination) {
   // TODO: Consider making point class to differentiate between vectors and just points
}

// MARK: Private data access
vect3D Ray::getOrigin() const {
    return orig;
}

vect3D Ray::getDest() const {
    return dest;
}

// MARK: Utility methods
vect3D Ray::pos(double time) const {
    vect3D toReturn;
    vect3D temp = dest;
    temp*=time;
    toReturn+=temp;
    return toReturn;
    //MARK: Initial idea - Ax+B where A is destination, x is time, B is origin, so it goes towards dest with time t, i can multiply dest by constant thanks to operator.
    //FIXME: Proper operators to handle it in one line
}

// MARK: Debug
void Ray::printInfo() {
    std::cout << "\nRAY Origin: "<< orig.x()<< " "<< orig.y()<< " "<< orig.z();
    std::cout << " Dest: "<< dest.x()<< " "<< dest.y()<< " "<< dest.z()<<"\n";
    
}
