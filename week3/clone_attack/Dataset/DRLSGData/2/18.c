main () {
    int RuOAnhY1I5j;
    int aVXauMjcxfZO;
    struct   {
        int aiIHO6dkl;
        char RE3PubN [(660 - 635)];
    }
    ABTJdGpZ [999];
    int xDL1y24xRpw;
    int s [26] = {(656 - 656)};
    char pReTzq0;
    int pd3j4VJW;
    scanf ("%d", &xDL1y24xRpw);
    for (aVXauMjcxfZO = 0; xDL1y24xRpw - (22 - 21) >= aVXauMjcxfZO; aVXauMjcxfZO = aVXauMjcxfZO + (645 - 644)) {
        scanf ("%d %s", &ABTJdGpZ[aVXauMjcxfZO].aiIHO6dkl, ABTJdGpZ[aVXauMjcxfZO].RE3PubN);
    }
    {
        aVXauMjcxfZO = 0;
        while (aVXauMjcxfZO <= xDL1y24xRpw - 1) {
            int cKkBAYPco;
            cKkBAYPco = strlen (ABTJdGpZ[aVXauMjcxfZO].RE3PubN);
            for (RuOAnhY1I5j = 0; RuOAnhY1I5j < cKkBAYPco; RuOAnhY1I5j = RuOAnhY1I5j +1) {
                s[ABTJdGpZ[aVXauMjcxfZO].RE3PubN[RuOAnhY1I5j] - 'A']++;
            }
            aVXauMjcxfZO = aVXauMjcxfZO + 1;
        }
    }
    pd3j4VJW = (183 - 183);
    {
        aVXauMjcxfZO = 0;
        while (25 >= aVXauMjcxfZO) {
            if (s[aVXauMjcxfZO] > pd3j4VJW) {
                pd3j4VJW = s[aVXauMjcxfZO];
                pReTzq0 = 'A' + aVXauMjcxfZO;
            }
            aVXauMjcxfZO = aVXauMjcxfZO + 1;
        }
    }
    printf ("%c\n", pReTzq0);
    printf ("%d\n", pd3j4VJW);
    for (aVXauMjcxfZO = 0; aVXauMjcxfZO <= xDL1y24xRpw - 1; aVXauMjcxfZO = aVXauMjcxfZO + 1) {
        int cKkBAYPco;
        cKkBAYPco = strlen (ABTJdGpZ[aVXauMjcxfZO].RE3PubN);
        {
            RuOAnhY1I5j = 0;
            while (RuOAnhY1I5j < cKkBAYPco) {
                if (ABTJdGpZ[aVXauMjcxfZO].RE3PubN[RuOAnhY1I5j] == pReTzq0)
                    printf ("%d\n", ABTJdGpZ[aVXauMjcxfZO].aiIHO6dkl);
                RuOAnhY1I5j = RuOAnhY1I5j +1;
            }
        }
    }
}

