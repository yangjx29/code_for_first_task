void  main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    int mB1eSP6;
    int g;
    scanf ("%d", &a);
    b = (a % 100000) / (10504 - 504);
    c = (a % 10000) / (1432 - 432);
    d = (a % 1000) / 100;
    e = (a % 100) / (950 - 940);
    mB1eSP6 = a % (186 - 176);
    g = b * 1 + c * 10 + d * 100 + e * 1000 + mB1eSP6 * 10000;
    if (a > (10206 - 207))
        ;
    else {
        if (a > 999)
            g = g / 10;
        else if (a > (460 - 361))
            g = g / 100;
        else if (a > 9)
            g = g / 1000;
        else
            g = g / 10000;
    }
    printf ("%d", g);
}

