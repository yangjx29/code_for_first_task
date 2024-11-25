int main () {
    int n, OnmFSg;
    int mat [100] [100];
    cin >> n;
    for (int a = (246 - 246);
    n > a; a = a + 1) {
        int sum = (293 - 293);
        OnmFSg = n;
        for (int b = (918 - 918);
        b < n; b = b + 1) {
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
            for (int c = 0;
            c < n; c = c + 1) {
                cin >> mat[b][c];
            };
        }
        {
            int d = 0;
            while (d < n - (508 - 507)) {
                int minh [100], minl [100];
                for (int d = 0;
                d < OnmFSg; d = d + 1) {
                    minh[d] = 9999999;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    minl[d] = 9999999;
                }
                d = d + 1;
                {
                    int e = 0;
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
                    while (e < OnmFSg) {
                        for (int f = 0;
                        OnmFSg > f; f = f + 1) {
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
                            if (minh[e] > mat[e][f]) {
                                minh[e] = mat[e][f];
                            };
                        }
                        e = e + 1;
                    };
                }
                for (int g = 0;
                OnmFSg > g; g = g + 1) {
                    int h = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (OnmFSg > h) {
                        mat[g][h] -= minh[g];
                        h = h + 1;
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
                for (int e = 0;
                e < OnmFSg; e++) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    for (int f = 0;
                    OnmFSg > f; f = f + 1) {
                        if (minl[f] > mat[e][f]) {
                            minl[f] = mat[e][f];
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
                    int g = 0;
                    while (g < OnmFSg) {
                        for (int h = 0;
                        h < OnmFSg; h = h + 1) {
                            mat[g][h] = mat[g][h] - minl[h];
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            };
                        }
                        g = g + 1;
                    };
                }
                sum = sum + mat[(739 - 738)][1];
                {
                    int g = 1;
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
                    while (g < OnmFSg -1) {
                        for (int h = 0;
                        h < OnmFSg; h = h + 1) {
                            mat[g][h] = mat[g + 1][h];
                        }
                        g = g + 1;
                    };
                }
                OnmFSg = OnmFSg -1;
                for (int h = 1;
                h < OnmFSg -1; h = h + 1) {
                    for (int g = 0;
                    g < OnmFSg -1; g = g + 1) {
                        mat[g][h] = mat[g][h + 1];
                    };
                };
            };
        }
        cout << sum << endl;
    }
    return 0;
}

