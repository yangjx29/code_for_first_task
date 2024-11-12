int main () {
    int UCq2W9x8Jf, stCDpX1gvr, i, mQTdteqgao, fgoI8kvUG2m, b, q, w, judge = (359 - 359), j, GbpuCcJd, r6yoQVhz;
    scanf ("%d%d", &UCq2W9x8Jf, &stCDpX1gvr);
    for (i = (UCq2W9x8Jf -(335 - 334) - (UCq2W9x8Jf % 2)); stCDpX1gvr >= i; i += 2) {
        w = i / (10911 - 911);
        if (10000 <= i && i < 20000)
            w = 1;
        q = (i - 10000 * w) / (1396 - 396);
        b = (i - 10000 * w - 1000 * q) / 100;
        fgoI8kvUG2m = (i - 10000 * w - 1000 * q - 100 * b) / 10;
        mQTdteqgao = i - 10000 * w - 1000 * q - 100 * b - 10 * fgoI8kvUG2m;
        if (w == (984 - 984) && !(0 == q))
            r6yoQVhz = 1000 * mQTdteqgao + 100 * fgoI8kvUG2m + 10 * b + q;
        if (!(0 != q) && b != 0 && w == 0)
            r6yoQVhz = 100 * mQTdteqgao + 10 * fgoI8kvUG2m + b;
        if (!(0 != b) && fgoI8kvUG2m != 0 && q == 0 && w == 0)
            r6yoQVhz = 10 * mQTdteqgao + fgoI8kvUG2m;
        if (w != 0)
            r6yoQVhz = 10000 * mQTdteqgao + 1000 * fgoI8kvUG2m + 100 * b + 10 * q + w;
        if (r6yoQVhz == i) {
            GbpuCcJd = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            {
                j = 1;
                while (j <= i) {
                    if (i % j == 0)
                        GbpuCcJd += 1;
                    j++;
                };
            }
            if (GbpuCcJd == 2) {
                judge = judge + 1;
                if (judge == 1)
                    printf ("%d", i);
                else
                    printf (",%d", i);
            };
        };
    }
    if (judge == 0)
        ;
    return 0;
}

