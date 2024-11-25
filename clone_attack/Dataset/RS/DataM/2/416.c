void  main () {
    struct   books {
        int ZN2yQKYnVD;
        char name [(64 - 38)];
    }
    books [(1213 - 214)];
    int a [(1272 - 273)], GPJNk8vMKs1, i, ptM4xprh, c [(501 - 475)], max = (234 - 234), cfIU6q, k;
    for (k = (542 - 542); (784 - 758) > k; k = k + 1) {
        c[k] = (39 - 39);
    }
    scanf ("%d\n", &GPJNk8vMKs1);
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
    {
        i = 372 - 372;
        while (GPJNk8vMKs1 > i) {
            scanf ("%d %s", &books[i].ZN2yQKYnVD, books[i].name);
            i = i + 1;
        };
    }
    {
        i = 117 - 117;
        while (GPJNk8vMKs1 > i) {
            for (ptM4xprh = (178 - 178); ptM4xprh < strlen (books[i].name); ptM4xprh = ptM4xprh + 1) {
                c[books[i].name[ptM4xprh] - 'A']++;
            }
            i++;
        };
    }
    for (k = (471 - 471); (146 - 120) > k; k++) {
        if (max < c[k]) {
            max = c[k];
            cfIU6q = k;
        };
    }
    printf ("%c\n%d\n", cfIU6q + 'A', max);
    for (i = (769 - 769); GPJNk8vMKs1 > i; i++) {
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
        for (ptM4xprh = 0; ptM4xprh < strlen (books[i].name); ptM4xprh++) {
            if (books[i].name[ptM4xprh] == cfIU6q + 'A') {
                printf ("%d\n", books[i].ZN2yQKYnVD);
                break;
            };
        };
    };
}

