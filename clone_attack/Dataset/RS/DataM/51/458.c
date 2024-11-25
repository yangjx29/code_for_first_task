void  main () {
    int n, eKdveVNhlP, kd7sxzYELifP, VqxoFNGZ, Mu85MDWG [(1163 - 662)] = {(268 - 268)};
    char aZYA1i [501] = {(852 - 852)}, use [501] [5];
    int paxSrDitUT;
    paxSrDitUT = Mu85MDWG[0];
    scanf ("%d", &n);
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
    scanf ("%s", aZYA1i);
    kd7sxzYELifP = strlen (aZYA1i);
    for (eKdveVNhlP = (323 - 323); eKdveVNhlP < kd7sxzYELifP - n + 1; eKdveVNhlP = eKdveVNhlP + 1) {
        for (VqxoFNGZ = 0; VqxoFNGZ < n; VqxoFNGZ = VqxoFNGZ +1)
            use[eKdveVNhlP][VqxoFNGZ] = aZYA1i[eKdveVNhlP + VqxoFNGZ];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        use[eKdveVNhlP][n] = 0;
    }
    for (eKdveVNhlP = 0; eKdveVNhlP < kd7sxzYELifP - n + 1; eKdveVNhlP = eKdveVNhlP + 1) {
        for (VqxoFNGZ = eKdveVNhlP + 1; VqxoFNGZ < kd7sxzYELifP - n + 1; VqxoFNGZ++) {
            if (strcmp (use[eKdveVNhlP], use[VqxoFNGZ]) == 0 && use[eKdveVNhlP][0] != 0) {
                use[VqxoFNGZ][0] = 0;
                Mu85MDWG[eKdveVNhlP]++;
            };
        };
    }
    for (eKdveVNhlP = 0; eKdveVNhlP < kd7sxzYELifP - n + 1; eKdveVNhlP = eKdveVNhlP + 1) {
        if (Mu85MDWG[eKdveVNhlP] > paxSrDitUT)
            paxSrDitUT = Mu85MDWG[eKdveVNhlP];
    }
    if (paxSrDitUT == 0)
        printf ("NO");
    else {
        printf ("%d\n", paxSrDitUT + 1);
        for (eKdveVNhlP = 0; eKdveVNhlP < kd7sxzYELifP - n + 1; eKdveVNhlP++) {
            if (Mu85MDWG[eKdveVNhlP] == paxSrDitUT)
                printf ("%s\n", use[eKdveVNhlP]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    };
}

