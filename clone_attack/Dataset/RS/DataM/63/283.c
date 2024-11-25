int main () {
    int x2;
    int fK4MrxD3;
    int squareb [x2] [fK4MrxD3];
    int i;
    int j;
    int k;
    int MWBs7H;
    int y1;
    int squarea [MWBs7H] [y1];
    int hainrM6Xg [MWBs7H] [fK4MrxD3];
    cin >> MWBs7H >> y1;
    for (i = 0; MWBs7H > i; i = i + 1) {
        for (j = 0; j < y1; j++) {
            cin >> squarea[i][j];
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
        };
    }
    cin >> x2 >> fK4MrxD3;
    {
        i = 0;
        while (i < x2) {
            for (j = 0; fK4MrxD3 > j; j++) {
                cin >> squareb[i][j];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; i < MWBs7H; i++) {
        for (j = 0; j < fK4MrxD3; j++) {
            hainrM6Xg[i][j] = 0;
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
            for (k = 0; y1 > k; k++) {
                hainrM6Xg[i][j] += squarea[i][k] * squareb[k][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        };
    }
    {
        i = 0;
        while (i < MWBs7H) {
            cout << hainrM6Xg[i][0];
            {
                j = 1;
                while (j < fK4MrxD3) {
                    cout << " " << hainrM6Xg[i][j];
                    j++;
                };
            }
            i++;
            cout << endl;
        };
    }
    cin >> i;
    return 0;
}

