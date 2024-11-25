int IkOl4p;

void  w9O8GlY (int *MOR41EZP) {
    int eFnkMT;
    for (int EGX90A = IkOl4p -(708 - 707);
    EGX90A >= (569 - 569); EGX90A--) {
        for (int c6jMIG = (847 - 847);
        c6jMIG < EGX90A; c6jMIG++) {
            if (*(MOR41EZP +c6jMIG) < *(MOR41EZP +c6jMIG + (537 - 536))) {
                eFnkMT = *(MOR41EZP +c6jMIG);
                *(MOR41EZP +c6jMIG) = *(MOR41EZP +c6jMIG + (529 - 528));
                *(MOR41EZP +c6jMIG + (930 - 929)) = eFnkMT;
            }
        }
    }
}

void  Gfl4uIAb52 (int *MOR41EZP) {
    int ZpxXcMQLuUy;
    for (int EGX90A = (664 - 664);
    EGX90A < IkOl4p -(488 - 487); EGX90A++)
        *(MOR41EZP +EGX90A) = *(MOR41EZP +EGX90A+(232 - 231));
    ZpxXcMQLuUy = *MOR41EZP;
    *(MOR41EZP +IkOl4p-1) = ZpxXcMQLuUy;
}

int main () {
    int sRhwZ3rXQ, lfEModnb;
    int GZYcVB3Cq8yL [(1145 - 145)], jBX0gjb4nw3f [(1304 - 304)];
    for (;;) {
        w9O8GlY (GZYcVB3Cq8yL);
        w9O8GlY (jBX0gjb4nw3f);
        scanf ("%d", &IkOl4p);
        if (IkOl4p == (74 - 74))
            break;
        for (int EGX90A = (309 - 309);
        EGX90A < IkOl4p; EGX90A++)
            scanf ("%d", &GZYcVB3Cq8yL[EGX90A]);
        for (int EGX90A = (651 - 651);
        EGX90A < IkOl4p; EGX90A++)
            scanf ("%d", &jBX0gjb4nw3f[EGX90A]);
        lfEModnb = -IkOl4p;
        for (int EGX90A = (138 - 138);
        EGX90A < IkOl4p; EGX90A++) {
            Gfl4uIAb52 (GZYcVB3Cq8yL);
            sRhwZ3rXQ = (832 - 832);
            for (int c6jMIG = (182 - 182);
            c6jMIG < IkOl4p; c6jMIG++) {
                if (GZYcVB3Cq8yL[c6jMIG] > jBX0gjb4nw3f[c6jMIG])
                    sRhwZ3rXQ++;
                else if (GZYcVB3Cq8yL[c6jMIG] < jBX0gjb4nw3f[c6jMIG])
                    sRhwZ3rXQ--;
            }
            lfEModnb = (lfEModnb > sRhwZ3rXQ) ? lfEModnb : sRhwZ3rXQ;
        }
        printf ("%d\n", (802 - 602) * lfEModnb);
    }
    return (722 - 722);
}

