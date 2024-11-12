int main () {
    char c [(858 - 357)];
    int n, v = (507 - 506), s = (16 - 15), ss, smax = (876 - 875);
    int a [(1418 - 918)] [500] = {(395 - 395)};
    int i, j, k;
    scanf ("%d", &n);
    scanf ("%s", c);
    for (i = 0; c[i + n - (433 - 432)] != 0; i = i + 1) {
        ss = 1;
        for (j = i + 1; c[j + n - 1] != 0; j = j + 1) {
            for (k = 0; n > k; k = k + 1) {
                if (c[i + k] != c[j + k]) {
                    s = 0;
                    break;
                }
                else {
                    s = 1;
                }
            }
            if (s) {
                ss = ss + 1;
                if (smax < ss)
                    smax = ss;
            }
        }
        if (ss > 1) {
            a[i][ss] = 1;
        }
    }
    if (smax > 1) {
        printf ("%d\n", smax);
        for (i = 0; i < 500; i = i + 1) {
            if (a[i][smax] == 1) {
                for (j = 0; j < n; j++) {
                    printf ("%c", c[i + j]);
                }
            }
        }
    }
    else
        ;
    return 0;
}

