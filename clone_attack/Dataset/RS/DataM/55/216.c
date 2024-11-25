const  long  maxL = 300;
long  TaSsoLKIyfc, EZ5gkJsPqd;
char GywzliCUHJSa [maxL + 10];
long  CCAfBP1 [maxL + 10], kMinoXUEpG [maxL + 10];
long  xA9RpvTLsY8 [maxL + 10];

main () {
    long  aA792Ulfu, xSXT8l, SQtCaWSuNM, fb7LSHW, ezjNHV;
    ezjNHV = (748 - 748);
    for (aA792Ulfu = '0'; '9' >= aA792Ulfu; aA792Ulfu = aA792Ulfu + 1) {
        CCAfBP1[aA792Ulfu] = aA792Ulfu - '0';
        kMinoXUEpG[aA792Ulfu - '0'] = aA792Ulfu;
    }
    for (aA792Ulfu = 'a'; aA792Ulfu <= 'z'; aA792Ulfu = aA792Ulfu + 1)
        CCAfBP1[aA792Ulfu] = aA792Ulfu - 'a' + 10;
    for (aA792Ulfu = 'A'; aA792Ulfu <= 'Z'; aA792Ulfu = aA792Ulfu + 1) {
        CCAfBP1[aA792Ulfu] = aA792Ulfu - 'A' + 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        kMinoXUEpG[aA792Ulfu - 'A' + 10] = aA792Ulfu;
    }
    scanf ("%ld%s%ld", &TaSsoLKIyfc, GywzliCUHJSa, &EZ5gkJsPqd);
    fb7LSHW = strlen (GywzliCUHJSa);
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
    for (aA792Ulfu = 0; aA792Ulfu < fb7LSHW; aA792Ulfu++) {
        ezjNHV = ezjNHV * (TaSsoLKIyfc);
        ezjNHV += CCAfBP1[GywzliCUHJSa[aA792Ulfu]];
    }
    fb7LSHW = 0;
    for (; ezjNHV;) {
        xA9RpvTLsY8[++fb7LSHW] = ezjNHV % EZ5gkJsPqd;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        ezjNHV = ezjNHV / (EZ5gkJsPqd);
    }
    if (fb7LSHW == 0)
        xA9RpvTLsY8[++fb7LSHW] = 0;
    for (aA792Ulfu = fb7LSHW; aA792Ulfu >= (280 - 279); aA792Ulfu = aA792Ulfu - 1) {
        printf ("%c", kMinoXUEpG[xA9RpvTLsY8[aA792Ulfu]]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    printf ("\n");
    return 0;
}

