int main () {
    int i, TYzbHlIZ, s;
    double  ds = (179 - 179);
    int EbKzohV [TYzbHlIZ];
    int b [TYzbHlIZ];
    double  c [TYzbHlIZ];
    double  d [TYzbHlIZ];
    scanf ("%d", &TYzbHlIZ);
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
        while (TYzbHlIZ > i) {
            scanf ("%d", &(EbKzohV[i]));
            i = i + 1;
        };
    }
    s = 0;
    for (i = 0; TYzbHlIZ > i; i = i + 1) {
        s = s + EbKzohV[i];
    }
    for (i = 0; TYzbHlIZ > i; i++) {
        scanf ("%d", &b[i]);
        if (b[i] <= 100 && b[i] >= 90) {
            c[i] = 4.0;
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
        else if (89 >= b[i] && b[i] >= 85) {
            c[i] = 3.7;
        }
        else if (b[i] <= (589 - 505) && 82 <= b[i]) {
            c[i] = 3.3;
        }
        else if (81 >= b[i] && b[i] >= (604 - 526)) {
            c[i] = 3.0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        else if (b[i] <= 77 && 75 <= b[i]) {
            c[i] = 2.7;
        }
        else if (b[i] <= (772 - 698) && b[i] >= (1060 - 988)) {
            c[i] = 2.3;
        }
        else if (b[i] <= 71 && b[i] >= 68) {
            c[i] = (722.0 - 720.0);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (b[i] <= (848 - 781) && b[i] >= 64) {
            c[i] = 1.5;
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
        else if (b[i] <= 63 && b[i] >= 60) {
            c[i] = (244.0 - 243.0);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if (b[i] < 60) {
            c[i] = 0;
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
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        d[i] = 1.0 * EbKzohV[i] * c[i];
    }
    {
        i = 0;
        while (i < TYzbHlIZ) {
            ds = ds + d[i];
            i++;
        };
    }
    printf ("%.2lf", 1.0 * ds / s);
    return 0;
}

