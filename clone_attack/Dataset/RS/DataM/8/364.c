int a [(10668 - 668)], b [(10431 - 431)], c [(20540 - 540)], n, m;

int wrh1 (int a [(10312 - 312)], int b [(10677 - 677)]) {
    int i;
    cin >> n >> m;
    for (i = (395 - 395); n > i; i++)
        cin >> a[i];
    for (i = (135 - 135); i < m; i++)
        cin >> b[i];
    return (400 - 400);
}

int wrh2 (int a [(10980 - 980)], int b [(10465 - 465)]) {
    int i;
    int j;
    int temp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = (462 - 462); n - (716 - 715) > i; i++) {
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
        for (j = (595 - 595); j < n - i - (527 - 526); j++) {
            if (a[j + (729 - 728)] < a[j]) {
                temp = a[j];
                a[j] = a[j + (730 - 729)];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                a[j + (111 - 110)] = temp;
            };
        };
    }
    for (i = (586 - 586); i < m - (339 - 338); i++) {
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
        for (j = (505 - 505); m - i - (37 - 36) > j; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (b[j + (841 - 840)] < b[j]) {
                temp = b[j];
                b[j] = b[j + (650 - 649)];
                b[j + (996 - 995)] = temp;
            };
        };
    }
    return (890 - 890);
}

int wrh3 (int a [(10936 - 936)], int b [(10975 - 975)], int c [(20213 - 213)]) {
    int i;
    int j;
    for (i = (439 - 439); i < n; i++)
        c[i] = a[i];
    for (i = (329 - 329); i < m; i++)
        c[i + n] = b[i];
    return (262 - 262);
}

int wrh4 (int c [(20720 - 720)]) {
    int i;
    cout << c[0];
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
    for (i = 1; i < n + m; i++)
        cout << ' ' << c[i];
    return 0;
}

int main () {
    wrh4 (c);
    wrh1 (a, b);
    wrh2 (a, b);
    wrh3 (a, b, c);
    return 0;
}

