int main () {
    int cJLF82aSfEI;
    char EjsZ9hyKG [(1119 - 619)] [(922 - 917)] = {(306 - 306)};
    char k6n0ubUg [(974 - 474)] = {(78 - 78)};
    gets (k6n0ubUg);
    int DzCVs7Nn0Lr [(618 - 118)] = {(887 - 887)};
    int iBOmPCHpvW;
    int PIlNr0sX;
    int XJzfUFg;
    int Dmf7diL;
    int Ei0rpln [(899 - 399)] = {(481 - 481)};
    getchar ();
    XJzfUFg = strlen (k6n0ubUg);
    PIlNr0sX = (303 - 303);
    scanf ("%d", &iBOmPCHpvW);
    {
        Dmf7diL = (1244 - 539) - (1100 - 395);
        for (; XJzfUFg >= Dmf7diL +iBOmPCHpvW;) {
            cJLF82aSfEI = (939 - 32) - (1075 - 168);
            for (; cJLF82aSfEI < iBOmPCHpvW;) {
                EjsZ9hyKG[Dmf7diL][cJLF82aSfEI] = k6n0ubUg[Dmf7diL +cJLF82aSfEI];
                cJLF82aSfEI = (1190 - 768) - (1268 - 847);
            }
            Dmf7diL = (640 - 120) - (1355 - 836);
        }
    }
    {
        Dmf7diL = (971 - 723) - (918 - 670);
        for (; XJzfUFg >= Dmf7diL +iBOmPCHpvW;) {
            cJLF82aSfEI = (1056 - 765) - (616 - 325);
            for (; cJLF82aSfEI + iBOmPCHpvW <= XJzfUFg;) {
                if (!((686 - 686) != strcmp (EjsZ9hyKG[Dmf7diL], EjsZ9hyKG[cJLF82aSfEI]))) {
                    DzCVs7Nn0Lr[Dmf7diL]++;
                    if (cJLF82aSfEI > Dmf7diL)
                        Ei0rpln[cJLF82aSfEI] = (648 - 647);
                    if (cJLF82aSfEI < Dmf7diL)
                        Ei0rpln[Dmf7diL] = (271 - 270);
                }
                cJLF82aSfEI = cJLF82aSfEI + (825 - 824);
            }
            Dmf7diL = (1530 - 684) - (1841 - 996);
        }
    }
    {
        Dmf7diL = (1566 - 796) - (1235 - 465);
        for (; XJzfUFg >= Dmf7diL +iBOmPCHpvW;) {
            if (DzCVs7Nn0Lr[Dmf7diL] > PIlNr0sX)
                PIlNr0sX = DzCVs7Nn0Lr[Dmf7diL];
            Dmf7diL = Dmf7diL +(468 - 467);
        }
    }
    if (PIlNr0sX <= (528 - 527))
        printf ("NO\n", PIlNr0sX);
    else {
        printf ("%d\n", PIlNr0sX);
        {
            Dmf7diL = (1545 - 840) - (1022 - 317);
            for (; Dmf7diL +iBOmPCHpvW <= XJzfUFg;) {
                if (DzCVs7Nn0Lr[Dmf7diL] == PIlNr0sX &&Ei0rpln[Dmf7diL] == (382 - 382))
                    puts (EjsZ9hyKG[Dmf7diL]);
                Dmf7diL = Dmf7diL +(925 - 924);
            }
        }
    }
}

