//
//  GameObject.h
//  CppTest
//
//  Created by Michael Glasder on 07.01.15.
//  Copyright (c) 2015 Michael Glasder. All rights reserved.
//
#pragma once

#include <iostream>
#include <algorithm>
#include "Globals.h"


//ToDO: GameObject abstrakte Klasse
class GameObject
{
private:
    unsigned int m_ID;
    bool m_alive;
    bool m_collidable;
    char m_type;
protected:
    unsigned int m_x;
    unsigned int m_y;
public:
    //Constructors
    GameObject();
    GameObject(unsigned int e_x, unsigned int e_y);
    GameObject(const GameObject &e_object);
    ~GameObject();
    
    //Init-Function
    void init(unsigned int e_x, unsigned int e_y);
    
    //Getters and Setters
    int getX() const {return m_x;}
    int getY() const {return m_y;}
    void setX(unsigned int e_x) {GameObject::m_x = e_x;}
    void setY(unsigned int e_y) {GameObject::m_y = e_y;}
    
    int getID() const {return m_ID;}
    void setID(unsigned int e_ID) {GameObject::m_ID = e_ID;}
    
    bool isAlive() const { return m_alive;}
    void setAlive(bool e_alive) {GameObject::m_alive = e_alive;}
    
    bool isCollidable() const { return m_collidable;}
    void setCollidable(bool e_collidable) {GameObject::m_collidable = e_collidable;}
    
    char getType() const {return m_type;}
    void setType(char e_type) {GameObject::m_type = e_type;}
    
    bool checkCollisions (GameObject *e_otherObject) const;
    //void virtual collided(unsigned int e_otherObjectID);
    //bool collidable();
 
    void swap(GameObject &e_otherObject)
    {
        using std::swap;
        
        swap(m_ID, e_otherObject.m_ID);
        swap(m_alive, e_otherObject.m_alive);
        swap(m_x, e_otherObject.m_x);
        swap(m_y, e_otherObject.m_y);
        swap(m_collidable, e_otherObject.m_collidable);
    }
    
    GameObject& operator=(GameObject &e_rhs)
    {
        GameObject tmp(e_rhs);
        GameObject::swap(e_rhs);
        return *this;
    };
       
};