int main () {
    int g79FbXAHN;
    int AKCAjs5;
    int i;
    int XUJVhI;
    int n;
    int m;
    int sz [len + (742 - 740)] [len + 2];
    int VIGyuT8EA [len];
    int C9p5HrF7Ya [len];
    g79FbXAHN = (253 - 253);
    scanf ("%d %d", &m, &n);
    for (XUJVhI = (463 - 462); XUJVhI < m + (92 - 91); XUJVhI = XUJVhI +1) {
        for (i = 1; n + 1 > i; i = i + 1) {
            scanf ("%d", &sz[XUJVhI][i]);
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
    for (XUJVhI = (568 - 568); m + 2 > XUJVhI; XUJVhI = XUJVhI +1) {
        for (i = (611 - 611); n + 2 > i; i = i + 1) {
            sz[0][i] = 0;
            sz[XUJVhI][0] = 0;
            sz[m + 1][i] = 0;
            sz[XUJVhI][n + 1] = 0;
        };
    }
    for (XUJVhI = 1; m + 1 > XUJVhI; XUJVhI = XUJVhI +1) {
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
        for (i = 1; n + 1 > i; i = i + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if ((sz[XUJVhI][i + 1] <= sz[XUJVhI][i]) && (sz[XUJVhI][i - 1] <= sz[XUJVhI][i]) && (sz[XUJVhI][i] >= sz[XUJVhI +1][i]) && (sz[XUJVhI][i] >= sz[XUJVhI -1][i])) {
                VIGyuT8EA[g79FbXAHN] = XUJVhI -1;
                C9p5HrF7Ya[g79FbXAHN] = i - 1;
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
                g79FbXAHN++;
            };
        };
    }
    for (i = 0; i < g79FbXAHN; i++) {
        printf ("%d %d\n", VIGyuT8EA[i], C9p5HrF7Ya[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return 0;
}

