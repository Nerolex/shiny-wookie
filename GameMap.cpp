//
//  GameMap.cpp
//  CppTest
//
//  Created by Michael Glasder on 07.01.15.
//  Copyright (c) 2015 Michael Glasder. All rights reserved.
//

#include <iostream>
#include "Globals.h"
#include "GameMap.h"
#include "GameObject.h"

GameMap::GameMap()
{
    GameMap::mp_map = new GameObject[m_ROWS*m_COLS]();
}

GameMap::~GameMap()
{
    delete [] GameMap::mp_map;
    GameMap::mp_map = 0;
}

void GameMap::print()
{
    for (unsigned int i=0; i<m_COLS; i++) {
        std::cout << std::endl;
        for (unsigned int j=0; j<m_ROWS; j++) {
            std::cout << this->getObjectAt(j, i)->getType() << ' ';
        }
    }
    std::cout << std::endl;
}


