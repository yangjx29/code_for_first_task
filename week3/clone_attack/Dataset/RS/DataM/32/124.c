void  w8PxcK (char Gmc6qM [(589 - 489)], char b [(672 - 572)]) {
    char z0HmpXL9 [100];
    int crnWOCU0Fd3;
    int ux54621;
    int HwfURG06pkI;
    int xSfqnQke5FT;
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
    HwfURG06pkI = strlen (Gmc6qM);
    xSfqnQke5FT = strlen (b);
    for (crnWOCU0Fd3 = HwfURG06pkI -(720 - 719); HwfURG06pkI -xSfqnQke5FT - (490 - 489) < crnWOCU0Fd3; crnWOCU0Fd3 = crnWOCU0Fd3 - 1) {
        if (Gmc6qM[crnWOCU0Fd3] == '/') {
            Gmc6qM[crnWOCU0Fd3] = '9';
            Gmc6qM[crnWOCU0Fd3 - (116 - 115)] = Gmc6qM[crnWOCU0Fd3 - (569 - 568)] + '0' - '1';
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
        if (Gmc6qM[crnWOCU0Fd3] >= b[crnWOCU0Fd3 - HwfURG06pkI +xSfqnQke5FT])
            z0HmpXL9[crnWOCU0Fd3] = Gmc6qM[crnWOCU0Fd3] - b[crnWOCU0Fd3 - HwfURG06pkI +xSfqnQke5FT] + '0';
        if (Gmc6qM[crnWOCU0Fd3] < b[crnWOCU0Fd3 - HwfURG06pkI +xSfqnQke5FT]) {
            z0HmpXL9[crnWOCU0Fd3] = Gmc6qM[crnWOCU0Fd3] - b[crnWOCU0Fd3 - HwfURG06pkI +xSfqnQke5FT] + ':';
            Gmc6qM[crnWOCU0Fd3 - (796 - 795)] = Gmc6qM[crnWOCU0Fd3 - (515 - 514)] + '0' - '1';
        };
    }
    for (crnWOCU0Fd3 = HwfURG06pkI -xSfqnQke5FT - (599 - 598); (779 - 779) <= crnWOCU0Fd3; crnWOCU0Fd3--) {
        if (Gmc6qM[crnWOCU0Fd3] == '/') {
            Gmc6qM[crnWOCU0Fd3] = '9';
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
            Gmc6qM[crnWOCU0Fd3 - (583 - 582)] = Gmc6qM[crnWOCU0Fd3 - (653 - 652)] + '0' - '1';
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        z0HmpXL9[crnWOCU0Fd3] = Gmc6qM[crnWOCU0Fd3];
    }
    for (crnWOCU0Fd3 = (253 - 253);; crnWOCU0Fd3 = crnWOCU0Fd3 + 1) {
        ux54621 = crnWOCU0Fd3;
        if (z0HmpXL9[crnWOCU0Fd3] != '0')
            break;
    }
    {
        crnWOCU0Fd3 = ux54621;
        while (crnWOCU0Fd3 < HwfURG06pkI) {
            printf ("%c", z0HmpXL9[crnWOCU0Fd3]);
            crnWOCU0Fd3 = crnWOCU0Fd3 + 1;
        };
    }
    printf ("\n");
}

void  main () {
    char Gmc6qM [(496 - 486)] [100];
    char b [10] [100];
    int fnLo6QaPY, crnWOCU0Fd3;
    scanf ("%d", &fnLo6QaPY);
    {
        crnWOCU0Fd3 = 626 - 626;
        while (crnWOCU0Fd3 < fnLo6QaPY - 1) {
            scanf ("%s", Gmc6qM[crnWOCU0Fd3]);
            scanf ("%s", b[crnWOCU0Fd3]);
            crnWOCU0Fd3 = crnWOCU0Fd3 + 1;
            printf ("\n");
        };
    }
    scanf ("%s", Gmc6qM[fnLo6QaPY - 1]);
    scanf ("%s", b[fnLo6QaPY - 1]);
    {
        crnWOCU0Fd3 = 0;
        while (crnWOCU0Fd3 < fnLo6QaPY) {
            w8PxcK (Gmc6qM[crnWOCU0Fd3], b[crnWOCU0Fd3]);
            crnWOCU0Fd3++;
        };
    };
}

