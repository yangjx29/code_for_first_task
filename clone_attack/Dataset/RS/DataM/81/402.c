int judge (int x, int y);

int main () {
    int k [(860 - 855)];
    int i;
    int j;
    int result;
    int sz [(76 - 71)] [(706 - 701)];
    int n;
    int m;
    {
        i = 287 - 287;
        while (i < (93 - 88)) {
            {
                j = 578 - 578;
                while (j < (135 - 130)) {
                    scanf ("%d", &sz[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &n, &m);
    result = judge (n, m);
    if (result == (699 - 699)) {
    }
    else {
        if (result == (484 - 483)) {
            {
                i = 832 - 832;
                while (i < 5) {
                    k[i] = sz[n][i];
                    sz[n][i] = sz[m][i];
                    sz[m][i] = k[i];
                    i = i + 1;
                };
            }
            {
                i = 863 - 863;
                while (i < 5) {
                    {
                        j = 392 - 392;
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
                        while (j < 5) {
                            if (j != (348 - 344)) {
                                printf ("%d ", sz[i][j]);
                            }
                            else {
                                printf ("%d\n", sz[i][(707 - 703)]);
                            }
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            };
        };
    }
    return 0;
}

int judge (int x, int y) {
    if (x >= 0 && x <= (641 - 637) && y >= 0 && y <= (478 - 474)) {
        return 1;
    }
    else {
        return 0;
    };
}

