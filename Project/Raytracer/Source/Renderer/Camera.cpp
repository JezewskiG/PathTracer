//
//  Camera.cpp
//  Raytracer
//
//  Created by Gracjan Jeżewski on 10/03/2021.
//  Copyright © 2021 Gracjan Jeżewski. All rights reserved.
//

#include "Camera.hpp"

Camera::Camera( const vect3D &position, const double &focal, const int &resWidth, const int &resHeight) {
    
    _origin = position;
    _focalLenght = focal;
    _aspectRatio = resWidth / resHeight; //MARK: Aspect to see how height defines width
    
    _projectionHeight = 2.0; //MARK: Height coordinates go from -1,1 so the total length is 2.
    _projectionWidth = _projectionHeight*_aspectRatio; //MARK: Defining the width of coordinate system based on height.
    
    _viewport.push_back( vect3D(_projectionWidth, 0, 0) );
    _viewport.push_back( vect3D(0, _projectionHeight, 0) );
    _viewport.push_back( vect3D(0, 0, _focalLenght) );
    
    _viewport.push_back( vect3D(_origin - _viewport[2] + _viewport[1]/2 - _viewport[0]/2) );
    
    //MARK: Direction vector defining the direction of rendering in X axis (Default = RIGHT)
    //MARK: Direction vector defining the direction of rendering in Y axis (Default = UP).
    //MARK: Direction vector defining the depth (Z coordinate) of the viewport.
    //MARK: FIXED Position vector of LEFT UPPER corner of viewport, starting point of rendering.
}

Ray Camera::prepRay(double x, double y) {
    return Ray(_origin, (_viewport[3] + _viewport[0]*x - _viewport[1]*y));
}
