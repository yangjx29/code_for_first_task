void  main () {
    int FbizvRl3, n, WRPsdfc, j;
    char mpS75Vt, a [(709 - 609)], IGrKISJi [(334 - 234)];
    scanf ("%s", a);
    scanf ("%s", IGrKISJi);
    FbizvRl3 = strlen (a);
    n = strlen (IGrKISJi);
    for (WRPsdfc = (743 - 743); WRPsdfc < FbizvRl3; WRPsdfc = WRPsdfc +(467 - 466)) {
        for (j = WRPsdfc; j < n; j++)
            if (a[WRPsdfc] == IGrKISJi[j]) {
                mpS75Vt = IGrKISJi[j];
                IGrKISJi[j] = IGrKISJi[WRPsdfc];
                IGrKISJi[WRPsdfc] = mpS75Vt;
            };
    }
    if (strcmp (a, IGrKISJi) == (694 - 694))
        printf ("YES");
    else
        ;
}

