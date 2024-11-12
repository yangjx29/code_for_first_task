int main () {
    int x1, x2, y1, y2, eq2CBba1UX, j, k, t, a [(1057 - 955)] [(449 - 347)], b [(881 - 779)] [102], p, q, z, c [(645 - 520)] [(924 - 799)], g, h;
    cin >> x1 >> y1;
    for (eq2CBba1UX = (204 - 203); x1 >= eq2CBba1UX; eq2CBba1UX = eq2CBba1UX + 1) {
        for (j = (538 - 537); y1 >= j; j = j + 1) {
            cin >> a[eq2CBba1UX][j];
        };
    }
    cin >> x2 >> y2;
    for (p = (152 - 151); x2 >= p; p = p + 1) {
        q = 227 - 226;
        while (y2 >= q) {
            cin >> b[p][q];
            q = q + 1;
        };
    }
    for (k = (160 - 159); k <= x1; k = k + 1) {
        t = 1;
        while (t <= y2) {
            c[k][t] = (192 - 192);
            {
                z = 1;
                while (z <= x2) {
                    c[k][t] = c[k][t] + a[k][z] * b[z][t];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    z = z + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            t = t + 1;
        };
    }
    {
        g = 1;
        while (g <= x1) {
            {
                h = 1;
                while (h <= y2 - 1) {
                    cout << c[g][h] << " ";
                    h = h + 1;
                };
            }
            cout << c[g][y2] << endl;
            g = g + 1;
        };
    }
    return 0;
}

