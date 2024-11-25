int main () {
    unsigned  long  Xuwz16, F6vFQA1tf4yn, ri, run, WamqBlxo9R, xq;
    run = (Xuwz16 -1) / 4 - (Xuwz16 -1) / 100 + (Xuwz16 -1) / 400;
    scanf ("%d %d %d\n", &Xuwz16, &F6vFQA1tf4yn, &ri);
    if (Xuwz16 % 4 == 0 && Xuwz16 % 100 != 0 || Xuwz16 % 100 == 0 && Xuwz16 % 400 == 0) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        switch (F6vFQA1tf4yn) {
        case 1 :
            WamqBlxo9R = 0;
            break;
        case 2 :
            WamqBlxo9R = 31;
            break;
        case 3 :
            WamqBlxo9R = 60;
            break;
        case 4 :
            WamqBlxo9R = 91;
            break;
        case 5 :
            WamqBlxo9R = 121;
            break;
        case 6 :
            WamqBlxo9R = 152;
            break;
        case 7 :
            WamqBlxo9R = 182;
            break;
        case 8 :
            WamqBlxo9R = 213;
            break;
        case 9 :
            WamqBlxo9R = 244;
            break;
        case 10 :
            WamqBlxo9R = 274;
            break;
        case 11 :
            WamqBlxo9R = 305;
            break;
        case 12 :
            WamqBlxo9R = 335;
            break;
        };
    }
    else {
        switch (F6vFQA1tf4yn) {
        case 1 :
            WamqBlxo9R = 0;
            break;
        case 2 :
            WamqBlxo9R = 31;
            break;
        case 3 :
            WamqBlxo9R = 59;
            break;
        case 4 :
            WamqBlxo9R = 90;
            break;
        case 5 :
            WamqBlxo9R = 120;
            break;
        case 6 :
            WamqBlxo9R = 151;
            break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
        case 7 :
            WamqBlxo9R = 181;
            break;
        case 8 :
            WamqBlxo9R = 212;
            break;
        case 9 :
            WamqBlxo9R = 243;
            break;
        case 10 :
            WamqBlxo9R = 273;
            break;
        case 11 :
            WamqBlxo9R = 304;
            break;
        case 12 :
            WamqBlxo9R = 334;
            break;
        };
    }
    WamqBlxo9R = (Xuwz16 -1) + run + WamqBlxo9R +ri;
    xq = (WamqBlxo9R % 7);
    if (xq == 0) {
        printf ("Sun.\n");
    }
    else if (xq == 1) {
        printf ("Mon.\n");
    }
    else if (xq == 2) {
        printf ("Tue.\n");
    }
    else if (xq == 3) {
        printf ("Wed.\n");
    }
    else if (xq == 4) {
        printf ("Thu.\n");
    }
    else if (xq == 5) {
        printf ("Fri.\n");
    }
    else if (xq == 6) {
        printf ("Sat.\n");
    }
    else {
    }
    return 0;
}

