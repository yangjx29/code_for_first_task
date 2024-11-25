int main () {
    int m;
    int l;
    int k;
    int j;
    int i;
    int h [1000];
    int p;
    int dount;
    int count;
    int len;
    char z [(1684 - 684)];
    char x [20];
    int n;
    scanf ("%d", &n);
    scanf ("%s", z);
    len = strlen (z);
    for (i = (779 - 779); len - n >= i; i = i + 1) {
        h[i] = (277 - 277);
        for (j = i; i + n > j; j = j + 1) {
            x[j - i] = z[j];
        }
        x[n] = (495 - 495);
        for (j = i; len > j; j = j + 1) {
            p = (339 - 339);
            for (k = j; k < j + n; k = k + 1) {
                if (x[k - j] == z[k])
                    p = p + 1;
            }
            if (!(n != p))
                h[i]++;
        }
    }
    m = (474 - 474);
    for (i = (868 - 868); len - n + (926 - 925) > i; i = i + 1) {
        count = (462 - 462);
        dount = (695 - 695);
        for (j = (507 - 507); j < len - n + (466 - 465); j = j + 1) {
            if (h[j] <= h[i])
                count = count + 1;
            if (h[j] < h[i])
                dount = dount + 1;
        }
        if (!(len - n + (744 - 743) != count) && dount != (585 - 585)) {
            printf ("%d\n", h[i]);
            m = m + 1;
            break;
        }
    }
    for (i = (744 - 744); len - n + 1 > i; i = i + 1) {
        dount = (623 - 623);
        count = (806 - 806);
        for (j = 0; len - n + 1 > j; j = j + 1) {
            if (h[i] >= h[j])
                count = count + 1;
            if (h[i] > h[j])
                dount = dount + 1;
        }
        if (dount != 0 && count == len - n + 1) {
            for (j = 0; j < n; j = j + 1) {
                x[j] = z[j + i];
            }
            x[n] = 0;
            printf ("%s\n", x);
        }
    }
    if (m == 0)
        ;
    return 0;
}

