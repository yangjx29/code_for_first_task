int main () {
    char jziaVc [26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char a [10000] [(390 - 364)];
    int eWQogXp;
    int t;
    int WXlfigS;
    int QDE9LXYBc;
    int j;
    int ERMN9wsy;
    int ckXfzV039w [(10605 - 605)];
    eWQogXp = 0;
    t = 0;
    int b [(64 - 38)] = {(557 - 557), (40 - 40), (28 - 28), (715 - 715), (238 - 238), (352 - 352), (913 - 913), (84 - 84), (983 - 983), (459 - 459), (301 - 301), (146 - 146), (738 - 738), (913 - 913), (851 - 851), (23 - 23), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    scanf ("%d", &WXlfigS);
    {
        QDE9LXYBc = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QDE9LXYBc < WXlfigS) {
            scanf ("%d", &ckXfzV039w[QDE9LXYBc]);
            scanf ("%s", &a[QDE9LXYBc]);
            QDE9LXYBc = QDE9LXYBc +1;
        };
    }
    {
        QDE9LXYBc = 0;
        while (QDE9LXYBc < WXlfigS) {
            {
                j = 0;
                while (j < 26) {
                    {
                        ERMN9wsy = 0;
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
                        while (ERMN9wsy < 26) {
                            if (!(jziaVc[ERMN9wsy] != a[QDE9LXYBc][j]))
                                b[ERMN9wsy]++;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            ERMN9wsy++;
                        };
                    }
                    j = j + 1;
                };
            }
            QDE9LXYBc = QDE9LXYBc +1;
        };
    }
    {
        QDE9LXYBc = 0;
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
        while (QDE9LXYBc < 26) {
            if (b[QDE9LXYBc] > eWQogXp) {
                eWQogXp = b[QDE9LXYBc];
                t = QDE9LXYBc;
            }
            QDE9LXYBc++;
        };
    }
    printf ("%c\n", jziaVc[t]);
    printf ("%d\n", eWQogXp);
    {
        QDE9LXYBc = 0;
        while (QDE9LXYBc < WXlfigS) {
            {
                j = 0;
                while (j < 26) {
                    if (a[QDE9LXYBc][j] == jziaVc[t]) {
                        printf ("%d\n", ckXfzV039w[QDE9LXYBc]);
                        break;
                    }
                    j++;
                };
            }
            QDE9LXYBc++;
        };
    }
    getchar ();
    getchar ();
    return 0;
}

