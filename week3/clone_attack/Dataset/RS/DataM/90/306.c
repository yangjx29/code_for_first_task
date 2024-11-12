int VIvGOBrgmh (int DYuHmRvz93hg, int n) {
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
    if (DYuHmRvz93hg == (683 - 682) || !((689 - 689) != DYuHmRvz93hg) || !((843 - 842) != n))
        return (1);
    else if (n > DYuHmRvz93hg &&DYuHmRvz93hg != (101 - 101))
        return (VIvGOBrgmh (DYuHmRvz93hg, DYuHmRvz93hg));
    else {
        int FZ4serGjmUvc;
        int LwvxhItbcOEZ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        FZ4serGjmUvc = 0;
        {
            LwvxhItbcOEZ = 0;
            while (LwvxhItbcOEZ < n) {
                FZ4serGjmUvc = FZ4serGjmUvc +VIvGOBrgmh(DYuHmRvz93hg -n + LwvxhItbcOEZ, n - LwvxhItbcOEZ);
                LwvxhItbcOEZ++;
            };
        }
        return (FZ4serGjmUvc);
    };
}

main () {
    int LwvxhItbcOEZ, Fsb5B7401Kj;
    scanf ("%d", &Fsb5B7401Kj);
    for (LwvxhItbcOEZ = 0; LwvxhItbcOEZ < Fsb5B7401Kj; LwvxhItbcOEZ++) {
        int DYuHmRvz93hg, n;
        scanf ("%d %d", &DYuHmRvz93hg, &n);
        printf ("%d\n", VIvGOBrgmh (DYuHmRvz93hg, n));
    };
}

