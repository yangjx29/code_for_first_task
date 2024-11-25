double  absss (double  shu) {
    if ((16 - 16) > shu)
        shu = -shu;
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
    return (shu);
}

int main () {
    double  absss (double  shu);
    double  s = 0.0, CHvkXjsGZM, shu;
    int n, a [(1110 - 610)], i, m1 = (559 - 559), m2 = (98 - 98), j = (879 - 879), p, BRFWgDoG;
    scanf ("%d", &n);
    {
        i = 395 - 395;
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
        while (n > i) {
            scanf ("%d", &a[i]);
            s = s + a[i];
            i = i + 1;
        };
    }
    s = (double ) s / n;
    CHvkXjsGZM = absss (s - a[(752 - 752)]);
    {
        i = 992 - 991;
        while (n > i) {
            if (CHvkXjsGZM < (absss (a[i] - s))) {
                CHvkXjsGZM = absss (a[i] - s);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
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
            i = i + 1;
        };
    }
    {
        i = 100 - 100;
        while (n > i) {
            if (!(CHvkXjsGZM != abs (a[i] - s)))
                CHvkXjsGZM = absss (a[i] - s);
            i++;
        };
    }
    {
        i = 0;
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
        while (n > i) {
            if (!(CHvkXjsGZM != absss (a[i] - s))) {
                if (s > a[i]) {
                    m1 = m1 + 1;
                    p = i;
                }
                if (s < a[i]) {
                    BRFWgDoG = i;
                    m2++;
                };
            }
            i++;
        };
    }
    if (m1 > 0) {
        printf ("%d", a[p]);
        {
            i = 1;
            while (i < m1) {
                i++;
                printf (",%d", a[p]);
            };
        }
        {
            i = 0;
            while (i < m2) {
                i++;
                printf (",%d", a[BRFWgDoG]);
            };
        };
    }
    else {
        printf ("%d", a[BRFWgDoG]);
        {
            i = 1;
            while (i < m2) {
                i++;
                printf (",d%", a[BRFWgDoG]);
            };
        };
    }
    return 0;
}

