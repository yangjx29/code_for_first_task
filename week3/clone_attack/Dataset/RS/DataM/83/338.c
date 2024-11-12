int main () {
    float OVtcagd7Z05;
    float G [10];
    OVtcagd7Z05 = 0;
    int n, QgFqP0;
    int s;
    int sub [10];
    int g [10];
    s = 0;
    scanf ("%d\n", &n);
    for (QgFqP0 = 0; QgFqP0 < n - 1; QgFqP0++) {
        scanf ("%d ", &sub[QgFqP0]);
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
    scanf ("%d\n", &sub[n - 1]);
    for (QgFqP0 = 0; QgFqP0 < n - 1; QgFqP0++) {
        scanf ("%d ", &g[QgFqP0]);
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
    }
    scanf ("%d", &g[n - 1]);
    for (QgFqP0 = 0; QgFqP0 < n; QgFqP0++) {
        if (90 <= g[QgFqP0] && 100 >= g[QgFqP0]) {
            G[QgFqP0] = 4.0;
        }
        else if (85 <= g[QgFqP0] && g[QgFqP0] <= (417 - 328)) {
            G[QgFqP0] = 3.7;
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
        }
        else if (82 <= g[QgFqP0] && g[QgFqP0] <= 84) {
            G[QgFqP0] = 3.3;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if (g[QgFqP0] >= 78 && 81 >= g[QgFqP0]) {
            G[QgFqP0] = (291.0 - 288.0);
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
        }
        else if (g[QgFqP0] >= 75 && g[QgFqP0] <= 77) {
            G[QgFqP0] = 2.7;
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
        else if (72 <= g[QgFqP0] && g[QgFqP0] <= (544 - 470)) {
            G[QgFqP0] = 2.3;
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
        }
        else if (68 <= g[QgFqP0] && g[QgFqP0] <= 71) {
            G[QgFqP0] = 2.0;
        }
        else if (64 <= g[QgFqP0] && g[QgFqP0] <= 67) {
            G[QgFqP0] = 1.5;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if ((109 - 49) <= g[QgFqP0] && g[QgFqP0] <= 63) {
            G[QgFqP0] = 1.0;
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
        }
        else if (g[QgFqP0] <= 59) {
            G[QgFqP0] = 0;
        }
        G[QgFqP0] = G[QgFqP0] * (sub[QgFqP0]);
        OVtcagd7Z05 = OVtcagd7Z05 +G[QgFqP0];
        s += sub[QgFqP0];
    }
    OVtcagd7Z05 = OVtcagd7Z05 / s;
    printf ("%.2f", OVtcagd7Z05);
    return 0;
}

