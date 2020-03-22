//
//  main.cpp
//  LFSR_2015
//
//  Created by Alexander Arturo Baylon Ibanez on 4/13/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "lfsr.h"

int main(int argc, const char * argv[]) {
    /*
    FILE *fp = fopen("/dev/random", "r");
    
    if (!fp) {
        perror("randgetter");
        exit(-1);
    }
    
    //unsigned long long value = 0;
    uint64_t value = 0;
    cout << "tam. val.: " << sizeof(value) << endl;
    int i;
    for (i=0; i < sizeof(value) ; i++) {
        value <<= 8;
        //cout << "val. shift: " << value << endl;
        value |= fgetc(fp);
        cout << "val.: " << value << endl;
    }
    fclose(fp);
    cout << value << endl;
    
    return 0;
     */
    LFSR prueba(1024);
    /*
    for (int i=0; i < 100; i++) {
        prueba.nuevoNum(128);
        cout << prueba.getNum() << endl;
    }
     */
    ZZ tmp = prueba.getNum();
    cout << tmp << endl;
    cout << NumBits(tmp) << endl;
    
    cout << (tmp&1) << endl;
}
