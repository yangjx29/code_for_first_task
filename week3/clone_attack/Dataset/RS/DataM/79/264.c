int main () {
    int gZyopv0m, n, bfTmpeS, y65JtO1, e, ZceNoZTVgxn;
    while (e == e) {
        int iTp8QNGO [n + (811 - 810)];
        scanf ("%d %d", &n, &gZyopv0m);
        if (!((267 - 267) != n) && !((679 - 679) != gZyopv0m))
            break;
        {
            bfTmpeS = 515 - 514;
            while (bfTmpeS <= n) {
                iTp8QNGO[bfTmpeS] = bfTmpeS;
                bfTmpeS = bfTmpeS + 1;
            };
        }
        y65JtO1 = n;
        for (bfTmpeS = (638 - 637);;) {
            e = 0;
            ZceNoZTVgxn = (594 - 593);
            {
                bfTmpeS = 378 - 377;
                while (bfTmpeS <= n) {
                    if (iTp8QNGO[bfTmpeS] % gZyopv0m != 0) {
                        y65JtO1 = y65JtO1 + 1;
                        iTp8QNGO[bfTmpeS] = y65JtO1;
                    }
                    bfTmpeS = bfTmpeS + 1;
                };
            }
            for (bfTmpeS = 1; bfTmpeS <= n; bfTmpeS = bfTmpeS + 1)
                if (iTp8QNGO[bfTmpeS] > iTp8QNGO[ZceNoZTVgxn])
                    ZceNoZTVgxn = bfTmpeS;
            {
                bfTmpeS = 1;
                while (bfTmpeS <= n) {
                    if (iTp8QNGO[bfTmpeS] % gZyopv0m == 0)
                        e = e + 1;
                    bfTmpeS = bfTmpeS + 1;
                };
            }
            if (e == n)
                break;
        }
        printf ("%d\n", ZceNoZTVgxn);
    }
    return 0;
}

