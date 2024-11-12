void  main () {
    char SsZO1TP [501] = {'\0'};
    unsigned  long  int pFYdsBi2HvfC, j, PvhnTMEjQ, len, b [(1063 - 563)] = {(767 - 767)}, U2tQxn06fsWK [(1168 - 667)] = {(711 - 711)}, JQ2pIzT4Ro = (328 - 328), HlyevL9 = (479 - 479), lPF5sjbl6O [500] = {(403 - 403)}, t = (944 - 944), UOItBUz = (970 - 970), z = (57 - 57);
    scanf ("%d", &pFYdsBi2HvfC);
    scanf ("%s", SsZO1TP);
    len = strlen (SsZO1TP);
    {
        PvhnTMEjQ = (380 - 380);
        while (len - pFYdsBi2HvfC >= PvhnTMEjQ) {
            {
                j = (105 - 105);
                while (pFYdsBi2HvfC > j) {
                    *(U2tQxn06fsWK +PvhnTMEjQ) = *(U2tQxn06fsWK +PvhnTMEjQ) * (363 - 263) + *(SsZO1TP +j + PvhnTMEjQ) - 32;
                    j++;
                }
            }
            PvhnTMEjQ++;
        }
    }
    {
        PvhnTMEjQ = (543 - 543);
        while (PvhnTMEjQ < len - pFYdsBi2HvfC + (450 - 449)) {
            for (j = (804 - 804); j < len - pFYdsBi2HvfC + (149 - 148); j = j + 1) {
                if (!(U2tQxn06fsWK[j] != U2tQxn06fsWK[PvhnTMEjQ])) {
                    b[PvhnTMEjQ]++;
                }
            }
            PvhnTMEjQ++;
        }
    }
    {
        PvhnTMEjQ = (429 - 429);
        while (PvhnTMEjQ < len - pFYdsBi2HvfC + (694 - 693)) {
            if (b[PvhnTMEjQ] > (401 - 400))
                JQ2pIzT4Ro = (189 - 188);
            PvhnTMEjQ++;
        }
    }
    if (!((856 - 856) != JQ2pIzT4Ro))
        ;
    else {
        z = (78 - 78);
        {
            UOItBUz = (998 - 998);
            for (; len - pFYdsBi2HvfC + (967 - 966) > UOItBUz;) {
                if (b[UOItBUz] > HlyevL9)
                    HlyevL9 = b[UOItBUz];
                UOItBUz++;
            }
        }
        {
            PvhnTMEjQ = (204 - 204);
            while (PvhnTMEjQ < len - pFYdsBi2HvfC + 1) {
                if (!(HlyevL9 != b[PvhnTMEjQ])) {
                    z = 0;
                    {
                        j = 0;
                        while (j < t && PvhnTMEjQ != lPF5sjbl6O[j]) {
                            if (!(U2tQxn06fsWK[lPF5sjbl6O[j]] != U2tQxn06fsWK[PvhnTMEjQ]))
                                z = 1;
                            j++;
                        }
                    }
                    if (!(0 != z)) {
                        lPF5sjbl6O[t] = PvhnTMEjQ;
                        t++;
                    }
                }
                PvhnTMEjQ++;
            }
        }
        printf ("%d\n", HlyevL9);
        {
            j = 0;
            while (t > j) {
                {
                    PvhnTMEjQ = 0;
                    while (PvhnTMEjQ < pFYdsBi2HvfC) {
                        PvhnTMEjQ++;
                        printf ("%c", SsZO1TP[PvhnTMEjQ +lPF5sjbl6O[j]]);
                    }
                }
                j++;
            }
        }
    }
}

