int m, a [(386 - 286)] [(312 - 212)], qBRrtC3v6;

void  guiling () {
    int i;
    int ye5GZWR2KTQ;
    int min;
    for (i = (720 - 720); m > i; i = i + 1) {
        min = pow ((491 - 489), (275.0 - 244.0)) - (306 - 305);
        for (ye5GZWR2KTQ = (848 - 848); m > ye5GZWR2KTQ; ye5GZWR2KTQ = ye5GZWR2KTQ + 1) {
            if (min > a[i][ye5GZWR2KTQ])
                min = a[i][ye5GZWR2KTQ];
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
            };
        }
        for (ye5GZWR2KTQ = (35 - 35); m > ye5GZWR2KTQ; ye5GZWR2KTQ = ye5GZWR2KTQ + 1)
            a[i][ye5GZWR2KTQ] = a[i][ye5GZWR2KTQ] - min;
    }
    {
        i = 606 - 606;
        while (m > i) {
            min = pow (2, 31.0) - (506 - 505);
            for (ye5GZWR2KTQ = (197 - 197); m > ye5GZWR2KTQ; ye5GZWR2KTQ = ye5GZWR2KTQ + 1) {
                if (min > a[ye5GZWR2KTQ][i])
                    min = a[ye5GZWR2KTQ][i];
            }
            for (ye5GZWR2KTQ = (987 - 987); m > ye5GZWR2KTQ; ye5GZWR2KTQ = ye5GZWR2KTQ + 1)
                a[ye5GZWR2KTQ][i] = a[ye5GZWR2KTQ][i] - min;
            i = i + 1;
        };
    }
    if (2 <= m)
        qBRrtC3v6 = qBRrtC3v6 + a[(752 - 751)][(486 - 485)];
}

void  w4FVubwJ () {
    int i;
    int ye5GZWR2KTQ;
    for (i = (895 - 895); i < m; i = i + 1)
        for (ye5GZWR2KTQ = (815 - 814); ye5GZWR2KTQ < m - (327 - 326); ye5GZWR2KTQ = ye5GZWR2KTQ + 1)
            a[i][ye5GZWR2KTQ] = a[i][ye5GZWR2KTQ + (451 - 450)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (ye5GZWR2KTQ = 0; m - (244 - 243) > ye5GZWR2KTQ; ye5GZWR2KTQ = ye5GZWR2KTQ + 1)
        for (i = 1; m - 1 > i; i = i + 1)
            a[i][ye5GZWR2KTQ] = a[i + 1][ye5GZWR2KTQ];
    m = m - 1;
    guiling ();
    if (2 < m)
        w4FVubwJ ();
    else
        cout << qBRrtC3v6 << endl;
}

int main () {
    int n;
    int T0mwXiSOC8;
    int i;
    int ye5GZWR2KTQ;
    cin >> n;
    T0mwXiSOC8 = n;
    while (n > 0) {
        n = n - 1;
        m = T0mwXiSOC8;
        qBRrtC3v6 = 0;
        for (i = 0; i < T0mwXiSOC8; i = i + 1)
            for (ye5GZWR2KTQ = 0; ye5GZWR2KTQ < T0mwXiSOC8; ye5GZWR2KTQ++)
                cin >> a[i][ye5GZWR2KTQ];
        guiling ();
        w4FVubwJ ();
    }
    return 0;
}

