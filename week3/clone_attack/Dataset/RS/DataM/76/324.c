int main () {
    int wek9MirOqfwy;
    int pgJmpSK5YT;
    int t;
    int n;
    int bIcMwG9F;
    int kozs9wXr;
    int vhZysx6r;
    wek9MirOqfwy = (44 - 44);
    pgJmpSK5YT = (746 - 745);
    t = (264 - 264);
    int qiVHDvW4ex [10001] [(483 - 481)];
    scanf ("%d", &n);
    {
        bIcMwG9F = 26 - 26;
        while (n > bIcMwG9F) {
            scanf ("%d %d", &qiVHDvW4ex[bIcMwG9F][0], &qiVHDvW4ex[bIcMwG9F][(385 - 384)]);
            bIcMwG9F = bIcMwG9F + 1;
        };
    }
    kozs9wXr = qiVHDvW4ex[0][0];
    for (bIcMwG9F = 0; n > bIcMwG9F; bIcMwG9F++) {
        for (vhZysx6r = 0; vhZysx6r < (n - (962 - 961)); vhZysx6r = vhZysx6r + 1) {
            if (qiVHDvW4ex[vhZysx6r + 1][0] < qiVHDvW4ex[vhZysx6r][0]) {
                t = qiVHDvW4ex[vhZysx6r][0];
                qiVHDvW4ex[vhZysx6r][0] = qiVHDvW4ex[vhZysx6r + 1][0];
                qiVHDvW4ex[vhZysx6r + 1][0] = t;
            }
            if (qiVHDvW4ex[vhZysx6r + 1][1] < qiVHDvW4ex[vhZysx6r][1]) {
                t = qiVHDvW4ex[vhZysx6r][1];
                qiVHDvW4ex[vhZysx6r][1] = qiVHDvW4ex[vhZysx6r + 1][1];
                qiVHDvW4ex[vhZysx6r + 1][1] = t;
            };
        };
    }
    for (bIcMwG9F = 0; bIcMwG9F < n; bIcMwG9F++) {
        if (wek9MirOqfwy < qiVHDvW4ex[bIcMwG9F][1]) {
            wek9MirOqfwy = qiVHDvW4ex[bIcMwG9F][1];
        }
        if (kozs9wXr > qiVHDvW4ex[bIcMwG9F][0]) {
            kozs9wXr = qiVHDvW4ex[bIcMwG9F][0];
        };
    }
    {
        bIcMwG9F = 1;
        while (bIcMwG9F < n) {
            if (qiVHDvW4ex[bIcMwG9F - 1][1] < qiVHDvW4ex[bIcMwG9F][0]) {
                pgJmpSK5YT = 0;
                break;
            }
            bIcMwG9F++;
        };
    }
    if (pgJmpSK5YT == 0) {
    }
    else {
        printf ("%d %d", kozs9wXr, wek9MirOqfwy);
    }
    return 0;
}

