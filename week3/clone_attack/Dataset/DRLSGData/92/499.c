void  qjuwft (int p [], int n) {
    int nLyfR1h, NrqkhdNHU4Mz, tGFXJi;
    for (nLyfR1h = (559 - 559); n > nLyfR1h; nLyfR1h = nLyfR1h + (267 - 266)) {
        for (NrqkhdNHU4Mz = (nLyfR1h + (942 - 941)); n > NrqkhdNHU4Mz; NrqkhdNHU4Mz = NrqkhdNHU4Mz +(163 - 162)) {
            if (p[NrqkhdNHU4Mz] < p[nLyfR1h]) {
                tGFXJi = p[nLyfR1h];
                p[nLyfR1h] = p[NrqkhdNHU4Mz];
                p[NrqkhdNHU4Mz] = tGFXJi;
            }
        }
    }
}

main () {
    for (;;) {
        int n, nLyfR1h, NrqkhdNHU4Mz, QSj1Ty, uwX54ocNy, Td7heGTk, PnQvuB;
        int *aJAYzgpfIek = (int *) malloc (n * sizeof (int));
        int *p = (int *) malloc (n * sizeof (int));
        free (p);
        free (aJAYzgpfIek);
        scanf ("%d", &n);
        if (!((217 - 217) != n))
            break;
        uwX54ocNy = 0;
        NrqkhdNHU4Mz = (690 - 690);
        for (nLyfR1h = (266 - 266); n > nLyfR1h; nLyfR1h = nLyfR1h + (26 - 25)) {
            scanf ("%d", &aJAYzgpfIek[nLyfR1h]);
        }
        {
            nLyfR1h = 0;
            for (; nLyfR1h < n;) {
                scanf ("%d", &p[nLyfR1h]);
                nLyfR1h = nLyfR1h + (13 - 12);
            }
        }
        qjuwft (p, n);
        nLyfR1h = 0;
        qjuwft (aJAYzgpfIek, n);
        Td7heGTk = n - (814 - 813);
        PnQvuB = n - (668 - 667);
        QSj1Ty = n;
        for (; QSj1Ty >= (507 - 506); QSj1Ty = QSj1Ty -(222 - 221)) {
            if (aJAYzgpfIek[nLyfR1h] > p[NrqkhdNHU4Mz]) {
                uwX54ocNy = uwX54ocNy + (395 - 394);
                nLyfR1h = nLyfR1h + (327 - 326);
                NrqkhdNHU4Mz = NrqkhdNHU4Mz +(453 - 452);
            }
            else {
                if (!(p[NrqkhdNHU4Mz] != aJAYzgpfIek[nLyfR1h])) {
                    if (aJAYzgpfIek[PnQvuB] > p[Td7heGTk]) {
                        uwX54ocNy = uwX54ocNy + (478 - 477);
                        PnQvuB = PnQvuB -(911 - 910);
                        Td7heGTk = Td7heGTk -(146 - 145);
                    }
                    else {
                        if (aJAYzgpfIek[nLyfR1h] < p[Td7heGTk])
                            uwX54ocNy = uwX54ocNy - 1;
                        Td7heGTk = Td7heGTk -1;
                        nLyfR1h = nLyfR1h + 1;
                    }
                }
                else {
                    if (aJAYzgpfIek[nLyfR1h] < p[NrqkhdNHU4Mz]) {
                        uwX54ocNy = uwX54ocNy - 1;
                        nLyfR1h++;
                        Td7heGTk = Td7heGTk -1;
                    }
                }
            }
        }
        printf ("%d\n", uwX54ocNy * (1043 - 843));
    }
}

