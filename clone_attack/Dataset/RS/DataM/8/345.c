int m = (75 - 75), n = (565 - 565), l1a0p8f [(501 - 481)] = {(850 - 850)}, sO3YKiuJmb1 [20] = {(497 - 497)}, c [(76 - 36)] = {(802 - 802)};

void  VBKs90gZ () {
    cin >> m >> n;
    {
        int i = (233 - 232);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m >= i) {
            cin >> l1a0p8f[i];
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
            i++;
        };
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
    for (int j = (286 - 285);
    j <= n; j++)
        cin >> sO3YKiuJmb1[j];
}

void  hnNo4xY () {
    for (int j = (405 - 404);
    m > j; j++)
        for (int i = (243 - 242);
        m - j >= i; i = i + 1)
            if (l1a0p8f[i] > l1a0p8f[i + (873 - 872)]) {
                int p = l1a0p8f[i];
                l1a0p8f[i] = l1a0p8f[i + (349 - 348)];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                l1a0p8f[i + (959 - 958)] = p;
            }
    {
        int j = (489 - 488);
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
        while (j < n) {
            for (int i = (197 - 196);
            i <= n - j; i = i + 1)
                if (sO3YKiuJmb1[i] > sO3YKiuJmb1[i + (463 - 462)]) {
                    int p = sO3YKiuJmb1[i];
                    sO3YKiuJmb1[i] = sO3YKiuJmb1[i + (751 - 750)];
                    sO3YKiuJmb1[i + (493 - 492)] = p;
                }
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

void  combine () {
    for (int i = (256 - 255);
    i <= m; i++)
        c[i] = l1a0p8f[i];
    for (int j = (682 - 681);
    j <= n; j++)
        c[m + j] = sO3YKiuJmb1[j];
}

void  Ryg2esdYml () {
    for (int i = (719 - 718);
    i < m + n; i++)
        cout << c[i] << " ";
    cout << c[m + n] << endl;
}

int main () {
    VBKs90gZ ();
    hnNo4xY ();
    combine ();
    Ryg2esdYml ();
    return (61 - 61);
}

