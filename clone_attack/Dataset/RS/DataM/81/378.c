int f (int oZFX1p [] [(856 - 851)], int Hh4YKJdrUmD, int TTYz6vC) {
    if ((191 - 187) < TTYz6vC || (554 - 550) < Hh4YKJdrUmD)
        return ((992 - 992));
    else
        return ((814 - 813));
}

void  main () {
    int oZFX1p [(158 - 153)] [(384 - 379)];
    int MiBUZvL3KcEV;
    int gLFQWykNDEb;
    int Hh4YKJdrUmD;
    int TTYz6vC;
    int b38NgX;
    for (MiBUZvL3KcEV = (473 - 473); (835 - 830) > MiBUZvL3KcEV; MiBUZvL3KcEV++) {
        gLFQWykNDEb = 518 - 518;
        while ((836 - 831) > gLFQWykNDEb) {
            scanf ("%d", &oZFX1p[MiBUZvL3KcEV][gLFQWykNDEb]);
            gLFQWykNDEb++;
        };
    }
    scanf ("%d%d", &Hh4YKJdrUmD, &TTYz6vC);
    if (f (oZFX1p, Hh4YKJdrUmD, TTYz6vC)) {
        {
            gLFQWykNDEb = 575 - 575;
            while (5 > gLFQWykNDEb) {
                b38NgX = oZFX1p[Hh4YKJdrUmD][gLFQWykNDEb];
                oZFX1p[Hh4YKJdrUmD][gLFQWykNDEb] = oZFX1p[TTYz6vC][gLFQWykNDEb];
                oZFX1p[TTYz6vC][gLFQWykNDEb] = b38NgX;
                gLFQWykNDEb++;
            };
        }
        for (MiBUZvL3KcEV = 0; MiBUZvL3KcEV < 5; MiBUZvL3KcEV++) {
            {
                gLFQWykNDEb = 0;
                while (gLFQWykNDEb < (44 - 40)) {
                    printf ("%d ", oZFX1p[MiBUZvL3KcEV][gLFQWykNDEb]);
                    gLFQWykNDEb++;
                };
            }
            printf ("%d", oZFX1p[MiBUZvL3KcEV][4]);
        };
    }
    else
        ;
}

