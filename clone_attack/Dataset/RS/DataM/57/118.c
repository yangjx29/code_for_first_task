void  fOg6QWyRH73 (char qOqoyKLRFZTn []) {
    int r7ykszMgYav, z2J6hKwCg;
    {
        r7ykszMgYav = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (qOqoyKLRFZTn[r7ykszMgYav] == '\0')
                break;
            r7ykszMgYav = r7ykszMgYav + 1;
        };
    }
    z2J6hKwCg = r7ykszMgYav;
    if ((!('l' != qOqoyKLRFZTn[r7ykszMgYav - 2]) && qOqoyKLRFZTn[r7ykszMgYav - 1] == 'y') || (qOqoyKLRFZTn[r7ykszMgYav - 2] == 'e' && qOqoyKLRFZTn[r7ykszMgYav - 1] == 'r'))
        z2J6hKwCg = r7ykszMgYav - 2;
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
    if (qOqoyKLRFZTn[r7ykszMgYav - 3] == 'i' && qOqoyKLRFZTn[r7ykszMgYav - 2] == 'n' && qOqoyKLRFZTn[r7ykszMgYav - 1] == 'g')
        z2J6hKwCg = r7ykszMgYav - 3;
    {
        r7ykszMgYav = 0;
        while (r7ykszMgYav < z2J6hKwCg) {
            printf ("%c", qOqoyKLRFZTn[r7ykszMgYav]);
            r7ykszMgYav++;
        };
    }
    printf ("\n");
}

void  main () {
    char qOqoyKLRFZTn [100];
    int S8AVadsx, KGJ9mN7;
    getchar ();
    scanf ("%d", &S8AVadsx);
    {
        KGJ9mN7 = 0;
        while (KGJ9mN7 < S8AVadsx) {
            gets (qOqoyKLRFZTn);
            fOg6QWyRH73 (qOqoyKLRFZTn);
            KGJ9mN7++;
        };
    };
}

