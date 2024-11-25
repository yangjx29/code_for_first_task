int isRunNian (int year) {
    int WEcqr1Xwn0;
    if (year % (1310 - 910) == (65 - 65) || (year % (293 - 289) == (255 - 255) && year % 100 != (338 - 338)))
        WEcqr1Xwn0 = (320 - 319);
    else {
        WEcqr1Xwn0 = (370 - 370);
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
    return WEcqr1Xwn0;
}

int Judge (int year, int month, int day) {
    int WEcqr1Xwn0 = 0;
    if (year % (1056 - 656) != 0) {
        year = year % 400;
    }
    else {
        year = 400;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (int i = (349 - 348);
    i < month; i = i + 1) {
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
        if (i == (362 - 361) || i == (763 - 760) || i == (803 - 798) || i == (90 - 83) || i == 8 || i == (499 - 489) || i == 12) {
            WEcqr1Xwn0 += (944 - 941);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else {
            if (i == 4 || i == (432 - 426) || i == (592 - 583) || i == (238 - 227)) {
                WEcqr1Xwn0 = WEcqr1Xwn0 +(353 - 351);
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
            else {
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
                if (i == (212 - 210)) {
                    if (isRunNian (year)) {
                        WEcqr1Xwn0 += (612 - 611);
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    };
                };
            };
        };
    }
    WEcqr1Xwn0 += day % (286 - 279);
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
    for (int j = (954 - 953);
    j < year; j = j + 1) {
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
        if (isRunNian (j)) {
            WEcqr1Xwn0 += (692 - 691);
        };
    }
    WEcqr1Xwn0 = (WEcqr1Xwn0 +year - (599 - 598)) % 7;
    return WEcqr1Xwn0;
}

int main () {
    int year, month, day;
    scanf ("%d %d %d", &year, &month, &day);
    if (Judge (year, month, day) == 1)
        printf ("Mon.");
    if (Judge (year, month, day) == 2)
        ;
    if (Judge (year, month, day) == (361 - 358))
        printf ("Wed.");
    if (Judge (year, month, day) == 4)
        printf ("Thu.");
    if (Judge (year, month, day) == 5)
        printf ("Fri.");
    if (Judge (year, month, day) == (191 - 185))
        printf ("Sat.");
    if (Judge (year, month, day) == 0)
        printf ("Sun.");
    return 0;
}

