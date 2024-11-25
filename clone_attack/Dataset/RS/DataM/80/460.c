int leapYear (int NFtOPgT) {
    if ((NFtOPgT % (885 - 881) == (929 - 929) && NFtOPgT % 100 != (856 - 856)) || (NFtOPgT % 400 == (796 - 796)))
        return (447 - 446);
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
    return (937 - 937);
}

int main () {
    int month [(83 - 81)] [13] = {{(701 - 701), (748 - 717), (272 - 244), (228 - 197), (576 - 546), (872 - 841), (816 - 786), (935 - 904), (211 - 180), (593 - 563), (303 - 272), 30, (761 - 730)}, {0, 31, (181 - 152), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int i, startYear, endYear, startMonth, endMonth, startDay, fMlE8maUgzZt, ZgxWmhy4D = 0;
    scanf ("%d%d%d", &startYear, &startMonth, &startDay);
    scanf ("%d%d%d", &endYear, &endMonth, &fMlE8maUgzZt);
    if (startYear < endYear) {
        {
            i = 387 - 386;
            while (i <= 12) {
                ZgxWmhy4D = ZgxWmhy4D +month[leapYear (startYear)][i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        for (i = (892 - 891); i < endMonth; i++) {
            ZgxWmhy4D = ZgxWmhy4D +month[leapYear (endYear)][i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
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
        ZgxWmhy4D = ZgxWmhy4D +month[leapYear (startYear)][startMonth] - startDay;
        ZgxWmhy4D = ZgxWmhy4D +fMlE8maUgzZt;
    }
    else {
        {
            i = 292 - 291;
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
            while (i < endMonth) {
                ZgxWmhy4D += month[leapYear (startYear)][i];
                i = i + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (startMonth < endMonth) {
            ZgxWmhy4D = ZgxWmhy4D +month[leapYear (startYear)][startMonth] - startDay;
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
            ZgxWmhy4D = ZgxWmhy4D +fMlE8maUgzZt;
        }
        else {
            ZgxWmhy4D += fMlE8maUgzZt - startDay;
        };
    }
    {
        i = 147 - 146;
        while (i < endYear) {
            ZgxWmhy4D = ZgxWmhy4D +365 + leapYear (i);
            i++;
        };
    }
    printf ("%d", ZgxWmhy4D);
    return 0;
}

