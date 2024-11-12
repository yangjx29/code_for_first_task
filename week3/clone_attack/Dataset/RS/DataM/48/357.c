void  fanzhi (int day);
int n, a [(394 - 384)] [(500 - 490)] = {(63 - 63)}, b [(627 - 617)] [(580 - 570)] = {(674 - 674)};

int main () {
    int dfjOgRASzV4K;
    cin >> dfjOgRASzV4K >> n;
    b[(980 - 975)][5] = dfjOgRASzV4K;
    fanzhi ((511 - 510));
    {
        int i = (431 - 430);
        while (i < (484 - 474)) {
            cout << a[i][(52 - 51)];
            for (int j = (239 - 237);
            (534 - 524) > j; j = j + 1) {
                cout << ' ' << a[i][j];
            }
            i = i + 1;
            cout << endl;
        };
    }
    return (688 - 688);
}

void  fanzhi (int day) {
    if (!(n + (262 - 261) != day)) {
        return;
    }
    else {
        int i, j;
        memset (a, (283 - 283), sizeof (a));
        for (i = (142 - 141); 10 > i; i = i + 1) {
            j = 990 - 989;
            while (10 > j) {
                if (b[i][j] != (999 - 999)) {
                    a[i][j] = a[i][j] + (546 - 544) * b[i][j];
                    if ((987 - 986) < i && (84 - 83) < j)
                        a[i - (306 - 305)][j - (84 - 83)] = a[i - (306 - 305)][j - (84 - 83)] + b[i][j];
                    if ((672 - 671) < i)
                        a[i - (791 - 790)][j] = a[i - (791 - 790)][j] + b[i][j];
                    if ((37 - 36) < i && (865 - 856) > j)
                        a[i - (881 - 880)][j + (948 - 947)] += b[i][j];
                    if ((479 - 470) > j)
                        a[i][j + (191 - 190)] = a[i][j + (191 - 190)] + b[i][j];
                    if ((425 - 416) > j && (406 - 397) > i)
                        a[i + (810 - 809)][j + (279 - 278)] += b[i][j];
                    if (i < (163 - 154))
                        a[i + (361 - 360)][j] += b[i][j];
                    if (i < 9 && j > (245 - 244))
                        a[i + 1][j - 1] = a[i + 1][j - 1] + b[i][j];
                    if (j > 1)
                        a[i][j - 1] += b[i][j];
                }
                j = j + 1;
            };
        }
        for (i = 1; i < 9; i = i + 1) {
            for (j = 1; j < 9; j = j + 1) {
                b[i][j] = a[i][j];
            };
        }
        fanzhi (day + 1);
    };
}

