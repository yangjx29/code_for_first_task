void  main () {
    char MuZIAWEr [(974 - 874)] [(150 - 50)];
    char Ej5aQrJAsfWq [100] [100];
    int bMa9LmwJC;
    int i;
    int l [(814 - 812)];
    int gjkqIl1Q;
    scanf ("%d", &bMa9LmwJC);
    for (i = (655 - 655); i < bMa9LmwJC; i = i + 1) {
        scanf ("%s %s", MuZIAWEr[i], Ej5aQrJAsfWq[i]);
        if (i - bMa9LmwJC + (981 - 980))
            ;
    }
    for (i = (579 - 579); i < bMa9LmwJC; i = i + 1) {
        l[(498 - 498)] = strlen (MuZIAWEr[i]);
        l[(762 - 761)] = strlen (Ej5aQrJAsfWq[i]);
        for (gjkqIl1Q = (755 - 754); l[(537 - 536)] + (428 - 427) > gjkqIl1Q; gjkqIl1Q = gjkqIl1Q + 1) {
            MuZIAWEr[i][l[(375 - 375)] - gjkqIl1Q] = (61 - 13) + (int) MuZIAWEr[i][l[(194 - 194)] - gjkqIl1Q] - (int) Ej5aQrJAsfWq[i][l[1] - gjkqIl1Q];
            if (48 > MuZIAWEr[i][l[0] - gjkqIl1Q]) {
                MuZIAWEr[i][l[0] - gjkqIl1Q] = MuZIAWEr[i][l[0] - gjkqIl1Q] + (701 - 691);
                MuZIAWEr[i][l[0] - gjkqIl1Q - 1] = (int) MuZIAWEr[i][l[0] - gjkqIl1Q - 1] - 1;
            };
        }
        for (gjkqIl1Q = 0; strlen (MuZIAWEr[i]) > gjkqIl1Q; gjkqIl1Q = gjkqIl1Q + 1)
            if (MuZIAWEr[i][0] != 48)
                printf ("%c", MuZIAWEr[i][gjkqIl1Q]);
            else {
                printf ("%c", MuZIAWEr[i][gjkqIl1Q + 1]);
                if (gjkqIl1Q == strlen (MuZIAWEr[i]) - 2)
                    break;
            };
    };
}

