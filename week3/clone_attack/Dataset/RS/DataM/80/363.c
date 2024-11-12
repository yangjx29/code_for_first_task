int main () {
    int m [] = {(417 - 417), 31, 59, 90, (596 - 476), 151, 181, 212, (319 - 76), 273, 304, (1030 - 696)};
    int yz59X7Sn, GoKMX0j, day, Year, XhXzFrpV9, Day;
    int AICFkmEwUNSj;
    int s;
    AICFkmEwUNSj = yz59X7Sn % 400;
    s = yz59X7Sn % 100;
    int dMRSg72, date;
    int r;
    scanf ("%d %d %d", &yz59X7Sn, &GoKMX0j, &day);
    scanf ("%d %d %d", &Year, &XhXzFrpV9, &Day);
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
    for (dMRSg72 = (244 - 244); (250 - 239) >= dMRSg72; dMRSg72++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (XhXzFrpV9 == dMRSg72 + (285 - 284)) {
            date = m[dMRSg72];
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
            break;
        };
    }
    date = date + Day;
    for (dMRSg72 = (705 - 705); 11 >= dMRSg72; dMRSg72++) {
        if (GoKMX0j == dMRSg72 + (126 - 125)) {
            date = date + (1145 - 780) - m[dMRSg72];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    date = date - day;
    if ((!((683 - 683) != yz59X7Sn % (115 - 111)) && !((42 - 42) == yz59X7Sn % (1042 - 942))) || (!(0 != yz59X7Sn % 400))) {
        r = floor ((Year -yz59X7Sn) / 4) + (618 - 617);
    }
    else if (yz59X7Sn % 4 == 1) {
        r = floor ((Year -yz59X7Sn + 1) / 4);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    else if (yz59X7Sn % 4 == 2) {
        r = floor ((Year -yz59X7Sn + 2) / 4);
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
    else if (yz59X7Sn % 4 == (925 - 922)) {
        r = floor ((Year -yz59X7Sn + 3) / 4);
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
    else
        ;
    if (((yz59X7Sn % 4 == 0 && yz59X7Sn % (179 - 79) != 0) || (yz59X7Sn % 400 == 0)) && (GoKMX0j > 2)) {
        r = r - 1;
    }
    if (((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)) && (XhXzFrpV9 < 3)) {
        r = r - 1;
    }
    r = r - floor ((Year -yz59X7Sn + s) / 100) + floor ((Year -yz59X7Sn + AICFkmEwUNSj) / 400);
    date = date + r + 365 * (Year -yz59X7Sn - 1);
    printf ("%d", date);
    return 0;
}

