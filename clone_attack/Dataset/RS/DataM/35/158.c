int main () {
    int vbMEr1j3oShY;
    vbMEr1j3oShY = 0;
    int xi4gXTe, Fl8InAb;
    int sz [9] [9];
    int jqbzWu2xPr;
    int qsLqQcPH0Dxp;
    scanf ("%d,%d", &jqbzWu2xPr, &qsLqQcPH0Dxp);
    {
        xi4gXTe = 0;
        while (xi4gXTe < jqbzWu2xPr) {
            {
                Fl8InAb = 0;
                while (Fl8InAb < qsLqQcPH0Dxp) {
                    scanf ("%d", &sz[xi4gXTe][Fl8InAb]);
                    Fl8InAb = Fl8InAb +1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            xi4gXTe = xi4gXTe + 1;
        };
    }
    {
        xi4gXTe = 0;
        while (xi4gXTe < jqbzWu2xPr) {
            int rRcUmdHEn8;
            int AGJaRM = 0;
            int oPKA8TGtZg;
            oPKA8TGtZg = 0;
            int GCfkzMs08iB;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            GCfkzMs08iB = sz[xi4gXTe][0];
            {
                Fl8InAb = 0;
                while (qsLqQcPH0Dxp - (487 - 486) > Fl8InAb) {
                    if (sz[xi4gXTe][Fl8InAb +1] > sz[xi4gXTe][Fl8InAb]) {
                        oPKA8TGtZg = Fl8InAb +1;
                        GCfkzMs08iB = sz[xi4gXTe][Fl8InAb +1];
                    }
                    Fl8InAb = Fl8InAb +1;
                };
            }
            {
                rRcUmdHEn8 = 0;
                while (rRcUmdHEn8 < jqbzWu2xPr) {
                    if (sz[rRcUmdHEn8][oPKA8TGtZg] >= GCfkzMs08iB)
                        AGJaRM = AGJaRM +1;
                    rRcUmdHEn8 = rRcUmdHEn8 + 1;
                };
            }
            if (AGJaRM == jqbzWu2xPr) {
                printf ("%d+%d", xi4gXTe, oPKA8TGtZg);
                break;
            }
            xi4gXTe = xi4gXTe + 1;
            vbMEr1j3oShY++;
        };
    }
    if (vbMEr1j3oShY == jqbzWu2xPr)
        ;
    return 0;
}

