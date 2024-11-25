int main () {
    int a, b;
    int p [12] = {(889 - 858), (956 - 928), (254 - 223), (452 - 422), (984 - 953), (974 - 944), (108 - 77), (439 - 408), (62 - 32), 31, 30, 31};
    long  year;
    long  month;
    long  day;
    long  y;
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
    int sum;
    scanf ("%d%d%d", &year, &month, &day);
    if (year % (1276 - 876) == (746 - 746)) {
        sum = (196 - 196);
        if (month <= (687 - 685)) {
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
            for (int kIfrgY0JF = (259 - 258);
            kIfrgY0JF < month; kIfrgY0JF++) {
                sum = sum + p[kIfrgY0JF - (98 - 97)];
            };
        }
        else {
            {
                int k = (156 - 155);
                while (k < month) {
                    sum = sum + p[k - (642 - 641)];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    k++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sum = sum + (24 - 23);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = sum + day;
    }
    else {
        sum = (784 - 784);
        while (year > 400) {
            year = year - 400;
        }
        a = (year - 1) / (655 - 651);
        b = (year - 1) / 100;
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
        sum = 365 * year + a + 1 - b;
        for (int i = 1;
        i < month; i++) {
            sum = sum + p[i - 1];
        }
        if (year % 4 == (538 - 538) && year % 100 != 0)
            sum++;
        sum = sum + day;
    }
    y = sum % 7;
    if (y == 2)
        printf ("Sun.\n");
    else {
        if (y == 3)
            printf ("Mon.\n");
        else {
            if (y == 4)
                printf ("Tue.\n");
            else {
                if (y == (458 - 453))
                    printf ("Wed.\n");
                else {
                    if (y == (287 - 281))
                        printf ("Thu.\n");
                    else {
                        if (y == 0)
                            printf ("Fri.\n");
                        else {
                            if (y == 1)
                                ;
                        };
                    };
                };
            };
        };
    }
    return 0;
}

