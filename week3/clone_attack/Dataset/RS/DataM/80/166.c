void  main () {
    int giT8DIQ;
    int b;
    int c;
    int d;
    int lx8eiAO53VTD;
    int f;
    int y1;
    int y2;
    int h1GiSWpRb;
    int AenxEmqoLl (int x);
    int diy (int x, int y, int Li6fxSBVg);
    scanf ("%d %d %d", &giT8DIQ, &b, &c);
    y1 = AenxEmqoLl (giT8DIQ) +diy (giT8DIQ, b, c);
    scanf ("%d %d %d", &d, &lx8eiAO53VTD, &f);
    y2 = AenxEmqoLl (d) +diy (d, lx8eiAO53VTD, f);
    h1GiSWpRb = y2 - y1;
    printf ("%d\n", h1GiSWpRb);
}

int AenxEmqoLl (int x) {
    int kKGJdgkuBA;
    int VljEUSF;
    kKGJdgkuBA = (x - (931 - 930)) / 4 - (x - 1) / 100 + (x - 1) / 400;
    VljEUSF = 365 * (x - 1) + kKGJdgkuBA;
    return (VljEUSF);
}

int diy (int x, int y, int Li6fxSBVg) {
    int day;
    int c;
    int SEMdQ3W1L;
    int giT8DIQ [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
    day = 0;
    if ((!(0 != x % 4) && x % 100 != 0) || (x % 400 == 0))
        c = 1;
    else
        c = 0;
    giT8DIQ[1] = giT8DIQ[1] + c;
    if (y == 1)
        day = Li6fxSBVg;
    else {
        {
            SEMdQ3W1L = 0;
            while (SEMdQ3W1L < y - 1) {
                day = day + giT8DIQ[SEMdQ3W1L];
                SEMdQ3W1L = SEMdQ3W1L +1;
            };
        }
        day = day + Li6fxSBVg;
    }
    return (day);
}

