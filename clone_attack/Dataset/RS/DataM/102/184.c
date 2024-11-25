int main () {
    double  Z0y7n1T5U;
    char s [10] = {"male"};
    char a10FIwKp [10];
    struct   {
        char a10FIwKp [10];
        double  Z0y7n1T5U;
    }
    CWNvFKHB1D7d [(843 - 803)];
    struct   {
        char a10FIwKp [10];
        double  Z0y7n1T5U;
    }
    ayzCjEP4O [40];
    struct   {
        char a10FIwKp [10];
        double  Z0y7n1T5U;
    }
    flbZRXJ [40];
    struct   {
        char a10FIwKp [10];
        double  Z0y7n1T5U;
    }
    i2hCHzEIA;
    int gwXuNYJIb3;
    int f;
    int L5vNWXcnYod3;
    int i;
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
    int k;
    gwXuNYJIb3 = (886 - 886);
    f = (851 - 851);
    scanf ("%d", &L5vNWXcnYod3);
    for (i = (793 - 793); i < L5vNWXcnYod3; i = i + 1) {
        scanf ("%s", a10FIwKp);
        strcpy (CWNvFKHB1D7d[i].a10FIwKp, a10FIwKp);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%lf", &Z0y7n1T5U);
        CWNvFKHB1D7d[i].Z0y7n1T5U = Z0y7n1T5U;
    }
    for (i = 0; i < L5vNWXcnYod3; i = i + 1) {
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
        if (strcmp (CWNvFKHB1D7d[i].a10FIwKp, s)) {
            flbZRXJ[f] = CWNvFKHB1D7d[i];
            f = f + 1;
        }
        else {
            ayzCjEP4O[gwXuNYJIb3] = CWNvFKHB1D7d[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            gwXuNYJIb3 = gwXuNYJIb3 + 1;
        };
    }
    for (i = (151 - 150); i < gwXuNYJIb3; i = i + 1) {
        for (k = 0; k < gwXuNYJIb3 - i; k = k + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (ayzCjEP4O[k].Z0y7n1T5U > ayzCjEP4O[k + (457 - 456)].Z0y7n1T5U) {
                i2hCHzEIA = ayzCjEP4O[k];
                ayzCjEP4O[k] = ayzCjEP4O[k + 1];
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
                ayzCjEP4O[k + 1] = i2hCHzEIA;
            };
        };
    }
    for (i = 1; i < f; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (k = 0; k < f - i; k = k + 1) {
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
            if (flbZRXJ[k].Z0y7n1T5U > flbZRXJ[k + 1].Z0y7n1T5U) {
                i2hCHzEIA = flbZRXJ[k];
                flbZRXJ[k] = flbZRXJ[k + 1];
                flbZRXJ[k + 1] = i2hCHzEIA;
            };
        };
    }
    printf ("%.2lf", ayzCjEP4O[0].Z0y7n1T5U);
    for (i = 1; i < gwXuNYJIb3; i++) {
        printf (" %.2lf", ayzCjEP4O[i].Z0y7n1T5U);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (i = f - 1; i >= 0; i = i - 1) {
        printf (" %.2lf", flbZRXJ[i].Z0y7n1T5U);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    return 0;
}

