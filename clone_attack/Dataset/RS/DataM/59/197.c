void  main () {
    int dDIsdxKE2WGV, o1RKyg = 0, B6JD8hTS, gXVL6F8b, LZtYsqWy, day;
    char c;
    char AgUXHw [101] [101] = {'\0'}, eYwLTGrM [101] [101];
    scanf ("%d", &dDIsdxKE2WGV);
    scanf ("%d", &day);
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
    for (B6JD8hTS = 0; B6JD8hTS < dDIsdxKE2WGV; B6JD8hTS++) {
        c = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (gXVL6F8b = 0; gXVL6F8b < dDIsdxKE2WGV; gXVL6F8b = gXVL6F8b + 1)
            AgUXHw[B6JD8hTS][gXVL6F8b] = getchar ();
    }
    {
        LZtYsqWy = 1;
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
        while (LZtYsqWy < day) {
            LZtYsqWy = LZtYsqWy +1;
            {
                B6JD8hTS = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (B6JD8hTS < dDIsdxKE2WGV) {
                    {
                        gXVL6F8b = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        while (gXVL6F8b < dDIsdxKE2WGV) {
                            if (AgUXHw[B6JD8hTS][gXVL6F8b] != '.')
                                eYwLTGrM[B6JD8hTS][gXVL6F8b] = AgUXHw[B6JD8hTS][gXVL6F8b];
                            else if (AgUXHw[B6JD8hTS +1][gXVL6F8b] == '@' || AgUXHw[B6JD8hTS -1][gXVL6F8b] == '@' || !('@' != AgUXHw[B6JD8hTS][gXVL6F8b + 1]) || AgUXHw[B6JD8hTS][gXVL6F8b - 1] == '@')
                                eYwLTGrM[B6JD8hTS][gXVL6F8b] = '@';
                            else
                                eYwLTGrM[B6JD8hTS][gXVL6F8b] = '.';
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
                            gXVL6F8b = gXVL6F8b + 1;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    B6JD8hTS = B6JD8hTS +1;
                };
            }
            {
                B6JD8hTS = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (B6JD8hTS < dDIsdxKE2WGV) {
                    for (gXVL6F8b = 0; gXVL6F8b < dDIsdxKE2WGV; gXVL6F8b = gXVL6F8b + 1) {
                        AgUXHw[B6JD8hTS][gXVL6F8b] = eYwLTGrM[B6JD8hTS][gXVL6F8b];
                    }
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
                    B6JD8hTS = B6JD8hTS +1;
                };
            };
        };
    }
    {
        B6JD8hTS = 0;
        while (B6JD8hTS < dDIsdxKE2WGV) {
            {
                gXVL6F8b = 0;
                while (gXVL6F8b < dDIsdxKE2WGV) {
                    if (AgUXHw[B6JD8hTS][gXVL6F8b] == '@')
                        o1RKyg = o1RKyg + 1;
                    gXVL6F8b = gXVL6F8b + 1;
                };
            }
            B6JD8hTS++;
        };
    }
    printf ("%d\n", o1RKyg);
}

