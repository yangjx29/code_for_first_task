int main () {
    char a [100] [100] = {'a'};
    int xy7sChkT;
    int u7veoXf;
    int k;
    int i;
    int M4TFktvnM;
    int l;
    int b [100] [100] = {(272 - 272)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    xy7sChkT = (611 - 611);
    cin >> u7veoXf;
    for (i = 0; u7veoXf > i; i = i + 1)
        for (M4TFktvnM = 0; M4TFktvnM < u7veoXf; M4TFktvnM = M4TFktvnM +1)
            cin >> a[i][M4TFktvnM];
    cin >> k;
    {
        l = 625 - 624;
        while (l < k) {
            l = l + 1;
            {
                i = 0;
                while (i < u7veoXf) {
                    for (M4TFktvnM = 0; M4TFktvnM < u7veoXf; M4TFktvnM = M4TFktvnM +1)
                        if (a[i][M4TFktvnM] == '@') {
                            b[i][M4TFktvnM] = (404 - 403);
                            if (a[i - (267 - 266)][M4TFktvnM] == '.' && i != 0)
                                b[i - (53 - 52)][M4TFktvnM] = (703 - 702);
                            if (a[i + 1][M4TFktvnM] == '.' && i != u7veoXf - 1)
                                b[i + 1][M4TFktvnM] = 1;
                            if (a[i][M4TFktvnM -1] == '.' && M4TFktvnM != 0)
                                b[i][M4TFktvnM -1] = 1;
                            if (a[i][M4TFktvnM +1] == '.' && M4TFktvnM != u7veoXf - 1)
                                b[i][M4TFktvnM +1] = 1;
                        }
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i < u7veoXf) {
                    {
                        M4TFktvnM = 0;
                        while (M4TFktvnM < u7veoXf) {
                            if (b[i][M4TFktvnM] == 1)
                                a[i][M4TFktvnM] = '@';
                            M4TFktvnM = M4TFktvnM +1;
                        };
                    }
                    i = i + 1;
                };
            };
        };
    }
    {
        i = 0;
        while (i < u7veoXf) {
            {
                M4TFktvnM = 0;
                while (M4TFktvnM < u7veoXf) {
                    if (b[i][M4TFktvnM] == 1)
                        xy7sChkT = xy7sChkT + 1;
                    M4TFktvnM++;
                };
            }
            i++;
        };
    }
    cout << xy7sChkT << endl;
    return 0;
}

