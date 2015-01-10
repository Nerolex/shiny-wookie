//
//  main.cpp
//  CppTest
//
//  Created by Michael Glasder on 07.01.15.
//  Copyright (c) 2015 Michael Glasder. All rights reserved.
//

#include <iostream>
#include "Globals.h"
#include "GameMap.h"
#include "GameObject.h"

bool keys[] = {false, false, false, false, false};
enum KEYS{UP, DOWN, RIGHT, LEFT, USE};

int main(int argc, const char * argv[])
{
    GameMap * mp_myFirstMap = new GameMap();
    
    //Zeichne obere und untere Wand
    for (int i=0; i<mp_myFirstMap->getCols(); i++) {
        mp_myFirstMap->getObjectAt(i, 0)->setType('#'); //Oben
        mp_myFirstMap->getObjectAt(i, mp_myFirstMap->getRows()-1)->setType('#'); //Oben
    }
    
    //Zeichne seitliche Waende
    for (int j=1; j<mp_myFirstMap->getRows(); j++) {
        mp_myFirstMap->getObjectAt(0, j)->setType('#'); //Linke
        mp_myFirstMap->getObjectAt(mp_myFirstMap->getCols()-1, j)->setType('#'); //Rechte Wand
    }

    
    mp_myFirstMap->print();
    
    return 0;
}
