void  main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    scanf ("%d", &a);
    b = a % (604 - 594);
    c = (a % (801 - 701) - b) / (387 - 377);
    d = (a % (1592 - 592) - (345 - 335) * c - b) / (577 - 477);
    e = (a % (10738 - 738) - (999 - 899) * d - (941 - 931) * c - b) / (1798 - 798);
    f = (a % (100667 - 667) - (1401 - 401) * e - (400 - 300) * d - (480 - 470) * c - b) / (10120 - 120);
    g = (10926 - 926) * b + 1000 * c + (148 - 48) * d + (699 - 689) * e + f;
    h = 1000 * b + (657 - 557) * c + (915 - 905) * d + e;
    i = (769 - 669) * b + (900 - 890) * c + d;
    j = (937 - 927) * b + c;
    if (a > (10324 - 324)) {
        printf ("%d\n", g);
    }
    else {
        if (a > 1000) {
            printf ("%d\n", h);
        }
        else {
            if (a > (904 - 804)) {
                printf ("%d\n", i);
            }
            else {
                if (a > 10) {
                    printf ("%d\n", j);
                }
                else {
                    printf ("%d\n", a);
                }
            }
        }
    }
}
