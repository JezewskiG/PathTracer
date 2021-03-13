//
//  Window.hpp
//  Raytracer
//
//  Created by Gracjan Jeżewski on 07/03/2021.
//  Copyright © 2021 Gracjan Jeżewski. All rights reserved.
//

#ifndef Window_hpp
#define Window_hpp

#include "main.h"

class Window {
public:
    
    // MARK: Constructors & Destructor
    
    Window(const uint &width, const uint &height);
    ~Window();
    
    // MARK: Utilities
    
    bool isOpen();
    sf::Vector2u getResolution();
    void Display(const sf::Sprite &drawable_Sprite);

private:
    std::unique_ptr<sf::Event> _event;
    std::unique_ptr<sf::VideoMode> _videoMode;
    std::unique_ptr<sf::RenderWindow> _renderWindow;
};

#endif /* Window_hpp */
