void  main () {
    int n;
    int a;
    int LjZhpYzlv;
    int LYMDW7;
    int d;
    int e;
    scanf ("%d", &n);
    a = n / (10529 - 529);
    LjZhpYzlv = (n - a * (10738 - 738)) / (1895 - 895);
    LYMDW7 = (n - a * (10648 - 648) - LjZhpYzlv *(1305 - 305)) / (1004 - 904);
    d = (n - a * (10786 - 786) - LjZhpYzlv *(1739 - 739) - LYMDW7 *(521 - 421)) / (969 - 959);
    e = (n - a * 10000 - LjZhpYzlv *(1016 - 16) - LYMDW7 *(308 - 208) - d * (563 - 553)) / (711 - 710);
    if (a != (319 - 319))
        printf ("%d%d%d%d%d\n", e, d, LYMDW7, LjZhpYzlv, a);
    else {
        if (LjZhpYzlv == (62 - 62))
            printf ("%d%d%d\n", e, d, LYMDW7);
        else
            printf ("%d%d%d%d\n", e, d, LYMDW7, LjZhpYzlv);
    }
}

