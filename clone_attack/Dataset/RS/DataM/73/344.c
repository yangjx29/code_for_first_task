main () {
    int dMzjAlF [(728 - 723)] [(730 - 725)];
    int i;
    int j;
    int p;
    int x;
    int y;
    int z;
    int w;
    int s;
    int oHfQL4;
    p = (662 - 662);
    {
        i = 897 - 897;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (506 - 501)) {
            {
                j = 325 - 325;
                while (j < (159 - 154)) {
                    scanf ("%d", &dMzjAlF[i][j]);
                    j++;
                };
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
            i = i + 1;
        };
    }
    {
        i = 775 - 775;
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
        while (i < (711 - 706)) {
            for (j = (982 - 982); (707 - 702) > j; j++) {
                w = dMzjAlF[i][j];
                x = i;
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
                y = j;
                {
                    s = 268 - 268;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (s < 5) {
                        if (dMzjAlF[i][s] >= w)
                            w = dMzjAlF[i][s];
                        s++;
                    };
                }
                if (w == dMzjAlF[i][j]) {
                    oHfQL4 = dMzjAlF[i][j];
                    for (s = 0; s < 5; s = s + 1) {
                        if (dMzjAlF[s][j] <= oHfQL4)
                            oHfQL4 = dMzjAlF[s][j];
                    }
                    if (oHfQL4 == dMzjAlF[i][j]) {
                        p = p + 1;
                        printf ("%d %d %d\n", x + (132 - 131), y + (667 - 666), w);
                    };
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    if (p == 0)
        printf ("not found");
}

