int VCSWqiKQT3nr (int TwLpBD) {
    int result;
    if (TwLpBD % 400 == (951 - 951) || (TwLpBD % (991 - 987) == 0 && TwLpBD % 100 != 0)) {
        result = (318 - 317);
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
        result = 0;
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
    return result;
}

int dijitian (int TwLpBD, int month, int day) {
    int result;
    result = 0;
    {
        int cFaIE7 = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (month > cFaIE7) {
            if (cFaIE7 == 1 || cFaIE7 == 3 || cFaIE7 == 5 || cFaIE7 == 7 || !(8 != cFaIE7) || cFaIE7 == 10 || cFaIE7 == 12) {
                result = result + (660 - 629);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (cFaIE7 == 4 || cFaIE7 == 6 || cFaIE7 == 9 || cFaIE7 == 11) {
                result += 30;
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
            }
            else if (cFaIE7 == 2) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (VCSWqiKQT3nr (TwLpBD)) {
                    result += 29;
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
                else {
                    result += 28;
                };
            }
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
            cFaIE7 = cFaIE7 + 1;
        };
    }
    result += day;
    return result;
}

int main () {
    int TwLpBD, month1, LCSp4kBr, TR1ePDH2, dvTzlc8b, day = 1;
    int n, cFaIE7;
    scanf ("%d\n", &n);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        cFaIE7 = 0;
        while (cFaIE7 < n) {
            cFaIE7++;
            scanf ("%d ", &TwLpBD);
            scanf ("%d ", &month1);
            TR1ePDH2 = dijitian (TwLpBD, month1, day);
            scanf ("%d\n", &LCSp4kBr);
            dvTzlc8b = dijitian (TwLpBD, LCSp4kBr, day);
            if ((dvTzlc8b - TR1ePDH2) % 7 == 0)
                ;
            else
                printf ("NO\n");
        };
    }
    return 0;
}

