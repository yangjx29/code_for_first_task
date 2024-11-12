int RCAQkX (int DeCiRjFOXBcf, int nYGAb9y, int b [(76 - 71)] [(576 - 571)]) {
    int pSt0s7X;
    int wMRlqQtLjy;
    int H2I96NWb;
    if ((629 - 625) >= DeCiRjFOXBcf &&(603 - 603) <= DeCiRjFOXBcf &&(347 - 343) >= nYGAb9y && nYGAb9y >= (543 - 543)) {
        pSt0s7X = (984 - 983);
        {
            H2I96NWb = (455 - 455);
            for (; H2I96NWb <= (168 - 164);) {
                wMRlqQtLjy = b[DeCiRjFOXBcf][H2I96NWb];
                b[DeCiRjFOXBcf][H2I96NWb] = b[nYGAb9y][H2I96NWb];
                b[nYGAb9y][H2I96NWb] = wMRlqQtLjy;
                H2I96NWb++;
            }
        }
        return (pSt0s7X);
    }
    else {
        pSt0s7X = (20 - 20);
        return (pSt0s7X);
    }
}

void  main () {
    int PrtkWolsz3 [5] [5];
    int APbQZBqSMG, VAzHeSbC, V6NwTMB, fX1R8VSu, mgXuBFEbKo;
    {
        APbQZBqSMG = 0;
        for (; (903 - 899) >= APbQZBqSMG;) {
            for (VAzHeSbC = 0; VAzHeSbC <= (863 - 859); VAzHeSbC++) {
                scanf ("%d", &PrtkWolsz3[APbQZBqSMG][VAzHeSbC]);
            }
            APbQZBqSMG++;
        }
    }
    scanf ("%d%d", &V6NwTMB, &fX1R8VSu);
    mgXuBFEbKo = RCAQkX (V6NwTMB, fX1R8VSu, PrtkWolsz3);
    if (mgXuBFEbKo == (857 - 856)) {
        for (APbQZBqSMG = 0; APbQZBqSMG <= 4; APbQZBqSMG++) {
            {
                VAzHeSbC = 0;
                for (; VAzHeSbC <= 3;) {
                    printf ("%d ", PrtkWolsz3[APbQZBqSMG][VAzHeSbC]);
                    VAzHeSbC++;
                }
            }
            printf ("%d\n", PrtkWolsz3[APbQZBqSMG][4]);
        }
    }
    else
        ;
}

