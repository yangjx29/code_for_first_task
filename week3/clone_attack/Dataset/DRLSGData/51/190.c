struct   word {
    char b [6];
    int count;
}
p [600], tmp;

int main () {
    char x [6];
    int len;
    char a [600] = {0};
    int i, j, k;
    int n;
    int m;
    int sign;
    scanf ("%d", &n);
    m = 0;
    sign = 0;
    scanf ("%s", a);
    len = strlen (a);
    for (i = 0; i <= len - n; i = i + 1) {
        sign = 0;
        for (j = 0; 6 > j; j = j + 1) {
            x[j] = '\0';
        }
        for (j = 0; j < n; j++) {
            x[j] = a[i + j];
        }
        for (k = 0; m >= k; k = k + 1) {
            if (!(0 != strcmp (x, p[k].b))) {
                p[k].count++;
                sign = 1;
                break;
            }
        }
        if (!(0 != sign)) {
            strcpy (p[m].b, x);
            p[m].count = 1;
            m++;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = m - 1; j > 0; j = j - 1) {
            if (p[j - 1].count < p[j].count) {
                tmp = p[j];
                p[j] = p[j - 1];
                p[j - 1] = tmp;
            }
        }
    }
    if (1 >= p[0].count) {
    }
    else {
        printf ("%d\n%s\n", p[0].count, p[0].b);
        for (i = 1; i < m; i++) {
            if (p[i].count == p[i - 1].count) {
                printf ("%s\n", p[i].b);
            }
            else
                break;
        }
    }
    return 0;
}

