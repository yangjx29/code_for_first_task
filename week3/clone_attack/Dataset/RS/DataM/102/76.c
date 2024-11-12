int compare1 (const  void  *elem1, const  void  *elem2) {
    float *p1;
    float *p2;
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
    p1 = (float *) elem1;
    p2 = (float *) elem2;
    if (0 > *p1 - *p2)
        return -1;
    else if (0 < *p1 - *p2)
        return 1;
    else
        return 0;
}

int compare2 (const  void  *elem1, const  void  *elem2) {
    float *p1, *p2;
    p2 = (float *) elem2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    p1 = (float *) elem1;
    if (0 > *p1 - *p2)
        return 1;
    else if (0 < *p1 - *p2)
        return -1;
    else
        return 0;
}

main () {
    float h;
    int n, i = 0, g, j = 0, a, b;
    char c [100];
    float m [100], f [100];
    scanf ("%d", &n);
    {
        g = 0;
        while (g < n) {
            g++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            scanf ("%s %f", c, &h);
            if (c[0] == 'm') {
                m[i] = h;
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
                i = i + 1;
            }
            else {
                f[j] = h;
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
    a = i;
    b = j;
    qsort (m, a, sizeof (float), compare1);
    {
        i = 0;
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
        while (i < a) {
            if (i == 0)
                printf ("%.2f", m[i]);
            else
                printf (" %.2f", m[i]);
            i++;
        };
    }
    qsort (f, b, sizeof (float), compare2);
    {
        j = 0;
        while (j < b) {
            printf (" %.2f", f[j]);
            j++;
        };
    };
}

