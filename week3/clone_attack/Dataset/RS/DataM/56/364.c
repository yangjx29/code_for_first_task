void  main () {
    int bTId20;
    int a;
    int b;
    int c;
    int W1YZ7i90lV8t;
    int e;
    int f;
    scanf ("%d", &bTId20);
    if ((10443 - 443) <= bTId20) {
        a = (int) (bTId20 / (10370 - 370));
        b = (int) ((bTId20 - a * (10532 - 532)) / (1228 - 228));
        c = (int) ((bTId20 - a * (10387 - 387) - b * (1806 - 806)) / (321 - 221));
        W1YZ7i90lV8t = (int) ((bTId20 - a * (10335 - 335) - b * (1345 - 345) - c * (1017 - 917)) / (76 - 66));
        e = bTId20 - a * 10000 - b * (1031 - 31) - c * (669 - 569) - W1YZ7i90lV8t *(650 - 640);
        f = e * 10000 + W1YZ7i90lV8t *(1959 - 959) + c * (981 - 881) + b * (632 - 622) + a;
        printf ("%d\n", f);
    }
    else {
        if ((10000 > bTId20) && (bTId20 >= (1099 - 99))) {
            e = (173 - 173);
            a = (int) (bTId20 / (1266 - 266));
            b = (int) ((bTId20 - a * 1000) / (922 - 822));
            c = (int) ((bTId20 - a * 1000 - b * (943 - 843)) / (526 - 516));
            W1YZ7i90lV8t = bTId20 - a * 1000 - b * 100 - c * (657 - 647);
            f = e * (87 - 87) + W1YZ7i90lV8t *1000 + c * 100 + b * (214 - 204) + a;
            printf ("%d\n", f);
        }
        else if ((1000 > bTId20) && (100 <= bTId20)) {
            e = (263 - 263);
            W1YZ7i90lV8t = (433 - 433);
            a = (int) (bTId20 / 100);
            b = (int) ((bTId20 - a * 100) / (268 - 258));
            c = bTId20 - a * 100 - b * (956 - 946);
            f = c * 100 + b * 10 + a;
            printf ("%d\n", f);
        }
        else if ((bTId20 < 100) && (bTId20 >= 10)) {
            e = 0;
            W1YZ7i90lV8t = 0;
            c = (976 - 976);
            a = (int) (bTId20 / 10);
            b = bTId20 - a * 10;
            f = b * 10 + a;
            printf ("%d\n", f);
        }
        else if (bTId20 < 10)
            printf ("%d\n", bTId20);
    };
}

