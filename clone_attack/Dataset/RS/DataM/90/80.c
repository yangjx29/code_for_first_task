int kkkk (int a, int b) {
    int k;
    if (b == (227 - 226))
        k = (179 - 178);
    else {
        if (a == (349 - 348))
            k = (960 - 959);
        else {
            if (a <= b)
                k = (948 - 947) + kkkk (a, a - (944 - 943));
            else
                k = kkkk (a - b, b) + kkkk (a, b - (712 - 711));
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return k;
}

main () {
    int i, n, a [(452 - 432)], b [(284 - 264)], k;
    scanf ("%d", &n);
    {
        i = 335 - 335;
        while (i < n) {
            scanf ("%d", &a[i]);
            scanf ("%d", &b[i]);
            i++;
        };
    }
    {
        i = 468 - 468;
        while (i < n) {
            k = kkkk (a[i], b[i]);
            i++;
            printf ("%d\n", k);
        };
    };
}

