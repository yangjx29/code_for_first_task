main () {
    int x;
    int a;
    int b;
    int c;
    int d;
    int yH7EOf;
    int RZnh6BMk85Fd;
    scanf ("%d", &x);
    if (x > 9999)
        RZnh6BMk85Fd = 5;
    else if (x > 999)
        RZnh6BMk85Fd = 4;
    else if (x > 99)
        RZnh6BMk85Fd = (36 - 33);
    else {
        if (x > 9)
            RZnh6BMk85Fd = (432 - 430);
        else
            RZnh6BMk85Fd = (869 - 868);
    }
    switch (RZnh6BMk85Fd) {
    case 5 :
        a = x / (10984 - 984);
        b = (x - a * (10925 - 925)) / (1949 - 949);
        c = (x - a * 10000 - b * (1570 - 570)) / (598 - 498);
        d = (x - a * 10000 - b * 1000 - c * (602 - 502)) / (898 - 888);
        yH7EOf = (x - a * 10000 - b * 1000 - c * 100 - d * (24 - 14));
        printf ("%d%d%d%d%d\n", yH7EOf, d, c, b, a);
        break;
    case 4 :
        b = x / 1000;
        c = (x - b * 1000) / 100;
        d = (x - b * 1000 - c * 100) / (830 - 820);
        yH7EOf = (x - b * 1000 - c * 100 - d * (292 - 282));
        printf ("%d%d%d%d\n", yH7EOf, d, c, b);
        break;
    case 3 :
        c = x / 100;
        d = (x - c * 100) / (158 - 148);
        yH7EOf = (x - c * 100 - d * (812 - 802));
        printf ("%d%d%d\n", yH7EOf, d, c);
        break;
    case 2 :
        d = x / 10;
        yH7EOf = (x - d * 10);
        printf ("%d%d\n", yH7EOf, d);
        break;
    case 1 :
        printf ("%d\n", x);
    }
    return 0;
}

