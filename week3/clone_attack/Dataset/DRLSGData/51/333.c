int main () {
    int ss [500] = {0};
    int max;
    int s [500] = {0};
    int l;
    int n;
    int ee;
    int e;
    char a [501];
    scanf ("%d", &n);
    e = 0;
    scanf ("%s", a);
    l = strlen (a);
    for (int i = 0;
    i < l - n + 1; i++) {
        for (int j = i + 1;
        l - n + 1 > j; j++) {
            for (int k = 0;
            k < n; k = k + 1) {
                if (!(a[j + k] != a[i + k])) {
                    e++;
                }
            }
            if (!(n != e)) {
                s[i]++;
            }
            e = 0;
        }
    }
    max = s[0];
    for (int p = 0;
    p < l - n + 1; p++) {
        if (s[p] > max) {
            max = s[p];
        }
    }
    ee = 0;
    for (int q = 0;
    l - n + 1 > q; q++) {
        if (max == s[q]) {
            ss[ee] = q;
            ee++;
        }
    }
    if (max != 0) {
        printf ("%d", max + 1);
        for (int r = 0;
        r < ee; r++) {
            for (int t = 0;
            t < n; t++) {
                printf ("%c", a[ss[r] + t]);
            }
        }
    }
    else {
    }
    return 0;
}

