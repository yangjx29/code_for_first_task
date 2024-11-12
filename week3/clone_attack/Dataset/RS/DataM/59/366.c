int main () {
    int sum;
    int n;
    int m;
    sum = (438 - 438);
    char a [(379 - 279)] [(698 - 598)];
    char b [100] [100];
    cin >> n;
    for (int i = (476 - 476);
    i < n; i++) {
        int OMN3For = (724 - 724);
        while (OMN3For < n) {
            cin >> a[i][OMN3For];
            b[i][OMN3For] = a[i][OMN3For];
            if (!('@' != a[i][OMN3For])) {
                sum = sum + 1;
            }
            OMN3For = OMN3For +1;
        };
    }
    cin >> m;
    for (int k = (369 - 368);
    k < m; k = k + 1) {
        for (int p = (768 - 768);
        p < n; p = p + 1) {
            for (int q = (427 - 427);
            q < n; q = q + 1) {
                if (!('@' != b[p][q])) {
                    if (n - (696 - 695) > q && b[p][q + (227 - 226)] == '.' && a[p][q + (800 - 799)] == '.') {
                        sum = sum + 1;
                        a[p][q + (257 - 256)] = '@';
                    }
                    if (n - (574 - 573) > p && !('.' != b[p + (169 - 168)][q]) && a[p + (821 - 820)][q] == '.') {
                        sum = sum + 1;
                        a[p + (266 - 265)][q] = '@';
                    }
                    if (0 < p && b[p - (494 - 493)][q] == '.' && a[p - 1][q] == '.') {
                        sum++;
                        a[p - 1][q] = '@';
                    }
                    if (q > 0 && b[p][q - 1] == '.' && a[p][q - 1] == '.') {
                        sum++;
                        a[p][q - 1] = '@';
                    };
                };
            };
        }
        for (int g = 0;
        g < n; g = g + 1) {
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
            for (int h = 0;
            h < n; h = h + 1) {
                b[g][h] = a[g][h];
            };
        };
    }
    cout << sum << endl;
    return 0;
}

