//
//  funcTeoNums.h
//  LFSR_2015
//
//  Created by Alexander Arturo Baylon Ibanez on 5/28/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#ifndef __LFSR_2015__funcTeoNums__
#define __LFSR_2015__funcTeoNums__

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <unistd.h>
#include <math.h>
#include <NTL/ZZ.h>
#include <stdint.h>

using namespace std;
using namespace NTL;


template <class var>
string a_binario(var n)
{
    string num;
    // Mientras el numero no sea 0 al dividirlo entre 2( >>1 ).
    do
    {   // agregamos a la cadena el bit menos significativo de x con (x&1);
        num += '0' + (n & 1);
    } while (n >>= 1);
    reverse(num.begin(), num.end());
    return num;
}

string corregirCadBits(unsigned int,string);

template <class var>
var a_entero(string cad)
{
    var resultado_tmp;
    // Sacamos cada bit de la cadena principal y hacemos una comparacion(or) con "resultado" que primeramente es 0;
    for (char c : cad){
        // Haciendo un shift hacia la izquierda guardara cada bit en la variable.
        //cout << resultado << endl;
        resultado_tmp = resultado_tmp << 1;
        resultado_tmp = resultado_tmp | (c - '0');
    }
    return resultado_tmp;
}

template <class var>
var mod(var a,var b)
{
    if (a < b) return a;
    return (a>0) ? a - ((a/b) * b) : -1*(((a/b)-1) * b) + a;
}

template <class var,class var1,class var2>
var2 mod_mult(var a,var1 b)
{
    if (a < b) return a;
    return (a>0) ? a - ((a/b) * b) : -1*(((a/b)-1) * b) + a;
}

unsigned int getRandMod(unsigned long m);




#endif /* defined(__LFSR_2015__funcTeoNums__) */
