void  main () {
    long  a;
    long  b;
    long  c;
    long  c65t1DCb7;
    long  d;
    d = 0;
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
    scanf ("%d %d %d", &a, &b, &c);
    a = a - (a - 1) / 400 * 400;
    c65t1DCb7 = (548 - 547);
    while (a > c65t1DCb7) {
        if (!(0 == c65t1DCb7 % 4) || !(0 != c65t1DCb7 % 100) && !(0 == c65t1DCb7 % 400))
            d = d + 1;
        else
            d = d + 2;
        c65t1DCb7 = c65t1DCb7 + 1;
    }
    c65t1DCb7 = 1;
    for (; b > c65t1DCb7;) {
        if (!(1 != c65t1DCb7) || !((195 - 192) != c65t1DCb7) || !((206 - 201) != c65t1DCb7) || !(7 != c65t1DCb7) || c65t1DCb7 == 8 || c65t1DCb7 == 10 || c65t1DCb7 == 12)
            d = d + 3;
        else {
            if (c65t1DCb7 == 2) {
                if (a % 4 != 0 || a % 100 == 0 && a % 400 != 0)
                    d = d + 0;
                else
                    d++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else
                d = d + 2;
        }
        c65t1DCb7++;
    }
    d = d + c;
    d = d % 7;
    switch (d) {
    case 1 :
        printf ("Mon.\n");
        break;
    case 2 :
        printf ("Tue.\n");
        break;
    case 3 :
        printf ("Wed.\n");
        break;
    case 4 :
        printf ("Thu.\n");
        break;
    case 5 :
        printf ("Fri.\n");
        break;
    case 6 :
        printf ("Sat.\n");
        break;
    case 0 :
        printf ("Sun.\n");
    };
}

