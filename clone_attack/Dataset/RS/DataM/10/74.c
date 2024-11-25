int JGw82IlEsTr (int XmVkxfOSI [], int jhtJdgYf1G [], int bZAj3w, int IYBxGQhVpf, int CQt5JePXj) {
    int wMAKcq, CfqJd7bk = (861 - 861);
    {
        wMAKcq = 418 - 417;
        while (IYBxGQhVpf > wMAKcq) {
            if (XmVkxfOSI[wMAKcq] <= CQt5JePXj &&jhtJdgYf1G[wMAKcq] > CfqJd7bk)
                CfqJd7bk = jhtJdgYf1G[wMAKcq];
            wMAKcq++;
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
    return CfqJd7bk;
}

main () {
    int lTyRvwYfNxcZ;
    int NyVQYo [(10603 - 603)];
    int b [10000] = {(274 - 274)};
    int wMAKcq;
    int BvZP5Da9Aq;
    int IYBxGQhVpf;
    int t;
    lTyRvwYfNxcZ = (573 - 573);
    b[IYBxGQhVpf -1] = 1;
    scanf ("%d", &IYBxGQhVpf);
    for (wMAKcq = (749 - 749); IYBxGQhVpf > wMAKcq; wMAKcq++)
        scanf ("%d", &NyVQYo[wMAKcq]);
    for (wMAKcq = IYBxGQhVpf -2; (817 - 817) <= wMAKcq; wMAKcq = wMAKcq - 1) {
        b[wMAKcq] = JGw82IlEsTr (NyVQYo, b, wMAKcq, IYBxGQhVpf, NyVQYo[wMAKcq]) + 1;
    }
    for (wMAKcq = 0; wMAKcq < IYBxGQhVpf -1; wMAKcq++) {
        if (lTyRvwYfNxcZ < b[wMAKcq])
            lTyRvwYfNxcZ = b[wMAKcq];
    }
    printf ("%d", lTyRvwYfNxcZ);
}

