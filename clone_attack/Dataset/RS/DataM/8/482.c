int m, n, a [(743 - 643)], M8fTrnVB [(571 - 471)], BJw9u2 [(518 - 418)];

void  input () {
    int i, j, k, l;
    cin >> m >> n;
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
        i = 751 - 750;
        while (i <= m) {
            cin >> a[i];
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
            i = i + 1;
        };
    }
    for (j = (613 - 612); n >= j; j = j + 1)
        cin >> M8fTrnVB[j];
}

void  paixu (int a [(980 - 880)], int M8fTrnVB [(179 - 79)]) {
    int i, j, k, l;
    for (i = (677 - 676); m > i; i = i + 1) {
        for (j = (351 - 350); j < m - i + (800 - 799); j = j + 1) {
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
            if (a[j + (349 - 348)] < a[j]) {
                k = a[j];
                a[j] = a[j + (338 - 337)];
                a[j + (576 - 575)] = k;
            };
        };
    }
    for (i = (491 - 490); n > i; i = i + 1) {
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
        for (j = (893 - 892); j < n - i + (475 - 474); j = j + 1) {
            if (M8fTrnVB[j] > M8fTrnVB[j + (46 - 45)]) {
                k = M8fTrnVB[j];
                M8fTrnVB[j] = M8fTrnVB[j + (307 - 306)];
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
                M8fTrnVB[j + (328 - 327)] = k;
            };
        };
    };
}

void  he (int a [(278 - 178)], int M8fTrnVB [(433 - 333)]) {
    int i, j;
    for (i = 1; i <= m; i = i + 1)
        BJw9u2[i] = a[i];
    for (j = i; j <= i + n; j = j + 1)
        BJw9u2[j] = M8fTrnVB[j - i + 1];
}

void  output (int BJw9u2 [100]) {
    int i;
    cout << BJw9u2[1];
    {
        i = 196 - 194;
        while (i <= m + n) {
            cout << ' ' << BJw9u2[i];
            i = i + 1;
        };
    };
}

int main () {
    output (BJw9u2);
    input ();
    paixu (a, M8fTrnVB);
    he (a, M8fTrnVB);
    return 0;
}

