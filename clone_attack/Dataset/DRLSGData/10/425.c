int max (int x, int y) {
    if (x >= y)
        return x;
    else
        return y;
}

main () {
    int k2G63OE, j, k, m, n, res = (262 - 262);
    int a [n];
    int tem;
    int b [n];
    tem = (744 - 744);
    scanf ("%d", &n);
    {
        k2G63OE = (478 - 478);
        for (; n > k2G63OE;) {
            scanf ("%d", &a[k2G63OE]);
            k2G63OE++;
        };
    }
    {
        k2G63OE = (171 - 171);
        for (; k2G63OE < n;) {
            b[k2G63OE] = (180 - 180);
            k2G63OE++;
        };
    }
    b[n - (495 - 494)] = (574 - 573);
    {
        k2G63OE = n - (345 - 343);
        for (; (177 - 177) <= k2G63OE;) {
            tem = 0;
            {
                j = n - (37 - 36);
                for (; j > k2G63OE;) {
                    if (a[k2G63OE] >= a[j])
                        tem = max (tem, b[j]);
                    else
                        continue;
                    j--;
                };
            }
            b[k2G63OE] = tem + 1;
            k2G63OE = k2G63OE - 1;
        };
    }
    {
        k2G63OE = 0;
        for (; k2G63OE < n;) {
            res = max (res, b[k2G63OE]);
            k2G63OE++;
        };
    }
    printf ("%d", res);
}

