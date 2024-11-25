void  main () {
    int u9dQrRw, a [1000], nj2EHt, j, k, xoS4XZ = 0;
    scanf ("%d%d", &u9dQrRw, &k);
    {
        nj2EHt = 0;
        while (u9dQrRw > nj2EHt) {
            scanf ("%d", &a[nj2EHt]);
            nj2EHt = nj2EHt + 1;
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
    {
        nj2EHt = 0;
        while (nj2EHt < u9dQrRw) {
            {
                j = nj2EHt;
                while (u9dQrRw > j) {
                    if (a[nj2EHt] + a[j] == k) {
                        xoS4XZ = 1;
                        break;
                    }
                    j = j + 1;
                };
            }
            if (xoS4XZ)
                break;
            nj2EHt = nj2EHt + 1;
        };
    }
    if (xoS4XZ)
        ;
    else
        ;
}

