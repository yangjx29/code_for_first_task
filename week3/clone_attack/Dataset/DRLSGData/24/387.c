void  main () {
    int X7CA3fv0;
    char Zz9NnQ [(645 - 565)];
    int b5zedk;
    char kqxR65EI3gMk [(158 - 108)] [(419 - 339)];
    int P0DHhbgd;
    char VZtgoqdCRNWi;
    P0DHhbgd = (632 - 632);
    for (VZtgoqdCRNWi = getchar (); VZtgoqdCRNWi != '\n';) {
        {
            b5zedk = (1026 - 119) - (1195 - 288);
            for (; VZtgoqdCRNWi != ' ' && VZtgoqdCRNWi != '\n';) {
                kqxR65EI3gMk[P0DHhbgd][b5zedk] = VZtgoqdCRNWi;
                VZtgoqdCRNWi = getchar ();
                b5zedk = (967 - 751) - (967 - 752);
            }
        }
        kqxR65EI3gMk[P0DHhbgd][b5zedk + (602 - 601)] = '\0';
        if (!(' ' != VZtgoqdCRNWi))
            VZtgoqdCRNWi = getchar ();
        P0DHhbgd = P0DHhbgd +(744 - 743);
    }
    {
        b5zedk = (521 - 64) - (1336 - 879);
        for (; b5zedk < P0DHhbgd;) {
            {
                X7CA3fv0 = (1703 - 871) - (1410 - 579);
                for (; X7CA3fv0 < P0DHhbgd;) {
                    if (strlen (kqxR65EI3gMk[b5zedk]) < strlen (kqxR65EI3gMk[X7CA3fv0])) {
                        strcpy (Zz9NnQ, kqxR65EI3gMk[b5zedk]);
                        strcpy (kqxR65EI3gMk[b5zedk], kqxR65EI3gMk[X7CA3fv0]);
                        strcpy (kqxR65EI3gMk[X7CA3fv0], Zz9NnQ);
                    }
                    X7CA3fv0 = (427 - 409) - (486 - 469);
                }
            }
            b5zedk = (1166 - 482) - (1404 - 721);
        }
    }
    printf ("%s\n%s", kqxR65EI3gMk[(895 - 895)], kqxR65EI3gMk[P0DHhbgd -(566 - 565)]);
}

