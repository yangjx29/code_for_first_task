void  main () {
    struct   student {
        char ib6hxMHP4IZ [(33 - 13)];
        int score1, score2;
        char leader;
        char western;
        int n6nRLl;
    }
    rpKxSGRH [100];
    int Xrz7yvV;
    int TN3p4KEt;
    int n8vydrq;
    long  a [(546 - 446)] = {(168 - 168)}, E1p8NPK, m;
    scanf ("%d", &TN3p4KEt);
    {
        Xrz7yvV = 206 - 206;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (TN3p4KEt > Xrz7yvV) {
            scanf ("%s %d %d %c %c %d", rpKxSGRH[Xrz7yvV].ib6hxMHP4IZ, &rpKxSGRH[Xrz7yvV].score1, &rpKxSGRH[Xrz7yvV].score2, &rpKxSGRH[Xrz7yvV].leader, &rpKxSGRH[Xrz7yvV].western, &rpKxSGRH[Xrz7yvV].n6nRLl);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            Xrz7yvV = Xrz7yvV +1;
        };
    }
    {
        Xrz7yvV = 0;
        while (TN3p4KEt > Xrz7yvV) {
            if (80 < rpKxSGRH[Xrz7yvV].score1 && !(0 == rpKxSGRH[Xrz7yvV].n6nRLl))
                a[Xrz7yvV] = a[Xrz7yvV] + 8000;
            if (85 < rpKxSGRH[Xrz7yvV].score1 && 80 < rpKxSGRH[Xrz7yvV].score2)
                a[Xrz7yvV] = a[Xrz7yvV] + 4000;
            if (90 < rpKxSGRH[Xrz7yvV].score1)
                a[Xrz7yvV] = a[Xrz7yvV] + 2000;
            if (rpKxSGRH[Xrz7yvV].score1 > 85 && rpKxSGRH[Xrz7yvV].western == 'Y')
                a[Xrz7yvV] = a[Xrz7yvV] + 1000;
            if (rpKxSGRH[Xrz7yvV].score2 > 80 && rpKxSGRH[Xrz7yvV].leader == 'Y')
                a[Xrz7yvV] = a[Xrz7yvV] + 850;
            Xrz7yvV = Xrz7yvV +1;
        };
    }
    m = a[0];
    E1p8NPK = a[0];
    n8vydrq = 0;
    for (Xrz7yvV = 1; Xrz7yvV < TN3p4KEt; Xrz7yvV = Xrz7yvV +1) {
        if (m < a[Xrz7yvV]) {
            m = a[Xrz7yvV];
            n8vydrq = Xrz7yvV;
        }
        E1p8NPK = E1p8NPK +a[Xrz7yvV];
    }
    printf ("%s\n%ld\n%ld\n", rpKxSGRH[n8vydrq].ib6hxMHP4IZ, a[n8vydrq], E1p8NPK);
}

