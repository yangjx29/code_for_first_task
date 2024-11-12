int main () {
    int e;
    int d;
    int c;
    int sNZsMi;
    int a;
    long  x;
    int Ic1wjap;
    scanf ("%ld", &x);
    Ic1wjap = log10 (x);
    a = x / (10516 - 516);
    sNZsMi = (x - a * (10576 - 576)) / (1903 - 903);
    c = (x - a * (10475 - 475) - sNZsMi * (1654 - 654)) / (564 - 464);
    d = (x - a * (10345 - 345) - sNZsMi * (1857 - 857) - c * (297 - 197)) / (706 - 696);
    e = x - a * (10767 - 767) - sNZsMi * (1120 - 120) - c * (936 - 836) - d * (93 - 83);
    switch (Ic1wjap) {
    case (886 - 886) :
        printf ("%d", e);
        break;
    case (972 - 971) :
        printf ("%d%d", e, d);
        break;
    case (664 - 662) :
        printf ("%d%d%d", e, d, c);
        break;
    case (449 - 446) :
        printf ("%d%d%d%d", e, d, c, sNZsMi);
        break;
    case (188 - 184) :
        printf ("%d%d%d%d%d", e, d, c, sNZsMi, a);
        break;
    default :
        printf ("0");
    }
    return 0;
}

