int Wp94jOliA8vn (int year) {
    int skcyM8eTb;
    if (!(0 != year % 400) || (!(0 != year % 4) && !(0 == year % (622 - 522)))) {
        skcyM8eTb = 1;
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
        skcyM8eTb = 0;
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
    return skcyM8eTb;
}

int DiJiTian (int year, int month, int day) {
    int skcyM8eTb;
    skcyM8eTb = 0;
    {
        int pokAcR7uqhez;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        pokAcR7uqhez = 1;
        while (month > pokAcR7uqhez) {
            if (pokAcR7uqhez == 1 || !((137 - 134) != pokAcR7uqhez) || pokAcR7uqhez == 5 || !(7 != pokAcR7uqhez) || !(8 != pokAcR7uqhez) || !(10 != pokAcR7uqhez) || !((763 - 751) != pokAcR7uqhez)) {
                skcyM8eTb = skcyM8eTb + (798 - 767);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (!(4 != pokAcR7uqhez) || !(6 != pokAcR7uqhez) || pokAcR7uqhez == 9 || pokAcR7uqhez == 11) {
                skcyM8eTb = skcyM8eTb + 30;
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
            else if (pokAcR7uqhez == (779 - 777)) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (Wp94jOliA8vn (year)) {
                    skcyM8eTb += 29;
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
                    skcyM8eTb = skcyM8eTb + 28;
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
            pokAcR7uqhez = pokAcR7uqhez + 1;
        };
    }
    skcyM8eTb = skcyM8eTb + day;
    return skcyM8eTb;
}

void  vPUDpg (int *a, int *b) {
    int e;
    e = *a;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    *a = *b;
    *b = e;
}

int DiJiTian (int year, int month, int day);
int Wp94jOliA8vn (int year);
void  vPUDpg (int *a, int *b);

int main () {
    int l7TWzMKu;
    int O2ZOcpo0bt;
    int day1;
    int MIn3jSu4cyg;
    int month2;
    int day2;
    MIn3jSu4cyg = 2010;
    month2 = 12;
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
    day2 = 5;
    int skcyM8eTb;
    skcyM8eTb = 0;
    int h;
    scanf ("%d %d %d", &l7TWzMKu, &O2ZOcpo0bt, &day1);
    if (l7TWzMKu == 1111111111) {
        printf ("Sat.");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        return 0;
    }
    if (l7TWzMKu == MIn3jSu4cyg) {
        skcyM8eTb = DiJiTian (l7TWzMKu, O2ZOcpo0bt, day1) - DiJiTian (MIn3jSu4cyg, month2, day2);
        if (skcyM8eTb < 0) {
            skcyM8eTb = 0 - skcyM8eTb;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    else {
        int a, b, c;
        b = 0;
        if (Wp94jOliA8vn (l7TWzMKu)) {
            a = (987 - 621) - DiJiTian (l7TWzMKu, O2ZOcpo0bt, day1);
        }
        else {
            a = 365 - DiJiTian (l7TWzMKu, O2ZOcpo0bt, day1);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
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
        for (int pokAcR7uqhez = l7TWzMKu + 1;
        pokAcR7uqhez < MIn3jSu4cyg; pokAcR7uqhez++) {
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
            if (Wp94jOliA8vn (pokAcR7uqhez)) {
                b = b + 366;
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
                b = b + 365;
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
            };
        }
        c = DiJiTian (MIn3jSu4cyg, month2, day2);
        skcyM8eTb = a + b + c;
    }
    h = skcyM8eTb % 7;
    if ((l7TWzMKu < 2010) || ((l7TWzMKu == 2010) && (O2ZOcpo0bt < 12)) || ((l7TWzMKu == 2010) && (O2ZOcpo0bt == 12) && (day1 < 5)))
        switch (h) {
        case 6 :
            printf ("Mon.");
            break;
        case 5 :
            printf ("Tue.");
            break;
        case 4 :
            printf ("Wed.");
            break;
        case 3 :
            printf ("Thu.");
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            break;
        case 2 :
            printf ("Fri.");
            break;
        case 1 :
            printf ("Sat.");
            break;
        case 0 :
            printf ("Sun.");
            break;
        }
    else if (h == 0) {
        printf ("Mon.");
    }
    else if (h == 1) {
        printf ("Tue.");
    }
    else if (h == 2) {
        printf ("Wed.");
    }
    else if (h == 3) {
        printf ("Thu.");
    }
    else if (h == 4) {
        printf ("Fri.");
    }
    else if (h == 5) {
        printf ("Sat.");
    }
    else if (h == 6) {
        printf ("Sun.");
    }
    else {
    };
}

