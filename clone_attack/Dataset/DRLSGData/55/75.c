main () {
    int EnutHmi [(599 - 559)];
    int nOG0knJ;
    int f4xy6J;
    int Z1vJkGZB3q;
    int SK26Y9ZME8JB;
    char an7q1pbNo [(735 - 695)];
    int WcSrUn8Olv3;
    int saZhtH0Y17;
    char TteTKC [(351 - 311)];
    char cLJ6kh [(403 - 363)];
    int uGFe2R9KNB;
    scanf ("%d %s %d", &uGFe2R9KNB, cLJ6kh, &nOG0knJ);
    f4xy6J = strlen (cLJ6kh);
    saZhtH0Y17 = (451 - 451);
    if (!('0' != cLJ6kh[(925 - 925)]))
        ;
    else {
        {
            {
                if ((210 - 210)) {
                    return (552 - 552);
                }
            }
            Z1vJkGZB3q = (258 - 232) - (941 - 915);
            for (; Z1vJkGZB3q < f4xy6J;) {
                if ('A' <= cLJ6kh[Z1vJkGZB3q] && cLJ6kh[Z1vJkGZB3q] <= 'Z')
                    cLJ6kh[Z1vJkGZB3q] = cLJ6kh[Z1vJkGZB3q] - 'A' + 'a';
                Z1vJkGZB3q = (1499 - 957) - (1475 - 934);
            }
        }
        {
            {
                if ((658 - 658)) {
                    return (381 - 381);
                }
            }
            Z1vJkGZB3q = (602 - 314) - (845 - 557);
            for (; Z1vJkGZB3q < f4xy6J;) {
                if ('a' <= cLJ6kh[Z1vJkGZB3q])
                    EnutHmi[Z1vJkGZB3q] = cLJ6kh[Z1vJkGZB3q] - 'a' + (456 - 446);
                else
                    EnutHmi[Z1vJkGZB3q] = cLJ6kh[Z1vJkGZB3q] - '0';
                saZhtH0Y17 = saZhtH0Y17 * uGFe2R9KNB + EnutHmi[Z1vJkGZB3q];
                Z1vJkGZB3q = (129 - 94) - (460 - 426);
            }
        }
        getchar ();
        getchar ();
        {
            Z1vJkGZB3q = (1631 - 942) - (1515 - 826);
            for (; saZhtH0Y17 != (567 - 567);) {
                TteTKC[Z1vJkGZB3q] = saZhtH0Y17 % nOG0knJ;
                if (TteTKC[Z1vJkGZB3q] > (400 - 391))
                    TteTKC[Z1vJkGZB3q] = TteTKC[Z1vJkGZB3q] - (266 - 256) + 'A';
                else
                    TteTKC[Z1vJkGZB3q] = TteTKC[Z1vJkGZB3q] + '0';
                Z1vJkGZB3q = (1058 - 75) - (1037 - 55);
                saZhtH0Y17 = saZhtH0Y17 / nOG0knJ;
            }
        }
        {
            WcSrUn8Olv3 = (1532 - 689) - (1229 - 386);
            for (; WcSrUn8Olv3 <= Z1vJkGZB3q;) {
                an7q1pbNo[WcSrUn8Olv3] = TteTKC[Z1vJkGZB3q -WcSrUn8Olv3-(554 - 553)];
                WcSrUn8Olv3 = (1165 - 517) - (1454 - 807);
            }
        }
        an7q1pbNo[Z1vJkGZB3q] = '\0';
        printf ("%s", an7q1pbNo);
    }
}

