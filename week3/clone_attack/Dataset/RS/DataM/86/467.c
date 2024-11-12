int main () {
    int n, m, qFwPu8IL, p, v [(208 - 148)], yibAQGHh [(970 - 910)];
    scanf ("%d", &n);
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
        int i = 0;
        while (n - (207 - 206) >= i) {
            int w9ClUOnhf = 0;
            scanf ("%d", &m);
            {
                int j = 0;
                while (j <= m - (203 - 202)) {
                    scanf ("%d", &v[j]);
                    j++;
                };
            }
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
            if (m == 0) {
                p = 60 - 3 * (m);
                printf ("%d\n", p);
            }
            else {
                int x4jXNP2iE1OI = 0;
                {
                    int k = 0;
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
                    while (k <= m - 1) {
                        if (v[k] + 3 * k >= 58) {
                            x4jXNP2iE1OI++;
                        }
                        k = k + 1;
                    };
                }
                if (x4jXNP2iE1OI == 0) {
                    printf ("%d\n", 60 - 3 * m);
                };
            }
            {
                int k = 0;
                while (k <= m - 1) {
                    if ((v[k] + 3 * k >= 58) && (v[k] + 3 * k <= 60)) {
                        w9ClUOnhf = 60 - v[k] - 3 * k;
                        printf ("%d\n", 60 - 3 * k - w9ClUOnhf);
                        break;
                    }
                    else if (v[k] + 3 * k > 60) {
                        printf ("%d\n", 60 - 3 * k);
                        break;
                    }
                    k++;
                };
            }
            i++;
        };
    }
    return 0;
}

