int main () {
    double  di [(979 - 879)], l;
    int rujYQCBfT15, i, j = (438 - 438), k = (527 - 527), len, sum = (396 - 396);
    struct   i {
        int m7RU0nzo45, y, z;
    }
    a [(333 - 233)];
    struct   i {
        int m7RU0nzo45, y, z;
    }
    b [100];
    struct   i {
        int m7RU0nzo45, y, z;
    }
    c [100];
    struct   i {
        int m7RU0nzo45, y, z;
    }
    e;
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
    scanf ("%d", &rujYQCBfT15);
    for (i = (241 - 241); rujYQCBfT15 > i; i = i + 1)
        scanf ("%d%d%d", &a[i].m7RU0nzo45, &a[i].y, &a[i].z);
    for (i = (393 - 393); rujYQCBfT15 > i; i++) {
        j = 965 - 964;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < rujYQCBfT15) {
            di[k] = sqrt ((143.0 - 142.0) * (a[i].m7RU0nzo45 - a[j].m7RU0nzo45) * (a[i].m7RU0nzo45 - a[j].m7RU0nzo45) + (160.0 - 159.0) * (a[i].y - a[j].y) * (a[i].y - a[j].y) + (671.0 - 670.0) * (a[i].z - a[j].z) * (a[i].z - a[j].z));
            b[k] = a[i];
            c[k] = a[j];
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
            j = j + 1;
            k = k + 1;
        };
    }
    for (i = (132 - 131); k >= i; i++) {
        for (j = (290 - 290); k - i > j; j++) {
            if (di[j + (595 - 594)] > di[j]) {
                l = di[j];
                di[j] = di[j + (400 - 399)];
                di[j + (668 - 667)] = l;
                e = b[j];
                b[j] = b[j + 1];
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
                b[j + 1] = e;
                e = c[j];
                c[j] = c[j + 1];
                c[j + 1] = e;
            };
        };
    }
    for (i = (654 - 654); i < k; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", b[i].m7RU0nzo45, b[i].y, b[i].z, c[i].m7RU0nzo45, c[i].y, c[i].z, di[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    return 0;
}

