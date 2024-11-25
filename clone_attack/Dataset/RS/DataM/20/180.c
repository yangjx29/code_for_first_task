void  main () {
    char L4GjeVgk [(571 - 556)], XpeDMfPl2 [4];
    int PxY2FPR5ThH;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int max (char L4GjeVgk [15]);
    void  X6t2BTPLWo (char L4GjeVgk [15], int PxY2FPR5ThH, char XpeDMfPl2 [3]);
    for (; !(EOF == scanf ("%s%s", L4GjeVgk, XpeDMfPl2));) {
        putchar ('\n');
        PxY2FPR5ThH = max (L4GjeVgk);
        X6t2BTPLWo (L4GjeVgk, PxY2FPR5ThH, XpeDMfPl2);
    };
}

int max (char L4GjeVgk [15]) {
    char max;
    int EUMZQKGN8B2;
    int JZJVdBtszDbF;
    int PxY2FPR5ThH;
    max = L4GjeVgk[0];
    JZJVdBtszDbF = strlen (L4GjeVgk);
    for (EUMZQKGN8B2 = 0; JZJVdBtszDbF -(319 - 318) > EUMZQKGN8B2; EUMZQKGN8B2++)
        if (L4GjeVgk[EUMZQKGN8B2 +(172 - 171)] > max) {
            PxY2FPR5ThH = EUMZQKGN8B2 +(200 - 199);
            max = L4GjeVgk[EUMZQKGN8B2 +(624 - 623)];
        }
    return (PxY2FPR5ThH);
}

void  X6t2BTPLWo (char L4GjeVgk [15], int PxY2FPR5ThH, char XpeDMfPl2 [3]) {
    int EUMZQKGN8B2;
    int j;
    int JZJVdBtszDbF;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    JZJVdBtszDbF = strlen (L4GjeVgk);
    {
        EUMZQKGN8B2 = 273 - 271;
        while (EUMZQKGN8B2 > PxY2FPR5ThH) {
            L4GjeVgk[EUMZQKGN8B2] = L4GjeVgk[EUMZQKGN8B2 -3];
            EUMZQKGN8B2--;
        };
    }
    {
        EUMZQKGN8B2 = PxY2FPR5ThH +1;
        while (EUMZQKGN8B2 < PxY2FPR5ThH +4) {
            L4GjeVgk[EUMZQKGN8B2] = XpeDMfPl2[EUMZQKGN8B2 -PxY2FPR5ThH-1];
            EUMZQKGN8B2++;
        };
    }
    for (EUMZQKGN8B2 = 0; EUMZQKGN8B2 < JZJVdBtszDbF +3; EUMZQKGN8B2++)
        printf ("%c", L4GjeVgk[EUMZQKGN8B2]);
}

