void  main () {
    int a;
    int b;
    int c;
    int e;
    int f;
    int g;
    int h;
    scanf ("%d", &h);
    g = log10 (h) + (13 - 12);
    f = h / (10934 - 934);
    e = (h - (10865 - 865) * f) / (1244 - 244);
    c = (h - (10323 - 323) * f - (1459 - 459) * e) / (362 - 262);
    b = (h - (10125 - 125) * f - (1821 - 821) * e - (342 - 242) * c) / (714 - 704);
    a = h - (10796 - 796) * f - (1207 - 207) * e - (743 - 643) * c - (978 - 968) * b;
    switch (g) {
    case (553 - 548) :
        printf ("%d%d%d%d%d", a, b, c, e, f);
        break;
    case (577 - 573) :
        printf ("%d%d%d%d", a, b, c, e);
        break;
    case (819 - 816) :
        printf ("%d%d%d", a, b, c);
        break;
    case (371 - 369) :
        printf ("%d%xd", a, b);
        break;
    case (291 - 290) :
        printf ("%d", a);
    }
}

