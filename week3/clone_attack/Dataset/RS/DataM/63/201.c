int main () {
    int x1, y1, x2, y2, a [(364 - 264)] [(971 - 871)], b [100] [100], c [100] [100], i, j, k;
    cin >> x1 >> y1;
    {
        i = 42 - 42;
        while (x1 > i) {
            {
                j = 810 - 810;
                while (y1 > j) {
                    cin >> a[i][j];
                    j = j + 1;
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
            i = i + 1;
        };
    }
    cin >> x2 >> y2;
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
        i = 703 - 703;
        while (x2 > i) {
            {
                j = 230 - 230;
                while (y2 > j) {
                    cin >> b[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 700 - 700;
        while (x1 > i) {
            for (j = 0; j < y2; j = j + 1) {
                c[i][j] = 0;
                {
                    k = 0;
                    while (k < y1) {
                        c[i][j] += a[i][k] * b[k][j];
                        k = k + 1;
                    };
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (x1 > i) {
            cout << c[i][0];
            {
                j = 1;
                while (j < y2) {
                    cout << " " << c[i][j];
                    j++;
                };
            }
            i = i + 1;
            cout << endl;
        };
    }
    return 0;
}

