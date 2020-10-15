//
//  Weapon.hpp
//  SFML-Demo
//
//  Created by Adrián Gil Miranda on 15/10/2020.
//  Copyright © 2020 Adrián Gil Miranda. All rights reserved.
//

#ifndef Weapon_hpp
#define Weapon_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>

#endif /* Weapon_hpp */

class Weapon {
public:
    Weapon();
    ~Weapon();
    
    void init(std::string textureName, sf::Vector2f position, float _speed);
    
    void update(float dt);
    sf::Sprite getSprite();
    
private:
    sf::Texture m_texture;
    sf::Sprite m_sprite;
    sf::Vector2f m_position;
    float m_speed;
};
