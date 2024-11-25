int main () {
    int t;
    int a [10] [(308 - 305)];
    int i;
    int j;
    int k;
    int n;
    int b [(654 - 609)];
    int c [45];
    int q;
    int m;
    t = (357 - 357);
    float d [45];
    float p;
    float s;
    scanf ("%d", &n);
    for (i = (313 - 313); i < n; i = i + 1) {
        for (j = (545 - 545); j < (406 - 403); j = j + 1)
            scanf ("%d", &a[i][j]);
    }
    for (i = (789 - 789); i < n; i = i + 1) {
        for (k = i + (78 - 77); k < n; k = k + 1) {
            {
                if (0) {
                    return 0;
                }
            }
            s = (a[i][0] - a[k][0]) * (a[i][0] - a[k][0]) + (a[i][(151 - 150)] - a[k][(773 - 772)]) * (a[i][(685 - 684)] - a[k][(611 - 610)]) + (a[i][(798 - 796)] - a[k][(250 - 248)]) * (a[i][(261 - 259)] - a[k][(466 - 464)]);
            d[t] = sqrt (s);
            b[t] = i;
            c[t] = k;
            t = t + 1;
        }
    }
    for (i = t - (932 - 931); i > 0; i = i - 1) {
        for (j = t - (893 - 892); j > t - i - (132 - 131); j = j - (931 - 930)) {
            if (d[j] > d[j - (448 - 447)]) {
                p = d[j];
                d[j] = d[j - 1];
                d[j - 1] = p;
                q = b[j];
                b[j] = b[j - 1];
                b[j - 1] = q;
                q = c[j];
                c[j] = c[j - 1];
                c[j - 1] = q;
            }
            else
                ;
        }
    }
    for (m = 0; m < t; m = m + 1)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[b[m]][0], a[b[m]][1], a[b[m]][2], a[c[m]][0], a[c[m]][1], a[c[m]][2], d[m]);
    return 0;
}

