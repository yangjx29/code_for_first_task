void  main () {
    int iSQUVIf, GK8kJPa = (38 - 38), s, t, k = 0, n;
    struct   patient {
        char p2tgN7 [10];
        int IAfrumdbg;
    };
    struct   patient p [100], d [100], c [100], VFInEYe0X;
    scanf ("%d", &n);
    for (iSQUVIf = 0; n > iSQUVIf; iSQUVIf = iSQUVIf + 1) {
        scanf ("%s %d", p[iSQUVIf].p2tgN7, &p[iSQUVIf].IAfrumdbg);
    }
    for (iSQUVIf = 0; n > iSQUVIf; iSQUVIf = iSQUVIf + 1) {
        if (p[iSQUVIf].IAfrumdbg >= 60)
            d[GK8kJPa++] = p[iSQUVIf];
        else
            c[k++] = p[iSQUVIf];
    }
    s = GK8kJPa;
    for (iSQUVIf = 1; s > iSQUVIf; iSQUVIf++) {
        for (GK8kJPa = 0; s - iSQUVIf > GK8kJPa; GK8kJPa = GK8kJPa +1) {
            if (d[GK8kJPa +1].IAfrumdbg > d[GK8kJPa].IAfrumdbg) {
                VFInEYe0X = d[GK8kJPa];
                d[GK8kJPa] = d[GK8kJPa +1];
                d[GK8kJPa +1] = VFInEYe0X;
            };
        };
    }
    {
        iSQUVIf = 0;
        while (s > iSQUVIf) {
            printf ("%s\n", d[iSQUVIf].p2tgN7);
            iSQUVIf = iSQUVIf + 1;
        };
    }
    t = k;
    {
        iSQUVIf = 0;
        while (iSQUVIf < t) {
            printf ("%s\n", c[iSQUVIf].p2tgN7);
            iSQUVIf++;
        };
    };
}

