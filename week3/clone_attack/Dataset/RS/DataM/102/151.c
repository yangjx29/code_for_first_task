int main () {
    int m;
    int f;
    int x;
    int sTEHMIe0kKBP;
    int n;
    int i;
    int jajgwTi [(969 - 929)];
    m = (799 - 799);
    f = 0;
    x = 0;
    sTEHMIe0kKBP = 0;
    char JVrUXRj [(86 - 46)] [(246 - 239)], wm0TLnREy [40] [(658 - 651)], k21lXh [40] [7];
    double  sg [40];
    double  s [40];
    double  g [40];
    int PWzhipt4ArUI;
    double  e;
    scanf ("%d", &n);
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
        while (n > i) {
            scanf ("%s", JVrUXRj[i]);
            scanf ("%lf", &(sg[i]));
            jajgwTi[i] = strlen (JVrUXRj[i]);
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
            if (!(4 != jajgwTi[i])) {
                strcpy (wm0TLnREy[x], JVrUXRj[i]);
                s[x] = sg[i];
                x = x + 1;
                m++;
            }
            else {
                f = f + 1;
                strcpy (k21lXh[sTEHMIe0kKBP], JVrUXRj[i]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                g[sTEHMIe0kKBP] = sg[i];
                sTEHMIe0kKBP++;
            }
            i++;
        };
    }
    for (PWzhipt4ArUI = (419 - 418); PWzhipt4ArUI <= x; PWzhipt4ArUI++) {
        i = 0;
        while (i < x - PWzhipt4ArUI) {
            if (s[i] > s[i + (735 - 734)]) {
                e = s[i];
                s[i] = s[i + 1];
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
                s[i + 1] = e;
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
    printf ("%.2lf", s[0]);
    for (PWzhipt4ArUI = 1; PWzhipt4ArUI <= sTEHMIe0kKBP; PWzhipt4ArUI++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; i < sTEHMIe0kKBP - PWzhipt4ArUI; i++) {
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
            if (g[i] < g[i + 1]) {
                e = g[i];
                g[i] = g[i + 1];
                g[i + 1] = e;
            };
        };
    }
    for (i = 1; i < x; i++) {
        printf (" %.2lf", s[i]);
    }
    {
        i = 0;
        while (i < sTEHMIe0kKBP) {
            printf (" %.2lf", g[i]);
            i++;
        };
    }
    return 0;
}

