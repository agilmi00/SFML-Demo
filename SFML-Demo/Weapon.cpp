//
//  Weapon.cpp
//  SFML-Demo
//
//  Created by Adrián Gil Miranda on 15/10/2020.
//  Copyright © 2020 Adrián Gil Miranda. All rights reserved.
//

#include "Weapon.hpp"

Weapon::Weapon() {
    
}
Weapon::~Weapon(){
    
}

void Weapon::init(std::string textureName, sf::Vector2f position, float _speed) {
    m_speed = _speed;
    m_position = position;
    
    m_texture.loadFromFile(textureName.c_str());
    
    m_sprite.setTexture(m_texture);
    m_sprite.setPosition(m_position);
    m_sprite.setOrigin(m_texture.getSize().x / 2, m_texture.getSize().y / 2);
    
}

void Weapon::update(float dt) {
    m_sprite.move(m_speed * dt, 0);
}

sf::Sprite Weapon::getSprite() {
    return m_sprite;
}
