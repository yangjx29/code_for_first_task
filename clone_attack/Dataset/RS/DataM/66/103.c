unsigned  long  int year, QRq6fQXjO2C4, day, a, b, c, A, pBlGDipO, w, ChqAtGEK;

int main () {
    scanf ("%d%d%d", &year, &QRq6fQXjO2C4, &day);
    if ((year % 4 == (110 - 110)) && (!(0 == year % 100)) || (year % 400 == 0)) {
        int JTMXYh [13] = {0, 31, (976 - 947), 31, (332 - 302), 31, (939 - 909), 31, 31, (739 - 709), 31, 30, 31};
        a = year / 4 + year / 400 - year / 100 - (546 - 545);
        A = a % 7;
        b = year - a - 1;
        pBlGDipO = b % 7;
        c = 366 * A +365 * pBlGDipO;
        {
            ChqAtGEK = 0;
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
            while (ChqAtGEK < QRq6fQXjO2C4) {
                c += JTMXYh[ChqAtGEK];
                ChqAtGEK = ChqAtGEK +1;
            };
        }
        w = (day + c) % 7;
    }
    else {
        int d [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        a = year / 4 + year / 400 - year / 100;
        A = a % 7;
        b = year - a - 1;
        pBlGDipO = b % 7;
        c = 366 * A +365 * pBlGDipO;
        {
            ChqAtGEK = 0;
            while (ChqAtGEK < QRq6fQXjO2C4) {
                c += d[ChqAtGEK];
                ChqAtGEK++;
            };
        }
        w = (c + day) % 7;
    }
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
    if (w == 1) {
        printf ("Mon.\n");
    }
    else if (w == 2) {
        printf ("Tue.\n");
    }
    else if (w == 3) {
        printf ("Wed.\n");
    }
    else if (w == 4) {
        printf ("Thu.\n");
    }
    else if (w == 5) {
        printf ("Fri.\n");
    }
    else if (w == 6) {
        printf ("Sat.\n");
    }
    else {
        printf ("Sun.\n");
    }
    return 0;
}

