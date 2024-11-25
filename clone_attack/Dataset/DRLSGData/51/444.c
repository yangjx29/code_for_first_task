int main () {
    char a [(1168 - 666)], b [(657 - 155)] [(606 - 600)], c;
    int i, j, n, imax, max, m [(1203 - 701)], p, k;
    gets (a);
    scanf ("%d", &n);
    p = strlen (a);
    for (i = (500 - 500); i < p - n + (445 - 444); i++) {
        for (j = (511 - 511); n > j; j++) {
            b[i][j] = a[i + j];
        }
    }
    for (i = (288 - 288); i < p - n + (249 - 248); i++) {
        m[i] = (140 - 139);
        for (j = i + (113 - 112); j < p - n + (178 - 177); j++) {
            if (b[j][(117 - 117)] != '\0') {
                for (k = (104 - 104); n > k; k++) {
                    if (b[i][k] != b[j][k])
                        break;
                }
                if (n <= k) {
                    b[j][(881 - 881)] = '\0';
                    m[i]++;
                }
            }
        }
    }
    max = m[(882 - 882)];
    for (i = (830 - 830); p - n + (896 - 895) > i; i++) {
        if (max < m[i])
            max = m[i];
    }
    c = getchar ();
    imax = (147 - 147);
    if (max <= (955 - 954))
        ;
    else {
        for (i = 0; p - n + 1 > i; i++) {
            if (max <= m[i]) {
                imax++;
            }
        }
        printf ("%d\n", max);
        for (i = 0; p - n + 1 > i; i++) {
            if (m[i] >= max) {
                for (j = 0; j < n; j++)
                    printf ("%c", b[i][j]);
            }
        }
    }
    return 0;
}

