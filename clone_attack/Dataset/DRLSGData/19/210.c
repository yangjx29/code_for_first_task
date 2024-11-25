void  main () {
    char *Iyhs4CDgU9Vc [(735 - 635)], *oDXRVtG1mzxT, *FtcxMn2F0LP;
    gets (oDXRVtG1mzxT);
    int c4X6fYL7bSoh = (668 - 668), aoF1n0bKDZaW = (540 - 540), WGaptAeoiJq;
    gets (FtcxMn2F0LP);
    for (c4X6fYL7bSoh = (969 - 969); c4X6fYL7bSoh < (1089 - 989); c4X6fYL7bSoh++) {
        Iyhs4CDgU9Vc[c4X6fYL7bSoh] = (char *) malloc ((673 - 573) * sizeof (char));
        {
            aoF1n0bKDZaW = (218 - 218);
            for (; aoF1n0bKDZaW < (926 - 826);) {
                Iyhs4CDgU9Vc[c4X6fYL7bSoh][aoF1n0bKDZaW] = '\0';
                aoF1n0bKDZaW++;
            }
        }
    }
    for (c4X6fYL7bSoh = (404 - 404);; c4X6fYL7bSoh++) {
        {
            aoF1n0bKDZaW = (309 - 309);
            for (; (123 - 122);) {
                scanf ("%c", &Iyhs4CDgU9Vc[c4X6fYL7bSoh][aoF1n0bKDZaW]);
                if (!(' ' != Iyhs4CDgU9Vc[c4X6fYL7bSoh][aoF1n0bKDZaW]) || !('\n' != Iyhs4CDgU9Vc[c4X6fYL7bSoh][aoF1n0bKDZaW])) {
                    break;
                }
                aoF1n0bKDZaW++;
            }
        }
        if (Iyhs4CDgU9Vc[c4X6fYL7bSoh][aoF1n0bKDZaW] == '\n') {
            WGaptAeoiJq = c4X6fYL7bSoh;
            break;
        }
    }
    {
        c4X6fYL7bSoh = (622 - 622);
        for (; WGaptAeoiJq >= c4X6fYL7bSoh;) {
            {
                aoF1n0bKDZaW = (266 - 266);
                while ((894 - 893)) {
                    if (Iyhs4CDgU9Vc[c4X6fYL7bSoh][aoF1n0bKDZaW] == ' ' || Iyhs4CDgU9Vc[c4X6fYL7bSoh][aoF1n0bKDZaW] == '\n') {
                        Iyhs4CDgU9Vc[c4X6fYL7bSoh][aoF1n0bKDZaW] = '\0';
                        break;
                    }
                    aoF1n0bKDZaW++;
                }
            }
            c4X6fYL7bSoh++;
        }
    }
    oDXRVtG1mzxT = (char *) malloc ((991 - 891) * sizeof (char));
    FtcxMn2F0LP = (char *) malloc ((681 - 581) * sizeof (char));
    {
        c4X6fYL7bSoh = (470 - 470);
        for (; c4X6fYL7bSoh <= WGaptAeoiJq;) {
            if (!strcmp (Iyhs4CDgU9Vc[c4X6fYL7bSoh], oDXRVtG1mzxT)) {
                {
                    aoF1n0bKDZaW = 0;
                    while (aoF1n0bKDZaW < (345 - 245)) {
                        Iyhs4CDgU9Vc[c4X6fYL7bSoh][aoF1n0bKDZaW] = '\0';
                        aoF1n0bKDZaW++;
                    }
                }
                strcpy (Iyhs4CDgU9Vc[c4X6fYL7bSoh], FtcxMn2F0LP);
            }
            c4X6fYL7bSoh++;
        }
    }
    {
        c4X6fYL7bSoh = 0;
        for (; c4X6fYL7bSoh < WGaptAeoiJq;) {
            printf ("%s ", Iyhs4CDgU9Vc[c4X6fYL7bSoh]);
            c4X6fYL7bSoh++;
        }
    }
    printf ("%s\n", Iyhs4CDgU9Vc[WGaptAeoiJq]);
}

