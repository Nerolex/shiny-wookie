//
//  GameMap.h
//  CppTest
//
//  Created by Michael Glasder on 07.01.15.
//  Copyright (c) 2015 Michael Glasder. All rights reserved.
//
#pragma once

#include <stdio.h>
#include "Globals.h"
#include "GameObject.h"

class GameMap
{
private:
    /*char Map[11][11] = { "##########",
                         "#        #",
                         "#        #",
                         "#        #",
                         "#        #",
                         "#        #",
                         "#        #",
                         "#        #",
                         "#        #",
                         "##########"
                        };
     */
    /*
     Enemy* enemies = new Enemy[rows * cols];
     
     Enemy* getEnemy(size_t row, size_t col)
     {
     return enemies + (row * cols + col);
     }
     */
    const unsigned int m_ROWS = 10;
    const unsigned int m_COLS = 10;
    GameObject* mp_map;
protected:

public:
    GameMap();
    ~GameMap();
    
    void init(); //ToDo : Parameter festlegen
    
    unsigned int getRows() {return m_ROWS;}
    unsigned int getCols() {return m_COLS;}
    
    GameObject* getObjectAt(const unsigned int e_row, const unsigned int e_col)
    {
        return mp_map + (e_row * m_COLS+ e_col);
    }

    void setObjectAt(const unsigned int e_row, const unsigned int e_col, GameObject &e_object)
    {
        if (&e_object != mp_map + (e_row * m_COLS+ e_col))
        {
            *(mp_map + (e_row * m_COLS+ e_col)) = e_object;
        }
    }
    
    void print();
    

};

 
