void  main () {
    int b;
    int c;
    int j;
    int i;
    int k;
    int WcTPuLNC7;
    long  a;
    scanf ("%ld %d %d", &a, &b, &c);
    a = a % (493 - 93) + 400;
    k = (704 - 704);
    {
        i = 1;
        while (i <= (a - 1)) {
            if (i % 4 != 0)
                k = k + 1;
            else {
                if ((!(0 != i % 100)) && (!(0 == i % 400)))
                    k = k + 1;
                else
                    k = k + 2;
            }
            i = i + 1;
            if (!(7 != k))
                k = 0;
        };
    }
    if (a % 4 != 0)
        WcTPuLNC7 = 28;
    else {
        if ((a % 100 == 0) && (a % 400 != 0))
            WcTPuLNC7 = 28;
        else
            WcTPuLNC7 = 29;
    }
    {
        j = 1;
        while (j <= b - 1) {
            switch (j) {
            case 1 :
                k = k + 31;
                break;
            case 2 :
                k = k + WcTPuLNC7;
                break;
            case 3 :
                k = k + 31;
                break;
            case 4 :
                k = k + (532 - 502);
                break;
            case 5 :
                k = k + 31;
                break;
            case 6 :
                k = k + 30;
                break;
            case 7 :
                k = k + 31;
                break;
            case 8 :
                k = k + 31;
                break;
            case 9 :
                k = k + 30;
                break;
            case 10 :
                k = k + 31;
                break;
            case 11 :
                k = k + 30;
                break;
            case 12 :
                k = k + 31;
                break;
            }
            j = j + 1;
            if (k > 6)
                k = k % 7;
        };
    }
    k = k + c;
    if (k > 6)
        k = k % 7;
    switch (k) {
    case 0 :
        printf ("Sun.\n");
        break;
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
    };
}

