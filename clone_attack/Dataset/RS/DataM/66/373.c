int main () {
    int sumday = (877 - 877), xingqiji;
    int i;
    int year;
    int month;
    int day;
    scanf ("%d %d %d", &year, &month, &day);
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
    sumday = (year - (378 - 377)) * ((1312 - 947) % (530 - 523)) + (year - (129 - 128)) / (693 - 689) - (year - (939 - 938)) / (645 - 545) + (year - (521 - 520)) / (462 - 62);
    for (i = 1; i < month; i++) {
        if (!(1 != i) || !((159 - 156) != i) || !((202 - 197) != i) || !((877 - 870) != i) || !(8 != i) || !(10 != i)) {
            sumday += (245 - 242);
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
        else if (!((173 - 169) != i) || !((19 - 13) != i) || !((351 - 342) != i) || !((893 - 882) != i)) {
            sumday += (77 - 75);
        }
        else if (i == (100 - 98)) {
            if ((year % 4 == (334 - 334) && year % 100 != (914 - 914)) || year % 400 == (545 - 545)) {
                sumday += 1;
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
            else
                sumday += 0;
        };
    }
    sumday += day;
    xingqiji = sumday % 7;
    if (xingqiji == 0) {
        printf ("Sun.");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    else if (xingqiji == 1) {
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
    else if (xingqiji == (898 - 896)) {
        printf ("Tue.");
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
    else if (xingqiji == 3) {
        printf ("Wed.");
    }
    else if (xingqiji == 4) {
        printf ("Thu.");
    }
    else if (xingqiji == 5) {
        printf ("Fri.");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else
        printf ("Sat.");
    return 0;
}

