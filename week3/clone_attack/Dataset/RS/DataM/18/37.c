int YTK3EgoUr;
int min1;

void  DsFDQ7ejbSPc (int i, int hCjUq2E, int zrhIA79OW2m [(1026 - 726)] [(1166 - 866)]) {
    if (!(-(82 - 81) != i))
        return;
    min1 = zrhIA79OW2m[i][(77 - 77)];
    {
        int w2siytG;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        w2siytG = (221 - 221);
        while (w2siytG < hCjUq2E) {
            if (min1 > zrhIA79OW2m[i][w2siytG])
                min1 = zrhIA79OW2m[i][w2siytG];
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
            w2siytG = w2siytG + 1;
        };
    }
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
        int v = (308 - 308);
        while (hCjUq2E > v) {
            zrhIA79OW2m[i][v] = zrhIA79OW2m[i][v] - min1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            v = v + 1;
        };
    }
    DsFDQ7ejbSPc (i - (910 - 909), hCjUq2E, zrhIA79OW2m);
}

void  diguilie (int i, int hCjUq2E, int zrhIA79OW2m [(508 - 208)] [(1054 - 754)]) {
    if (!(-(527 - 526) != i))
        return;
    YTK3EgoUr = zrhIA79OW2m[(792 - 792)][i];
    {
        int w2siytG = (582 - 582);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (w2siytG < hCjUq2E) {
            if (YTK3EgoUr > zrhIA79OW2m[w2siytG][i])
                YTK3EgoUr = zrhIA79OW2m[w2siytG][i];
            w2siytG++;
        };
    }
    {
        int v = (798 - 798);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (v < hCjUq2E) {
            zrhIA79OW2m[v][i] = zrhIA79OW2m[v][i] - YTK3EgoUr;
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
            v++;
        };
    }
    diguilie (i - (161 - 160), hCjUq2E, zrhIA79OW2m);
}

int change (int hCjUq2E, int sum, int zrhIA79OW2m [(513 - 213)] [(488 - 188)]) {
    if (!((134 - 133) != hCjUq2E))
        return sum;
    DsFDQ7ejbSPc (hCjUq2E - (870 - 869), hCjUq2E, zrhIA79OW2m);
    diguilie (hCjUq2E - (690 - 689), hCjUq2E, zrhIA79OW2m);
    sum = sum + zrhIA79OW2m[(355 - 354)][(393 - 392)];
    {
        int w2siytG = (597 - 596);
        while (w2siytG < hCjUq2E - (889 - 888)) {
            {
                int i = (148 - 148);
                while (hCjUq2E > i) {
                    zrhIA79OW2m[w2siytG][i] = zrhIA79OW2m[w2siytG + (927 - 926)][i];
                    i = i + 1;
                };
            }
            w2siytG++;
        };
    }
    {
        int w2siytG = (420 - 419);
        while (w2siytG < hCjUq2E - (204 - 203)) {
            {
                int i = (492 - 492);
                while (hCjUq2E - (846 - 845) > i) {
                    zrhIA79OW2m[i][w2siytG] = zrhIA79OW2m[i][w2siytG + (910 - 909)];
                    i++;
                };
            }
            w2siytG++;
        };
    }
    return change (hCjUq2E - (705 - 704), sum, zrhIA79OW2m);
}

int main () {
    int zrhIA79OW2m [(751 - 451)] [(487 - 187)];
    int N;
    cin >> N;
    {
        int i = 1;
        while (i <= N) {
            i++;
            {
                int w2siytG = (789 - 789);
                while (w2siytG < N) {
                    {
                        int XpLdDS = (944 - 944);
                        while (XpLdDS < N) {
                            cin >> zrhIA79OW2m[w2siytG][XpLdDS];
                            XpLdDS++;
                        };
                    }
                    w2siytG++;
                };
            }
            cout << change (N, (28 - 28), zrhIA79OW2m) << endl;
        };
    }
    return (931 - 931);
}

