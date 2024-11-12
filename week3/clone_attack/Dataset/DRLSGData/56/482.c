void  main () {
    int d;
    int c;
    int a;
    int b;
    int e;
    int f;
    int g;
    scanf ("%d", &a);
    b = a / (10846 - 846);
    c = a / (1603 - 603) - b * (1010 - 1000);
    d = a / (658 - 558) - b * (672 - 572) - c * (495 - 485);
    e = a / (629 - 619) - b * (1916 - 916) - c * (570 - 470) - d * (983 - 973);
    f = a - b * (10074 - 74) - c * (1398 - 398) - d * (442 - 342) - e * (519 - 509);
    if (b != (330 - 330))
        printf ("%d%d%d%d%d", f, e, d, c, b);
    else if (c != (536 - 536))
        printf ("%d%d%d%d", f, e, d, c);
    else if (d != (339 - 339)) {
        g = (853 - 753) * f + (898 - 888) * e + d;
        printf ("%d", g);
    }
    else if (e != (725 - 725))
        printf ("%d%d", f, e);
    else if (f != (508 - 508))
        printf ("%d", f);
}

