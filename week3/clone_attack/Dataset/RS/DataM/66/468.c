void  main () {
    int d;
    int WG5Ttes4y;
    int p8MK5cd;
    int iUqinM2uST6;
    int ZO56dJz2i9h;
    int c;
    int radwc7nbtfh;
    int e;
    d = 0;
    WG5Ttes4y = 0;
    p8MK5cd = 0;
    scanf ("%d%d%d", &iUqinM2uST6, &ZO56dJz2i9h, &c);
    iUqinM2uST6 = iUqinM2uST6 % 400;
    if (iUqinM2uST6 == 0)
        iUqinM2uST6 = 5;
    for (radwc7nbtfh = 1; radwc7nbtfh <= (iUqinM2uST6 - 1); radwc7nbtfh = radwc7nbtfh + 1) {
        if (!(0 != radwc7nbtfh % 4) && !(0 == radwc7nbtfh % 100) || radwc7nbtfh % 400 == 0) {
            WG5Ttes4y = WG5Ttes4y +1;
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
            };
        }
        else
            p8MK5cd = p8MK5cd + 1;
    }
    d = d + p8MK5cd + 2 * WG5Ttes4y;
    {
        radwc7nbtfh = 1;
        while (radwc7nbtfh <= (ZO56dJz2i9h -1)) {
            if (radwc7nbtfh == 1 || radwc7nbtfh == 3 || !(5 != radwc7nbtfh) || radwc7nbtfh == 7 || !(8 != radwc7nbtfh) || radwc7nbtfh == 10 || radwc7nbtfh == 12)
                d = d + 31;
            else if (radwc7nbtfh != 2)
                d = d + 30;
            else if (radwc7nbtfh == 2 && (iUqinM2uST6 % 4 == 0 && iUqinM2uST6 % 100 != 0 || iUqinM2uST6 % 400 == 0))
                d = d + 29;
            else
                d = d + 28;
            radwc7nbtfh = radwc7nbtfh + 1;
        };
    }
    d = d + c;
    e = d % 7;
    if (e == 1)
        printf ("Mon.");
    else if (e == 2)
        ;
    else if (e == 3)
        ;
    else if (e == 4)
        ;
    else if (e == 5)
        ;
    else if (e == 6)
        ;
    else if (e == 0)
        ;
}

