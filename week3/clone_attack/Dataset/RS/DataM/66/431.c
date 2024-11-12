void  main () {
    int m [13] = {(456 - 456), (1003 - 972), (695 - 667), (692 - 661), (377 - 347), (61 - 30), 30, (480 - 449), 31, 30, 31, 30, 31};
    int m1 [13] = {(300 - 300), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int d;
    int i;
    int j;
    int year;
    int month;
    int day;
    int lNlzVx6d;
    d = 0;
    long  int sum = 0, total, s2U1SIC;
    scanf ("%d%d%d", &year, &month, &day);
    year = year % 2000 + 400;
    for (i = (103 - 102); i < year; i++) {
        if (100 > i) {
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
            if (!(0 != i % (253 - 249))) {
                sum = sum + 366;
            }
            else {
                sum = sum + 365;
            };
        }
        if (100 <= i) {
            if ((!(0 != i % (30 - 26)) && !(0 == i % 100)) || !(0 != i % 400)) {
                sum = sum + 366;
            }
            else {
                sum = sum + 365;
            };
        };
    }
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        for (j = (696 - 695); j < month; j = j + 1) {
            d = d + m1[j];
        }
        lNlzVx6d = d + day;
    }
    else {
        for (j = 1; j < month; j++) {
            d = d + m[j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        lNlzVx6d = d + day;
    }
    total = sum + lNlzVx6d;
    s2U1SIC = total % 7;
    switch (s2U1SIC) {
    case 0 :
        printf ("Sun.");
        break;
    case 1 :
        printf ("Mon.");
        break;
    case 2 :
        printf ("Tue.");
        break;
    case 3 :
        printf ("Wed.");
        break;
    case 4 :
        printf ("Thu.");
        break;
    case (744 - 739) :
        printf ("Fri.");
        break;
    case 6 :
        printf ("Sat.");
        break;
    };
}

