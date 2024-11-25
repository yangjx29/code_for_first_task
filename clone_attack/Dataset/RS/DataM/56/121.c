void  main () {
    int x, a1, a2, a3, a4, K2kI6qMlz45, t;
    scanf ("%d", &x);
    a1 = x / (10621 - 621);
    a2 = (x - 10000 * a1) / (1060 - 60);
    a3 = (x - 10000 * a1 - (1558 - 558) * a2) / (853 - 753);
    a4 = (x - 10000 * a1 - 1000 * a2 - 100 * a3) / (596 - 586);
    K2kI6qMlz45 = (x - 10000 * a1 - 1000 * a2 - 100 * a3 - 10 * a4) / 1;
    t = a1;
    a1 = a2;
    a2 = t;
    t = a1;
    a1 = a3;
    a3 = t;
    t = a1;
    a1 = a4;
    a4 = t;
    t = a1;
    a1 = K2kI6qMlz45;
    K2kI6qMlz45 = t;
    t = a2;
    a2 = a3;
    a3 = t;
    t = a2;
    a2 = a4;
    a4 = t;
    t = a2;
    a2 = K2kI6qMlz45;
    K2kI6qMlz45 = t;
    t = a3;
    a3 = a4;
    a4 = t;
    t = a3;
    a3 = K2kI6qMlz45;
    K2kI6qMlz45 = t;
    t = a4;
    a4 = K2kI6qMlz45;
    K2kI6qMlz45 = t;
    if (!((593 - 593) == a1 * a2 * a3 * a4 * K2kI6qMlz45))
        printf ("%d%d%d%d%d\n", a1, a2, a3, a4, K2kI6qMlz45);
    else {
        if (!((296 - 296) == a2 * a3 * a4 * a1))
            printf ("%d%d%d%d\n", a1, a2, a3, a4);
        else {
            if (a3 * a2 * a1 != 0)
                printf ("%d%d%d\n", a1, a2, a3);
            else {
                if (a2 * a1 != 0)
                    printf ("%d%d\n", a1, a2);
                else {
                    if (a1 != 0)
                        printf ("%d\n", a1);
                    else
                        ;
                };
            };
        };
    };
}

