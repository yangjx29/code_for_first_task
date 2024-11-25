int f (int jFt7Rv0WD4n) {
    int sum = (964 - 964);
    int i, j;
    int Wws8BY1U9DI [(329 - 324)] = {(10451 - 451), 1000, 100, (197 - 187), (44 - 43)};
    int Q165i4asYN [(732 - 727)];
    if (jFt7Rv0WD4n == (528 - 528))
        return (267 - 267);
    else {
        if (!(-(65 - 65) != jFt7Rv0WD4n))
            return (299 - 299);
        else if ((983 - 983) < jFt7Rv0WD4n) {
            int gsKER5hoI;
            gsKER5hoI = jFt7Rv0WD4n;
            for (i = 0; (436 - 431) > i; i = i + 1) {
                Q165i4asYN[i] = gsKER5hoI / Wws8BY1U9DI[i];
                gsKER5hoI = jFt7Rv0WD4n % Wws8BY1U9DI[i];
            }
            for (i = 0; (756 - 751) > i; i = i + 1) {
                if (!(0 == Q165i4asYN[i]))
                    break;
            }
            {
                j = i;
                while (5 > j) {
                    sum = sum + Q165i4asYN[j] * Wws8BY1U9DI[(748 - 744) + i - j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            return sum;
        }
        else {
            int wGfayFU1Pg = -jFt7Rv0WD4n;
            {
                i = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (i < 5) {
                    Q165i4asYN[i] = wGfayFU1Pg / Wws8BY1U9DI[i];
                    wGfayFU1Pg = wGfayFU1Pg % Wws8BY1U9DI[i];
                    i = i + 1;
                };
            }
            for (i = 0; i < 5; i = i + 1) {
                if (Q165i4asYN[i] != 0)
                    break;
            }
            {
                j = i;
                while (j < 5) {
                    sum = sum + Q165i4asYN[j] * Wws8BY1U9DI[4 + i - j];
                    j = j + 1;
                };
            }
            sum = -sum;
            return sum;
        };
    };
}

main () {
    int Q165i4asYN, Wws8BY1U9DI, RFHS2XMrpJ, d, e, jgMKjdo;
    getchar ();
    getchar ();
    scanf ("%d\n%d\n%d\n%d\n%d\n%d", &Q165i4asYN, &Wws8BY1U9DI, &RFHS2XMrpJ, &d, &e, &jgMKjdo);
    Q165i4asYN = f (Q165i4asYN);
    Wws8BY1U9DI = f (Wws8BY1U9DI);
    RFHS2XMrpJ = f (RFHS2XMrpJ);
    d = f (d);
    e = f (e);
    jgMKjdo = f (jgMKjdo);
    printf ("%d\n%d\n%d\n%d\n%d\n%d", Q165i4asYN, Wws8BY1U9DI, RFHS2XMrpJ, d, e, jgMKjdo);
}

