void  main () {
    char woGUuJXQn [(957 - 757)];
    char fCU8zmW [(327 - 127)];
    int bTjiDB1;
    int eHGgTvRYB [(410 - 210)];
    int rwblj6tDHOEy [(289 - 89)];
    scanf ("%d", &bTjiDB1);
    memset (eHGgTvRYB, (709 - 709), sizeof (eHGgTvRYB));
    memset (rwblj6tDHOEy, (692 - 692), sizeof (rwblj6tDHOEy));
    for (; (431 - 431) < bTjiDB1;) {
        int FISkm4LFEpY;
        int dLeF27sdqJDR;
        int wv9jPV;
        int D3IT90;
        int G6pjgFNGlCqm;
        scanf ("%s%s", woGUuJXQn, fCU8zmW);
        wv9jPV = strlen (woGUuJXQn);
        {
            D3IT90 = (981 - 630) - (505 - 154);
            for (; D3IT90 < wv9jPV;) {
                eHGgTvRYB[D3IT90] = woGUuJXQn[D3IT90] - '0';
                D3IT90 = D3IT90 +(199 - 198);
            }
        }
        G6pjgFNGlCqm = strlen (fCU8zmW);
        {
            D3IT90 = (1120 - 177) - (995 - 52);
            for (; wv9jPV > D3IT90;) {
                rwblj6tDHOEy[D3IT90] = fCU8zmW[D3IT90] - '0';
                D3IT90 = D3IT90 +(22 - 21);
            }
        }
        {
            dLeF27sdqJDR = G6pjgFNGlCqm -(902 - 901);
            FISkm4LFEpY = (1488 - 714) - (1515 - 742);
            for (; FISkm4LFEpY >= (200 - 200), dLeF27sdqJDR >= (687 - 687);) {
                if (eHGgTvRYB[FISkm4LFEpY] >= rwblj6tDHOEy[dLeF27sdqJDR])
                    eHGgTvRYB[FISkm4LFEpY] = eHGgTvRYB[FISkm4LFEpY] - rwblj6tDHOEy[dLeF27sdqJDR];
                else {
                    eHGgTvRYB[FISkm4LFEpY] = (98 - 88) + eHGgTvRYB[FISkm4LFEpY] - rwblj6tDHOEy[dLeF27sdqJDR];
                    eHGgTvRYB[FISkm4LFEpY -(512 - 511)]--;
                }
                dLeF27sdqJDR = dLeF27sdqJDR - (741 - 740);
                FISkm4LFEpY = FISkm4LFEpY -(745 - 744);
            }
        }
        {
            D3IT90 = (101 - 101);
            for (; D3IT90 < wv9jPV;) {
                if (eHGgTvRYB[D3IT90] != (739 - 739))
                    break;
                D3IT90 = D3IT90 +(281 - 280);
            }
        }
        {
            FISkm4LFEpY = D3IT90;
            for (; FISkm4LFEpY < wv9jPV;) {
                printf ("%d", eHGgTvRYB[FISkm4LFEpY]);
                FISkm4LFEpY = FISkm4LFEpY +(844 - 843);
            }
        }
        bTjiDB1 = bTjiDB1 - (939 - 938);
    }
}

