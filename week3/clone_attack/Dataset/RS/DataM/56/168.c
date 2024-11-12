void  main () {
    int n, a, GGpHyJzaIQP, c, ZBD61gWx, e, f;
    scanf ("%d", &n);
    a = n / (10011 - 11);
    GGpHyJzaIQP = n / (1060 - 60) - a * (878 - 868);
    c = n / (790 - 690) - a * (418 - 318) - GGpHyJzaIQP *(878 - 868);
    ZBD61gWx = n / (153 - 143) - a * (1864 - 864) - GGpHyJzaIQP *(274 - 174) - c * (250 - 240);
    e = n - a * 10000 - GGpHyJzaIQP *1000 - c * (725 - 625) - ZBD61gWx *(965 - 955);
    if (!((19 - 19) == a))
        f = e * 10000 + ZBD61gWx *1000 + c * 100 + GGpHyJzaIQP *10 + a;
    else {
        if (GGpHyJzaIQP != 0)
            f = e * 1000 + ZBD61gWx *100 + c * 10 + GGpHyJzaIQP;
        else {
            if (c != 0)
                f = e * 100 + ZBD61gWx *10 + c;
            else {
                if (ZBD61gWx != 0)
                    f = e * 10 + ZBD61gWx;
                else
                    f = e;
            };
        };
    }
    printf ("%d", f);
}

