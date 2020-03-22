//
//  funcTeoNums.cpp
//  LFSR_2015
//
//  Created by Alexander Arturo Baylon Ibanez on 5/28/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "funcTeoNums.h"


string corregirCadBits(unsigned int b,string c)
{
    for (unsigned long i=c.size();i > b ; i--) {
        c.erase(c.begin());
    }
    return c;
}


