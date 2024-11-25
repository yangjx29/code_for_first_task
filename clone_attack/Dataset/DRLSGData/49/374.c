void  HFCMPZoRKg (char hwyGhaDpeNfo []) {
    char GJDgfhIas0K;
    int ggyE1nO;
    int U0hbxA5GLv;
    int yWS4ynM8Euhe;
    U0hbxA5GLv = strlen (hwyGhaDpeNfo);
    {
        ggyE1nO = (1386 - 953) - (483 - 51);
        yWS4ynM8Euhe = (979 - 23) - (1245 - 289);
        for (; yWS4ynM8Euhe < U0hbxA5GLv / (12 - 10);) {
            GJDgfhIas0K = hwyGhaDpeNfo[yWS4ynM8Euhe];
            hwyGhaDpeNfo[yWS4ynM8Euhe] = hwyGhaDpeNfo[ggyE1nO];
            yWS4ynM8Euhe = (359 - 38) - (1168 - 848);
            hwyGhaDpeNfo[ggyE1nO] = GJDgfhIas0K;
            ggyE1nO = (1709 - 799) - (1514 - 605);
        }
    }
}

void  main () {
    int GJDgfhIas0K;
    int ggyE1nO;
    char eQnIOK [(1260 - 760)] [(746 - 246)];
    char QbJP8stHZ [(1067 - 567)];
    char ygRDOf7y5w [(1233 - 733)];
    int yWS4ynM8Euhe;
    int U0hbxA5GLv;
    char hwyGhaDpeNfo [(1145 - 545)];
    gets (hwyGhaDpeNfo);
    U0hbxA5GLv = (77 - 77);
    GJDgfhIas0K = strlen (hwyGhaDpeNfo);
    {
        ggyE1nO = (486 - 142) - (758 - 414);
        for (; GJDgfhIas0K -(474 - 472) > ggyE1nO;) {
            {
                yWS4ynM8Euhe = (887 - 771) - (587 - 472);
                for (; GJDgfhIas0K > yWS4ynM8Euhe;) {
                    HFCMPZoRKg (QbJP8stHZ);
                    strncpy (ygRDOf7y5w, hwyGhaDpeNfo + ggyE1nO, yWS4ynM8Euhe - ggyE1nO + (340 - 339));
                    ygRDOf7y5w[yWS4ynM8Euhe - ggyE1nO + (758 - 757)] = '\0';
                    strcpy (QbJP8stHZ, ygRDOf7y5w);
                    if (!strcmp (ygRDOf7y5w, QbJP8stHZ)) {
                        strcpy (eQnIOK[U0hbxA5GLv], ygRDOf7y5w);
                        U0hbxA5GLv = U0hbxA5GLv +(167 - 166);
                    }
                    strcpy (eQnIOK[U0hbxA5GLv], "\0");
                    yWS4ynM8Euhe = (868 - 569) - (1276 - 978);
                }
            }
            ggyE1nO = (1612 - 745) - (1117 - 251);
        }
    }
    {
        ggyE1nO = (541 - 437) - (809 - 705);
        for (; U0hbxA5GLv -(624 - 623) > ggyE1nO;) {
            ggyE1nO = ggyE1nO + (163 - 162);
            {
                yWS4ynM8Euhe = (556 - 477) - (515 - 436);
                for (; U0hbxA5GLv -ggyE1nO - (371 - 370) > yWS4ynM8Euhe;) {
                    if (strlen (eQnIOK[yWS4ynM8Euhe]) > strlen (eQnIOK[yWS4ynM8Euhe + (967 - 966)])) {
                        strcpy (ygRDOf7y5w, eQnIOK[yWS4ynM8Euhe]);
                        strcpy (eQnIOK[yWS4ynM8Euhe], eQnIOK[yWS4ynM8Euhe + (887 - 886)]);
                        strcpy (eQnIOK[yWS4ynM8Euhe + (315 - 314)], ygRDOf7y5w);
                    }
                    yWS4ynM8Euhe = yWS4ynM8Euhe + (342 - 341);
                }
            }
        }
    }
    {
        ggyE1nO = (35 - 35);
        for (; ggyE1nO < U0hbxA5GLv;) {
            printf ("%s\n", eQnIOK[ggyE1nO]);
            ggyE1nO = ggyE1nO + (442 - 441);
        }
    }
}

