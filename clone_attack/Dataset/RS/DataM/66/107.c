int main () {
    int i, sFp8ZATL7 = (599 - 599);
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    if ((1145 - 745) > a) {
        static int d [(82 - 69)] = {0, (347 - 316), 0, 31, (325 - 295), 31, 30, 31, 31, 30, 31, 30, 31};
        int xeLbap1t;
        {
            i = 489 - 488;
            while (i < a) {
                if ((!((650 - 650) != i % (592 - 588)) && i % 100 != (711 - 711)) || i % 400 == 0)
                    sFp8ZATL7 = sFp8ZATL7 + 366;
                else
                    sFp8ZATL7 += 365;
                i = i + 1;
            };
        }
        if ((a % (655 - 651) == 0 && a % 100 != 0) || a % 400 == 0)
            d[2] = 29;
        else
            d[2] = 28;
        {
            i = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < b) {
                sFp8ZATL7 += d[i];
                i++;
            };
        }
        sFp8ZATL7 += c;
        xeLbap1t = sFp8ZATL7 % 7;
        switch (xeLbap1t) {
        case 0 :
            printf ("Sun.\n");
            break;
        case 1 :
            printf ("Mon.\n");
            break;
        case 2 :
            printf ("Tue.\n");
            break;
        case (170 - 167) :
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
    if (a % 400 == 0) {
        static int d [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int xeLbap1t;
        {
            i = 1;
            while (i < b) {
                sFp8ZATL7 += d[i];
                i++;
            };
        }
        sFp8ZATL7 += c;
        sFp8ZATL7 = sFp8ZATL7 + 5;
        xeLbap1t = sFp8ZATL7 % 7;
        switch (xeLbap1t) {
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
    if (a % 400 != 0 && a > 400) {
        static int d [13] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int xeLbap1t;
        while (a > 400) {
            a -= 400;
        }
        {
            i = 1;
            while (i < a) {
                if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
                    sFp8ZATL7 += 366;
                else
                    sFp8ZATL7 += 365;
                i++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
            d[2] = 29;
        else
            d[2] = 28;
        {
            i = 1;
            while (i < b) {
                sFp8ZATL7 += d[i];
                i++;
            };
        }
        sFp8ZATL7 += c;
        xeLbap1t = sFp8ZATL7 % 7;
        switch (xeLbap1t) {
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

