//
//  GameObject.cpp
//  CppTest
//
//  Created by Michael Glasder on 07.01.15.
//  Copyright (c) 2015 Michael Glasder. All rights reserved.
//

#include <stdio.h>
#include "GameObject.h"

GameObject::GameObject()
{
    m_ID = 0;
    m_alive = true;
    m_collidable = true;
    
    m_x = 0;
    m_y = 0;
    
    m_type = '0';
}

GameObject::GameObject(unsigned int e_x, unsigned int e_y)
{
    GameObject::m_x = e_x;
    GameObject::m_y = e_y;
    
    m_ID = 0;
    m_alive = true;
    m_collidable = true;
    
    m_type = '0';
}

GameObject::GameObject(const GameObject &e_object)
{
    this->m_ID = e_object.getID();
    this->m_alive = e_object.isAlive();
    this->m_collidable = e_object.isCollidable();
    this->m_x = e_object.getX();
    this->m_y = e_object.getY();
    this->m_type = e_object.getType();
}


void GameObject::init(unsigned int e_x, unsigned int e_y)
{
    GameObject::m_x = e_x;
    GameObject::m_y = e_y;
}

GameObject::~GameObject()
{
   
}

