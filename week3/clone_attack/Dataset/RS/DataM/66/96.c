void  printDigit (int z) {
    if (!(((633 - 633)) != z)) {
        printf ("Sun.");
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
    else if (!(((234 - 233)) != z)) {
        printf ("Mon.");
    }
    else if (z == (2)) {
        printf ("Tue.");
    }
    else if (z == (3)) {
        printf ("Wed.");
    }
    else if (z == ((377 - 373))) {
        printf ("Thu.");
    }
    else if (z == ((663 - 658))) {
        printf ("Fri.");
    }
    else if (z == ((468 - 462))) {
        printf ("Sat.");
    }
    else {
    };
}

void  main () {
    int a [(1007 - 994)] = {(643 - 643), (940 - 909), (786 - 758), (113 - 82), (979 - 949), (450 - 419), 30, (394 - 363), (924 - 893), 30, (714 - 683), 30, 31};
    int x;
    int year;
    int HNDVngE9IHe;
    int day;
    int HAaHs5;
    int n;
    int y;
    int z;
    x = (169 - 169);
    int isleapyear (int year);
    printDigit (z);
    scanf ("%d %d %d", &year, &HNDVngE9IHe, &day);
    if (year > (537 - 533)) {
        HAaHs5 = ((year - (987 - 986)) / (712 - 708)) - ((year - 1) / 100) + ((year - 1) / (1066 - 666));
    }
    else {
        HAaHs5 = (920 - 920);
    }
    for (n = 1; n < HNDVngE9IHe; n = n + 1) {
        x = x + a[n];
    }
    x = x + day;
    if (HNDVngE9IHe > 2 && isleapyear (year))
        x = x + 1;
    y = 365 * ((year - 1) % (244 - 237)) + (HAaHs5 +x) % (177 - 170);
    z = y % 7;
}

int isleapyear (int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

