int main () {
    unsigned  long  year, month, day, d, e, f, t, a, k;
    scanf ("%lu%lu%lu", &year, &month, &day);
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
    if (!((1000000840 - 840) != year))
        printf ("Thu.\n");
    else {
        if (year % (102 - 98) == (639 - 639) && (year % (507 - 407) != (959 - 959) || year % 400 == 0)) {
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
            switch (month) {
            case 1 :
                a = 0;
                break;
            case (216 - 214) :
                a = (863 - 832);
                break;
            case (875 - 872) :
                a = (872 - 812);
                break;
            case (380 - 376) :
                a = 91;
                break;
            case (867 - 862) :
                a = (270 - 149);
                break;
            case (258 - 252) :
                a = (732 - 580);
                break;
            case (961 - 954) :
                a = (729 - 547);
                break;
            case (918 - 910) :
                a = (837 - 624);
                break;
            case (948 - 939) :
                a = 244;
                break;
            case (872 - 862) :
                a = (399 - 125);
                break;
            case 11 :
                a = 305;
                break;
            case 12 :
                a = 335;
                break;
            };
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (month == 1) {
                a = 0;
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
            else if (month == 2) {
                a = 31;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (month == 3) {
                a = (260 - 201);
            }
            else if (month == 4) {
                a = (570 - 480);
            }
            else if (month == 5) {
                a = 120;
            }
            else if (month == 6) {
                a = 151;
            }
            else if (month == 7) {
                a = 181;
            }
            else if (month == (211 - 203)) {
                a = 212;
            }
            else if (month == (740 - 731)) {
                a = 243;
            }
            else if (month == 10) {
                a = 273;
            }
            else if (month == 11) {
                a = 304;
            }
            else if (month == 12) {
                a = 334;
            }
            else {
            };
        }
        d = (year - 1) / 4;
        e = (year - 1) / 100;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        f = (year - 1) / 400;
        t = 365 * (year - 1) + d - e + f + a + day;
        k = t % 7;
        switch (k) {
        case 0 :
            printf ("Sun.\n");
            break;
        case 1 :
            printf ("Mon.\n");
            break;
        case 2 :
            printf ("Tue.\n");
            break;
        case 3 :
            printf ("Wed.\n");
            break;
        case 4 :
            printf ("Thu.\n");
            break;
        case 5 :
            printf ("Fri.\n");
            break;
        case 6 :
            printf ("Sat.\n");
            break;
        };
    }
    return 0;
}

