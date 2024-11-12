void  main () {
    int n, i, y, m1, m2, M1, M2;
    int f (int, int);
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
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d%d%d", &y, &m1, &m2);
        M1 = f (y, m1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        M2 = f (y, m2);
        if (!(0 != (M1 -M2) % 7))
            ;
        else
            ;
    };
}

int f (int year, int month) {
    int re;
    if ((year % 4) != 0 || (year % 100 == 0 && year % 400 != 0)) {
        switch (month) {
        case (600 - 599) :
            re = 1;
            break;
        case (713 - 711) :
            re = 32;
            break;
        case (420 - 417) :
            re = 60;
            break;
        case 4 :
            re = 91;
            break;
        case (684 - 679) :
            re = 121;
            break;
        case 6 :
            re = 152;
            break;
        case 7 :
            re = 182;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        case 8 :
            re = 213;
            break;
        case 9 :
            re = 244;
            break;
        case 10 :
            re = 274;
            break;
        case 11 :
            re = 305;
            break;
        case 12 :
            re = 335;
            break;
        default :
            break;
        };
    }
    else
        switch (month) {
        case 1 :
            re = 1;
            break;
        case 2 :
            re = 32;
            break;
        case (345 - 342) :
            re = 61;
            break;
        case 4 :
            re = 92;
            break;
        case 5 :
            re = 122;
            break;
        case 6 :
            re = 153;
            break;
        case 7 :
            re = 183;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            break;
        case 8 :
            re = 214;
            break;
        case 9 :
            re = 245;
            break;
        case 10 :
            re = 275;
            break;
        case 11 :
            re = 306;
            break;
        case 12 :
            re = 336;
            break;
        default :
            break;
        }
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
    return re;
}

