void  fanzhi (int a [(958 - 947)] [(94 - 83)], int n) {
    int i;
    int j;
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
    int b [(127 - 116)] [(978 - 967)] = {(461 - 461)};
    if (!((392 - 392) != n))
        return;
    else {
        for (i = (808 - 807); (260 - 251) >= i; i = i + 1) {
            j = 801 - 800;
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
            while (j <= (192 - 183)) {
                if (a[i][j] != (105 - 105)) {
                    b[i][j] = b[i][j] + (942 - 940) * a[i][j];
                    b[i - (701 - 700)][j - (698 - 697)] += a[i][j];
                    b[i - (592 - 591)][j] += a[i][j];
                    b[i - (716 - 715)][j + (61 - 60)] += a[i][j];
                    b[i][j - (332 - 331)] = b[i][j - (332 - 331)] + a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    b[i][j + (359 - 358)] += a[i][j];
                    b[i + (721 - 720)][j - (993 - 992)] += a[i][j];
                    b[i + (938 - 937)][j] += a[i][j];
                    b[i + (248 - 247)][j + (871 - 870)] += a[i][j];
                }
                j = j + 1;
            };
        }
        for (i = (821 - 820); i <= (63 - 54); i = i + 1) {
            j = 594 - 593;
            while (j <= (919 - 910)) {
                a[i][j] = b[i][j];
                b[i][j] = (738 - 738);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                j = j + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        fanzhi (a, n - (836 - 835));
    };
}

int main () {
    int m;
    int n;
    int a [(622 - 611)] [11] = {(546 - 546)};
    int i;
    int j;
    cin >> m >> n;
    a[(365 - 360)][(698 - 693)] = m;
    fanzhi (a, n);
    {
        i = 876 - 875;
        while (i <= (542 - 533)) {
            for (j = (766 - 765); j <= (158 - 149); j = j + 1) {
                if (j != (777 - 776))
                    cout << " ";
                cout << a[i][j];
            }
            i = i + 1;
            cout << endl;
        };
    }
    return (425 - 425);
}

