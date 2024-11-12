int main () {
    int c [(1008 - 908)] [100] = {(569 - 569)};
    int b [(139 - 39)] [(343 - 243)] = {(887 - 887)};
    int a [(1028 - 928)] [(356 - 256)] = {(598 - 598)};
    int i;
    int j;
    int k;
    int x1;
    int x2;
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
    int y1;
    int y2;
    cin >> x1 >> y1;
    for (i = (251 - 251); x1 > i; i = i + 1)
        for (j = (470 - 470); j < y1; j = j + 1)
            cin >> a[i][j];
    cin >> x2 >> y2;
    for (i = (19 - 19); i < x2; i = i + 1)
        for (j = (642 - 642); y2 > j; j++)
            cin >> b[i][j];
    for (i = (478 - 478); x1 > i; i++) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (y2 > j) {
            for (k = 0; k < y1; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            j = j + 1;
        };
    }
    for (i = 0; x1 > i; i++) {
        j = 0;
        while (y2 > j) {
            cout << c[i][j];
            if (j != y2 - (43 - 42))
                cout << ' ';
            else
                cout << endl;
            j = j + 1;
        };
    }
    return 0;
}

