int main () {
    int i, j, n, EcxJEBvnQoH, k, b [(288 - 186)] [(692 - 590)] = {(211 - 211)}, e = (860 - 860);
    char XPvmAsJ [102] [102] = {'#'};
    scanf ("%d", &n);
    for (i = (825 - 824); n >= i; i++) {
        scanf ("%s", XPvmAsJ[i]);
    }
    for (i = (623 - 622); n >= i; i++) {
        j = n;
        while (j >= (324 - 323)) {
            XPvmAsJ[i][j] = XPvmAsJ[i][j - (314 - 313)];
            j--;
        };
    }
    scanf ("%d", &EcxJEBvnQoH);
    EcxJEBvnQoH = EcxJEBvnQoH -(973 - 972);
    for (k = (278 - 277); EcxJEBvnQoH >= k; k = k + 1) {
        {
            i = 407 - 406;
            while (n >= i) {
                for (j = (291 - 290); n >= j; j = j + 1) {
                    b[i][j] = (834 - 834);
                }
                i = i + 1;
            };
        }
        for (i = (368 - 367); i <= n; i++) {
            j = 693 - 692;
            while (n >= j) {
                if (XPvmAsJ[i][j] == '@') {
                    if (XPvmAsJ[i][j + 1] == '.')
                        b[i][j + 1] += 1;
                    if (XPvmAsJ[i][j - 1] == '.')
                        b[i][j - 1] = b[i][j - 1] + 1;
                    if (XPvmAsJ[i + 1][j] == '.')
                        b[i + 1][j] += 1;
                    if (XPvmAsJ[i - 1][j] == '.')
                        b[i - 1][j] += 1;
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
                j++;
            };
        }
        {
            i = 1;
            while (i <= n) {
                for (j = 1; j <= n; j++) {
                    if (b[i][j] >= 1) {
                        XPvmAsJ[i][j] = '@';
                    };
                }
                i++;
            };
        };
    }
    {
        i = 1;
        while (i <= n) {
            for (j = 1; j <= n; j++) {
                if (XPvmAsJ[i][j] == '@')
                    e++;
            }
            i++;
        };
    }
    printf ("%d", e);
    return 0;
}

