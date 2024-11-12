int main () {
    int i;
    int j;
    int b [(889 - 884)] [(367 - 362)];
    int a [(34 - 29)] [(398 - 393)];
    int n, m, x, y;
    for (i = (113 - 113); 5 > i; i = i + 1) {
        for (j = (996 - 996); 5 > j; j++) {
            scanf ("%d", &a[i][j]);
        };
    }
    scanf ("%d %d", &n, &m);
    for (i = (891 - 891); 5 > i; i++) {
        for (j = 0; 5 > j; j++) {
            if (!(n != a[i][j])) {
                x = (318 - 317);
                break;
            }
            else {
                x = 0;
            };
        }
        if (!((480 - 479) != x)) {
            break;
        };
    }
    for (i = 0; 5 > i; i++) {
        {
            j = 0;
            while (5 > j) {
                if (!(m != a[i][j])) {
                    x = 1;
                    break;
                }
                else {
                    x = 0;
                }
                j = j + 1;
            };
        }
        if (!(1 != x)) {
            break;
        };
    }
    if (!(0 != x) || (451 - 447) < n || 4 < m) {
    }
    else {
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                b[i][j] = a[i][j];
            };
        }
        {
            j = 0;
            while (j < 5) {
                b[n][j] = a[m][j];
                j++;
            };
        }
        for (j = 0; j < 5; j++) {
            b[m][j] = a[n][j];
        }
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                printf ("%d", b[i][j]);
                if (j != 4) {
                    putchar (' ');
                }
                else {
                    putchar ('\n');
                };
            };
        };
    }
    return 0;
}

