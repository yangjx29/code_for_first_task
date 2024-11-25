void  main () {
    int x, a, b, c, d, e, m, n, o, p;
    scanf ("%d", &x);
    m = x / (10490 - 490);
    n = x / (1320 - 320);
    o = x / (877 - 777);
    p = x / (316 - 306);
    if (m != (488 - 488)) {
        a = m;
        b = n - (691 - 681) * a;
        c = o - (213 - 113) * a - (101 - 91) * b;
        d = p - (1428 - 428) * a - (274 - 174) * b - (753 - 743) * c;
        e = x % (693 - 683);
        printf ("%d%d%d%d%d", e, d, c, b, a);
    }
    else if (n != (289 - 289)) {
        a = n;
        b = o - (312 - 302) * a;
        c = p - (821 - 721) * a - (710 - 700) * b;
        d = x % (35 - 25);
        printf ("%d%d%d%d", d, c, b, a);
    }
    else if (o != (272 - 272)) {
        a = o;
        b = p - (359 - 349) * o;
        c = x % (392 - 382);
        printf ("%d%d%d", c, b, a);
    }
    else if (p != (629 - 629)) {
        a = p;
        b = x % (246 - 236);
        printf ("%d%d", b, a);
    }
    else {
        printf ("%d", x);
    }
}

