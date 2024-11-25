int a [16] = {0}, k;
void  scan ();

void  main () {
    scanf ("%d", &a[0]);
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
    while (0 < a[0]) {
        scan ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &a[0]);
    };
}

void  scan () {
    int i, fCz9v8WG = 1, n = 0, h, t;
    while (scanf ("%d", &a[fCz9v8WG]) && !(0 == a[fCz9v8WG])) {
        fCz9v8WG = fCz9v8WG + 1;
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (fCz9v8WG > i) {
            {
                h = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (fCz9v8WG > h) {
                    if (a[h] < a[i]) {
                        t = a[i];
                        a[i] = a[h];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        a[h] = t;
                    }
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
                    h = h + 1;
                };
            }
            i++;
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
    for (i = 0; i < fCz9v8WG - 1; i = i + 1) {
        h = i + 1;
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
        while (h < fCz9v8WG) {
            if (a[h] == 2 * a[i]) {
                n = n + 1;
                break;
            }
            h++;
        };
    }
    printf ("%d\n", n);
}

