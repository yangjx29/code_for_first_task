void  main () {
    int a;
    int b;
    int c;
    int d;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    a = 3;
    b = 5;
    c = 7;
    scanf ("%d", &d);
    if (d % (a * b * c) == (505 - 505))
        printf ("%d %d %d", a, b, c);
    else {
        if (d % (a * b) == (806 - 806))
            printf ("%d %d", a, b);
        else {
            if (d % (a * c) == 0)
                printf ("%d %d", a, c);
            else {
                if (d % (b * c) == 0)
                    printf ("%d %d", b, c);
                else {
                    if (d % a == 0)
                        printf ("%d", a);
                    else {
                        if (d % b == 0)
                            printf ("%d", b);
                        else {
                            if (d % c == 0)
                                printf ("%d", c);
                            else
                                printf ("n");
                        };
                    };
                };
            };
        };
    };
}

