//
//  Hero.cpp
//  SFML-Demo
//
//  Created by Adrián Gil Miranda on 13/10/2020.
//  Copyright © 2020 Adrián Gil Miranda. All rights reserved.
//

#include "Hero.hpp"

Hero::Hero() {
    
}
Hero::~Hero() {
    
}

void Hero::init(std::string textureName, sf::Vector2f position, float mass) {

    m_position = position;
    m_mass = mass;
    
    m_grounded = false;
//    load a texture
//    c_str() returns a pointer to an array that
//    contains a null-terminated sequence of characters (that is, a C string) representing
//    the current value of the string object
    m_texture.loadFromFile(textureName.c_str());
//    create Sprite and Attach a Texture
    m_sprite.setTexture(m_texture);
    m_sprite.setPosition(m_position);
    m_sprite.setOrigin(m_texture.getSize().x / 2, m_texture.getSize().y / 2);
}

void Hero::update(float dt) {
    m_force -= m_mass * m_gravity * dt;
    m_position.y -= m_force* dt;
    m_sprite.setPosition(m_position);
    
    if(m_position.y >= 768 * 0.75f) {
        m_position.y = 768 * 0.75f;
        m_force = 0;
        m_grounded = true;
        jumpCount = 0;
        
    }
}
void Hero::jump(float velocity) {
    if (jumpCount < 2) {
        jumpCount++;
        
        m_velocity = velocity;
        m_grounded = false;
    }
}
sf::Sprite Hero::getSprite() {
    return m_sprite;
}
