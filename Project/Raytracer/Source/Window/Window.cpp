//
//  Window.cpp
//  Raytracer
//
//  Created by Gracjan Jeżewski on 07/03/2021.
//  Copyright © 2021 Gracjan Jeżewski. All rights reserved.
//

#include "Window.hpp"

Window::Window(sf::Vector2u *resolution) {
    window_Name = "Raytracer";
    settings.reset(new sf::ContextSettings);
    render_Window.reset(new sf::RenderWindow);
    event.reset(new sf::Event);
    
    settings->antialiasingLevel = 0;
    render_Window->create(sf::VideoMode(resolution->x, resolution->y), window_Name, sf::Style::Default, *settings);
    render_Window->setFramerateLimit(60);
    
    std::cout << "[C] Window: Created" << std::endl;
}

Window::~Window() {
    std::cout << "[D] Window: Terminated" << std::endl;
}

void Window::Display(sf::Sprite* drawable_Sprite) {
    while (render_Window->isOpen()) {
        while (render_Window->pollEvent(*event)) {
            if (event->type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
                render_Window->close();
            }
        }
        
        render_Window->clear(sf::Color(10, 10, 10));
        render_Window->draw(*drawable_Sprite);
        render_Window->display();
        
    }
}

bool Window::is_Open() {
    return render_Window->isOpen();
}

