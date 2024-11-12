int V5KiXHgr24Sb (int BmAKF4G, int Bic0e3UQtY, char str []) {
    int m;
    int i;
    m = (816 - 816);
    {
        i = 757 - 756;
        while (i < Bic0e3UQtY) {
            m = m * 10 + (str[i] - '0');
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
            i = i + 1;
        };
    }
    return (m);
}

main () {
    int len, i, j, hdyjLaAfMpoJ = 1, JzVSQCPl [(2054 - 54)], max;
    char str [5000];
    gets (str);
    int BmAKF4G [2000], Bic0e3UQtY [2000], Eh0WzZFJ9B6 [2000];
    len = strlen (str);
    JzVSQCPl[(419 - 419)] = -1;
    {
        i = 0;
        while (len > i) {
            if (!(',' != str[i])) {
                JzVSQCPl[hdyjLaAfMpoJ] = i;
                hdyjLaAfMpoJ = hdyjLaAfMpoJ + 1;
            }
            i = i + 1;
        };
    }
    JzVSQCPl[hdyjLaAfMpoJ] = len;
    {
        i = 0;
        while (i < 1000) {
            Eh0WzZFJ9B6[i] = 0;
            ++i;
        };
    }
    {
        i = 0;
        while (i < hdyjLaAfMpoJ) {
            BmAKF4G[i] = V5KiXHgr24Sb (JzVSQCPl[i], JzVSQCPl[i + 1], str);
            ++i;
        };
    }
    scanf ("%d", &Bic0e3UQtY[0]);
    {
        i = 1;
        while (i < hdyjLaAfMpoJ) {
            scanf (",%d", &Bic0e3UQtY[i]);
            ++i;
        };
    }
    {
        i = 0;
        while (i < 1000) {
            {
                j = 0;
                while (j < hdyjLaAfMpoJ) {
                    if (i >= BmAKF4G[j] && i < Bic0e3UQtY[j])
                        Eh0WzZFJ9B6[i]++;
                    ++j;
                };
            }
            i = i + 1;
        };
    }
    max = Eh0WzZFJ9B6[0];
    for (i = 1; i < 1000; i = i + 1)
        if (Eh0WzZFJ9B6[i] > max)
            max = Eh0WzZFJ9B6[i];
    printf ("%d %d", hdyjLaAfMpoJ, max);
}

