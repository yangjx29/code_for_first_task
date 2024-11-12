int main () {
    int i, j, l, r;
    char a [M] [N];
    char b [M] [N];
    int p, pi;
    {
        i = 407 - 407;
        while (i < M) {
            {
                j = 493 - 493;
                while (N > j) {
                    a[i][j] = '\0';
                    b[i][j] = '\0';
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        r = 0;
        while (M > r) {
            gets (a [r]);
            strcpy (b[r], a[r]);
            {
                j = 0;
                while (j < (strlen (a[r]) + (126 - 125)) / (326 - 324)) {
                    {
                        p = 0;
                        i = 0;
                        pi = 0;
                        while (b[r][i] != '\0') {
                            if (b[r][i] == '(') {
                                pi = i;
                                p = 1;
                            }
                            if (!(')' != b[r][i]) && p == 1) {
                                b[r][i] = '0';
                                b[r][pi] = '0';
                                break;
                            }
                            i = i + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            {
                i = 0;
                while (b[r][i] != '\0') {
                    if (b[r][i] == '(') {
                        b[r][i] = '$';
                    }
                    else {
                        if (b[r][i] == ')') {
                            b[r][i] = '?';
                        }
                        else
                            b[r][i] = ' ';
                    }
                    i = i + 1;
                };
            }
            r = r + 1;
        };
    }
    {
        r = 0;
        while (b[r][0] != '\0') {
            puts (a [r]);
            puts (b [r]);
            r++;
        };
    }
    return 0;
}

