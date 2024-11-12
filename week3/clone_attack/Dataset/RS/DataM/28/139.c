void  main () {
    char c;
    int ejWAy9i5zcf = 0, wOHjfNL9o51 = 0, dTylVRfk, j, a [301] = {0};
    {
        dTylVRfk = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\n' == (c = getchar ()))) {
            dTylVRfk++;
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
            if (c == ' ')
                ejWAy9i5zcf = 0;
            else {
                if (ejWAy9i5zcf == 0) {
                    wOHjfNL9o51 = wOHjfNL9o51 + 1;
                    j = wOHjfNL9o51;
                    ejWAy9i5zcf = 1;
                }
                a[j] = a[j] + 1;
            };
        };
    }
    printf ("%d", a[1]);
    if (wOHjfNL9o51 >= 2) {
        dTylVRfk = 2;
        while (dTylVRfk <= wOHjfNL9o51) {
            printf (",%d", a[dTylVRfk]);
            dTylVRfk++;
        };
    };
}

