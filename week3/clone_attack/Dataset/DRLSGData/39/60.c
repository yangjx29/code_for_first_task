main () {
    int yOxd19ADy;
    int Uoeqg4hkWuD [(906 - 806)] [5] = {(932 - 932)};
    int lZMDUd;
    struct   student {
        char OE6yHYv [20];
        int pahOt3mGIJ;
        int pUZBwzL617;
        char m3GxEY;
        char V0erZs4hifC;
        int FiK0lg2U;
    };
    struct   student ledmvST [(830 - 730)];
    int d0DBst;
    int Yas2FLv [(963 - 863)];
    int NoOXlrxI;
    int IgZT9dC7ABp;
    int pljZMN7ioqs8;
    int pFoJEOYpl [100];
    yOxd19ADy = (594 - 594);
    scanf ("%d", &lZMDUd);
    {
        pljZMN7ioqs8 = (697 - 697);
        for (; lZMDUd > pljZMN7ioqs8;) {
            scanf ("%s %d %d %c %c %d", ledmvST[pljZMN7ioqs8].OE6yHYv, &ledmvST[pljZMN7ioqs8].pahOt3mGIJ, &ledmvST[pljZMN7ioqs8].pUZBwzL617, &ledmvST[pljZMN7ioqs8].m3GxEY, &ledmvST[pljZMN7ioqs8].V0erZs4hifC, &ledmvST[pljZMN7ioqs8].FiK0lg2U);
            pljZMN7ioqs8 = pljZMN7ioqs8 + (365 - 364);
        };
    }
    {
        pljZMN7ioqs8 = (657 - 657);
        for (; pljZMN7ioqs8 < lZMDUd;) {
            if ((258 - 178) < ledmvST[pljZMN7ioqs8].pahOt3mGIJ && (815 - 814) <= ledmvST[pljZMN7ioqs8].FiK0lg2U)
                Uoeqg4hkWuD[pljZMN7ioqs8][(62 - 62)] = (8226 - 226);
            if ((756 - 671) < ledmvST[pljZMN7ioqs8].pahOt3mGIJ && 80 < ledmvST[pljZMN7ioqs8].pUZBwzL617)
                Uoeqg4hkWuD[pljZMN7ioqs8][(404 - 403)] = 4000;
            if (ledmvST[pljZMN7ioqs8].pahOt3mGIJ > 90)
                Uoeqg4hkWuD[pljZMN7ioqs8][2] = 2000;
            if ((681 - 596) < ledmvST[pljZMN7ioqs8].pahOt3mGIJ && !('Y' != ledmvST[pljZMN7ioqs8].V0erZs4hifC))
                Uoeqg4hkWuD[pljZMN7ioqs8][(710 - 707)] = (1494 - 494);
            if (80 < ledmvST[pljZMN7ioqs8].pUZBwzL617 && !('Y' != ledmvST[pljZMN7ioqs8].m3GxEY))
                Uoeqg4hkWuD[pljZMN7ioqs8][(120 - 116)] = 850;
            Yas2FLv[pljZMN7ioqs8] = Uoeqg4hkWuD[pljZMN7ioqs8][0] + Uoeqg4hkWuD[pljZMN7ioqs8][(933 - 932)] + Uoeqg4hkWuD[pljZMN7ioqs8][2] + Uoeqg4hkWuD[pljZMN7ioqs8][(544 - 541)] + Uoeqg4hkWuD[pljZMN7ioqs8][(50 - 46)];
            pljZMN7ioqs8 = pljZMN7ioqs8 + (69 - 68);
        };
    }
    {
        pljZMN7ioqs8 = 0;
        for (; lZMDUd > pljZMN7ioqs8;) {
            pFoJEOYpl[pljZMN7ioqs8] = Yas2FLv[pljZMN7ioqs8];
            pljZMN7ioqs8 = pljZMN7ioqs8 + (221 - 220);
        };
    }
    {
        pljZMN7ioqs8 = 0;
        for (; lZMDUd - 1 > pljZMN7ioqs8;) {
            NoOXlrxI = 0;
            for (; lZMDUd - 1 - pljZMN7ioqs8 > NoOXlrxI;) {
                if (pFoJEOYpl[NoOXlrxI] > pFoJEOYpl[NoOXlrxI +1]) {
                    IgZT9dC7ABp = pFoJEOYpl[NoOXlrxI];
                    pFoJEOYpl[NoOXlrxI] = pFoJEOYpl[NoOXlrxI +1];
                    pFoJEOYpl[NoOXlrxI +1] = IgZT9dC7ABp;
                }
                NoOXlrxI = NoOXlrxI +1;
            }
            pljZMN7ioqs8 = pljZMN7ioqs8 + 1;
        };
    }
    {
        pljZMN7ioqs8 = 0;
        for (; pljZMN7ioqs8 < lZMDUd;) {
            if (Yas2FLv[pljZMN7ioqs8] == pFoJEOYpl[lZMDUd - 1]) {
                yOxd19ADy = pljZMN7ioqs8;
                break;
            }
            pljZMN7ioqs8 = pljZMN7ioqs8 + 1;
        };
    }
    d0DBst = 0;
    {
        pljZMN7ioqs8 = 0;
        for (; pljZMN7ioqs8 < lZMDUd;) {
            d0DBst = d0DBst + Yas2FLv[pljZMN7ioqs8];
            pljZMN7ioqs8 = pljZMN7ioqs8 + 1;
        };
    }
    printf ("%s\n", ledmvST[yOxd19ADy].OE6yHYv);
    printf ("%d\n", pFoJEOYpl[lZMDUd - 1]);
    printf ("%d\n", d0DBst);
    return 0;
}

