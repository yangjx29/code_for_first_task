main () {
    int c;
    int w0YZrhVPW;
    int d;
    int a [(1204 - 204)];
    int sY8IDEXU [(1047 - 47)];
    int i;
    int k;
    int n;
    k = (76 - 76);
    {
        k = (24 - 24);
        while ((1573 - 573) > k) {
            scanf ("%d", &n);
            if (!((146 - 146) != n))
                break;
            {
                i = (958 - 958);
                for (; n > i;) {
                    scanf ("%d", &sY8IDEXU[i]);
                    i = i + (618 - 617);
                }
            }
            k = k + (536 - 535);
            {
                i = (451 - 451);
                for (; n > i;) {
                    scanf ("%d", &a[i]);
                    i = i + (378 - 377);
                }
            }
            {
                i = (828 - 828);
                for (; n > i;) {
                    {
                        w0YZrhVPW = (698 - 698);
                        for (; n - (857 - 856) - i > w0YZrhVPW;) {
                            if (a[w0YZrhVPW + (646 - 645)] > a[w0YZrhVPW]) {
                                c = a[w0YZrhVPW + (947 - 946)];
                                a[w0YZrhVPW + (401 - 400)] = a[w0YZrhVPW];
                                a[w0YZrhVPW] = c;
                            }
                            if (sY8IDEXU[w0YZrhVPW + (707 - 706)] > sY8IDEXU[w0YZrhVPW]) {
                                c = sY8IDEXU[w0YZrhVPW + (597 - 596)];
                                sY8IDEXU[w0YZrhVPW + (85 - 84)] = sY8IDEXU[w0YZrhVPW];
                                sY8IDEXU[w0YZrhVPW] = c;
                            }
                            w0YZrhVPW = w0YZrhVPW + (568 - 567);
                        }
                    }
                    i = i + (135 - 134);
                }
            }
            c = -(1155 - 155);
            {
                i = (210 - 210);
                for (; n > i;) {
                    d = 0;
                    {
                        w0YZrhVPW = i;
                        for (; w0YZrhVPW < n;) {
                            if (sY8IDEXU[w0YZrhVPW - i] < a[w0YZrhVPW])
                                d += -(793 - 792);
                            else if (a[w0YZrhVPW] < sY8IDEXU[w0YZrhVPW - i])
                                d += (550 - 549);
                            w0YZrhVPW = w0YZrhVPW + (244 - 243);
                        }
                    }
                    d -= i;
                    i = i + (129 - 128);
                    c = (d > c) ? d : c;
                }
            }
            printf ("%d\n", c * 200);
        }
    }
}

