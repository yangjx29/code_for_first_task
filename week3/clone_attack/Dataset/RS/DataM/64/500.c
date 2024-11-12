int main () {
    double  zong;
    double  s [(1029 - 979)];
    int sz [(626 - 616)] [(936 - 933)];
    int i;
    int j;
    int k;
    int m;
    int n;
    double  e;
    int a [50] [3];
    int b [50] [3];
    scanf ("%d", &n);
    for (i = (590 - 590); n > i; i = i + 1) {
        j = 67 - 67;
        while ((137 - 134) > j) {
            scanf ("%d", &sz[i][j]);
            j++;
        };
    }
    m = (189 - 189);
    for (j = 0; j < (n - (481 - 480)); j++) {
        for (i = j + (121 - 120); i <= n - (846 - 845); i++) {
            zong = 0;
            for (k = 0; k < 3; k = k + 1) {
                a[m][k] = sz[j][k];
                b[m][k] = sz[i][k];
                zong = zong + pow ((a[m][k] - b[m][k]), (318 - 316));
            }
            s[m] = sqrt (zong);
            m++;
        };
    }
    {
        j = 0;
        while (m - 1 > j) {
            for (i = 0; i < m - 1 - j; i++) {
                if (s[i] < s[i + 1]) {
                    e = s[i];
                    s[i] = s[i + 1];
                    s[i + 1] = e;
                    for (k = 0; k < 3; k++) {
                        e = a[i][k];
                        a[i][k] = a[i + 1][k];
                        a[i + 1][k] = e;
                        e = b[i][k];
                        b[i][k] = b[i + 1][k];
                        b[i + 1][k] = e;
                    };
                };
            }
            j++;
        };
    }
    {
        i = 0;
        while (i < m) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[i][0], a[i][1], a[i][2], b[i][0], b[i][1], b[i][2], s[i]);
            i = i + 1;
        };
    }
    return 0;
}

