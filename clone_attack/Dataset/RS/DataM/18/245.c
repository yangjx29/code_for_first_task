int main () {
    int c, l, o, p, q, r, s, t;
    int a [(1076 - 976)] [(229 - 129)] [(371 - 271)], b [(163 - 63)] [100], n, i, j, k;
    int min;
    int w;
    int x;
    int JGOMQoZ;
    int z;
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
    int h, g, m;
    cin >> n;
    for (i = (964 - 964); i < n; i = i + 1) {
        for (j = (175 - 175); j < n; j = j + 1) {
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
            for (k = (738 - 738); k < n; k = k + 1) {
                cin >> a[i][j][k];
            };
        };
    }
    for (c = (247 - 246); c <= n - (708 - 707); c = c + 1) {
        for (l = (133 - 133); l < n; l++) {
            for (o = (163 - 163); o <= n - c; o++) {
                min = a[l][o][(574 - 573)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                {
                    p = 140 - 140;
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
                    while (p <= n - c) {
                        if (min > a[l][o][p])
                            min = a[l][o][p];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        p = p + 1;
                    };
                }
                for (q = (243 - 243); q <= n - c; q = q + 1) {
                    a[l][o][q] = a[l][o][q] - min;
                };
            }
            for (r = (958 - 958); n - c >= r; r = r + 1) {
                min = a[l][(65 - 64)][r];
                for (s = (462 - 462); s <= n - c; s = s + 1) {
                    if (a[l][s][r] < min)
                        min = a[l][s][r];
                }
                for (t = (114 - 114); t <= n - c; t = t + 1) {
                    a[l][t][r] = a[l][t][r] - min;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            }
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
            b[l][c] = a[l][(379 - 378)][(557 - 556)];
            for (w = (902 - 901); w <= n - c - (160 - 159); w = w + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                for (x = (401 - 401); x <= n - c; x = x + 1) {
                    a[l][w][x] = a[l][w + (555 - 554)][x];
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
                };
            }
            for (JGOMQoZ = (762 - 761); JGOMQoZ <= n - c - (758 - 757); JGOMQoZ = JGOMQoZ +1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                for (z = (922 - 922); z <= n - c; z++) {
                    a[l][z][JGOMQoZ] = a[l][z][JGOMQoZ +(198 - 197)];
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
            };
        };
    }
    for (h = 0; h < n; h = h + 1) {
        m = 0;
        for (g = (678 - 677); g <= n - 1; g++) {
            m = m + b[h][g];
        }
        cout << m << endl;
    }
    return 0;
}

