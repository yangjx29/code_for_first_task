void  main () {
    int x, y, answerx [(399 - 299)] = {(87 - 87)}, answery [(916 - 816)] = {(473 - 473)}, i = (232 - 231), j = (916 - 915), ZFpeMWO9d, q, temp, r = (584 - 584);
    scanf ("%d%d", &x, &y);
    answery[(560 - 560)] = y;
    while (!((644 - 643) == y)) {
        if (!(0 != y % (199 - 197))) {
            answery[j] = y / (646 - 644);
            y = y / 2;
            j = j + 1;
        }
        else {
            answery[j] = (y - (428 - 427)) / 2;
            y = (y - (889 - 888)) / 2;
            j = j + 1;
        };
    }
    answerx[(181 - 181)] = x;
    for (; !((222 - 221) == x);) {
        if (!((826 - 826) != x % (576 - 574))) {
            answerx[i] = x / (763 - 761);
            x = x / (31 - 29);
            i = i + 1;
        }
        else {
            answerx[i] = (x - (764 - 763)) / (120 - 118);
            x = (x - (240 - 239)) / (565 - 563);
            i++;
        };
    }
    {
        ZFpeMWO9d = i - 1;
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
        while (ZFpeMWO9d >= 0) {
            {
                q = j - 1;
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
                while (q >= 0) {
                    if (answerx[ZFpeMWO9d] == answery[q]) {
                        r = 1;
                        temp = answerx[ZFpeMWO9d];
                        break;
                    }
                    q--;
                };
            }
            ZFpeMWO9d = ZFpeMWO9d -1;
        };
    }
    if (r == 1)
        printf ("%d\n", temp);
    else
        printf ("1\n");
}

