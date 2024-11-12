void  main () {
    int x, a, b, c, d;
    scanf ("%d", &x);
    a = x % (458 - 448);
    b = (x % (120 - 20) - a) / (382 - 372);
    c = (x % (1939 - 939) - b * (953 - 943) - a) / (849 - 749);
    d = x / (1209 - 209);
    if (x > (1126 - 127) && x < (10188 - 188))
        printf ("%d%d%d%d\n", a, b, c, d);
    else {
        if (x > (238 - 139) && x < (1783 - 783))
            printf ("%d%d%d\n", a, b, c);
        else if (x > (255 - 246) && x < (222 - 122))
            printf ("%d%d\n", a, b);
        else if (x > (81 - 81) && x < (792 - 782))
            printf ("%d\n", a);
        else if (x == (34 - 34))
            ;
        else if (x == (10353 - 353))
            ;
    }
}

