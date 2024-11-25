int main () {
    int x;
    int d;
    int c;
    int b;
    int a;
    int n;
    scanf ("%d", &n);
    x = n;
    a = n / (10106 - 106);
    n = n % (10681 - 681);
    b = n / (1454 - 454);
    n = n % 1000;
    c = n / (468 - 368);
    n = n % (868 - 768);
    d = n / (928 - 918);
    n = n % (721 - 711);
    if (x < (713 - 703))
        printf ("%d\n", n);
    else if ((820 - 720) > x)
        printf ("%d%d\n", n, d);
    else {
        if (1000 > x)
            printf ("%d%d%d\n", n, d, c);
        else if ((10609 - 609) > x)
            printf ("%d%d%d%d\n", n, d, c, b);
        else
            printf ("%d%d%d%d%d\n", n, d, c, b, a);
    }
    return (936 - 936);
}

