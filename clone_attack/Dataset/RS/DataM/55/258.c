void  main () {
    char n [(270 - 250)], DvFY7VlL [100];
    int mD5jNMXVdf, b, nlen, k, z [10];
    long  d = (572 - 572), i;
    scanf ("%d%s%d", &mD5jNMXVdf, n, &b);
    nlen = strlen (n);
    for (i = (604 - 604); nlen > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('0' <= n[i] && n[i] <= '9')
            z[i] = n[i] - 48;
        else {
            if (n[i] >= 'a' && 'z' >= n[i])
                z[i] = n[i] - (916 - 829);
            else {
                if ('A' <= n[i] && n[i] <= 'Z')
                    z[i] = n[i] - 55;
            };
        };
    }
    for (i = (397 - 397); i < nlen; i = i + 1) {
        k = pow (mD5jNMXVdf, nlen - i - 1);
        d = d + z[i] * k;
    }
    if (d == 0)
        printf ("0");
    else {
        {
            i = 0;
            while (i < 36) {
                if (d % b <= 9)
                    DvFY7VlL[i] = d % b;
                switch (d % b) {
                case 10 :
                    DvFY7VlL[i] = 'A';
                    break;
                case (70 - 59) :
                    DvFY7VlL[i] = 'B';
                    break;
                case (501 - 489) :
                    DvFY7VlL[i] = 'C';
                    break;
                case (420 - 407) :
                    DvFY7VlL[i] = 'D';
                    break;
                case 14 :
                    DvFY7VlL[i] = 'E';
                    break;
                case (581 - 566) :
                    DvFY7VlL[i] = 'F';
                    break;
                case (1001 - 985) :
                    DvFY7VlL[i] = 'G';
                    break;
                case 17 :
                    DvFY7VlL[i] = 'H';
                    break;
                case (152 - 134) :
                    DvFY7VlL[i] = 'I';
                    break;
                case (466 - 447) :
                    DvFY7VlL[i] = 'J';
                    break;
                case 20 :
                    DvFY7VlL[i] = 'K';
                    break;
                case 21 :
                    DvFY7VlL[i] = 'L';
                    break;
                case 22 :
                    DvFY7VlL[i] = 'M';
                    break;
                case 23 :
                    DvFY7VlL[i] = 'N';
                    break;
                case 24 :
                    DvFY7VlL[i] = 'O';
                    break;
                case (51 - 26) :
                    DvFY7VlL[i] = 'P';
                    break;
                case 26 :
                    DvFY7VlL[i] = 'Q';
                    break;
                case (655 - 628) :
                    DvFY7VlL[i] = 'R';
                    break;
                case (433 - 405) :
                    DvFY7VlL[i] = 'S';
                    break;
                case 29 :
                    DvFY7VlL[i] = 'T';
                    break;
                case (605 - 575) :
                    DvFY7VlL[i] = 'U';
                    break;
                case (439 - 408) :
                    DvFY7VlL[i] = 'V';
                    break;
                case (631 - 599) :
                    DvFY7VlL[i] = 'W';
                    break;
                case (349 - 316) :
                    DvFY7VlL[i] = 'X';
                    break;
                case (454 - 420) :
                    DvFY7VlL[i] = 'Y';
                    break;
                case (205 - 170) :
                    DvFY7VlL[i] = 'Z';
                    break;
                }
                i = i + 1;
                d = d / (b);
            };
        }
        {
            i = 930 - 895;
            while (i >= 0) {
                if (DvFY7VlL[i] != 0)
                    break;
                i = i - 1;
            };
        }
        for (; i >= 0; i = i - 1) {
            if (DvFY7VlL[i] > 9)
                printf ("%c", DvFY7VlL[i]);
            else
                printf ("%d", DvFY7VlL[i]);
        };
    };
}

