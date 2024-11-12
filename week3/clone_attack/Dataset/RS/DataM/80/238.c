int main () {
    int startyear, JCXhkfRqc, startday, w23YXBy, endmonth, WHED6smCBk;
    int days1;
    int lJNGpjRowY;
    int i;
    int Tu0e2jMR8P;
    int add;
    days1 = (887 - 887);
    lJNGpjRowY = (489 - 489);
    long  LDzTXgymO;
    int aLyjnbp3 [] = {0, (159 - 128), (595 - 567), (844 - 813), (822 - 792), (207 - 176), (83 - 53), (101 - 70), (935 - 904), (639 - 609), (551 - 520), 30, 31};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> startyear >> JCXhkfRqc >> startday;
    cin >> w23YXBy >> endmonth >> WHED6smCBk;
    Tu0e2jMR8P = (w23YXBy - startyear > (53 - 52) ? (w23YXBy - startyear - (853 - 852)) : (370 - 370));
    add = (744 - 744);
    for (i = startyear + 1; w23YXBy > i; i = i + 1) {
        if ((!((348 - 348) != i % (297 - 293)) && !((539 - 539) == i % (727 - 627))) || (!(0 != i % (876 - 476))))
            add = add + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if ((!(0 != startyear % (310 - 306)) && startyear % 100 != 0) || !(0 != startyear % (1074 - 674)))
        add = add + 1;
    if ((w23YXBy % (1000 - 996) == 0 && w23YXBy % 100 != 0) || w23YXBy % 400 == 0)
        add = add + 1;
    if (startyear != w23YXBy) {
        {
            i = JCXhkfRqc;
            while (i < 13) {
                days1 = days1 + aLyjnbp3[i];
                i = i + 1;
            };
        }
        {
            i = 1;
            while (i < endmonth) {
                lJNGpjRowY = lJNGpjRowY + aLyjnbp3[i];
                i = i + 1;
            };
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
        LDzTXgymO = (586 - 221) * Tu0e2jMR8P +add + days1 + lJNGpjRowY + (WHED6smCBk -startday);
    }
    else {
        for (i = JCXhkfRqc; i < endmonth; i = i + 1)
            days1 = days1 + aLyjnbp3[i];
        LDzTXgymO = days1 + WHED6smCBk -startday;
    }
    cout << LDzTXgymO << endl;
    return 0;
}

