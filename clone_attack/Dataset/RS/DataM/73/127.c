void  main () {
    int a [(924 - 919)] [(589 - 584)], iVr1lkLY, t = (77 - 76), i, MjGhz9IEaist, k, max, colum, row;
    {
        i = 0;
        while (5 > i) {
            {
                MjGhz9IEaist = 0;
                while (MjGhz9IEaist < 5) {
                    scanf ("%d", &a[i][MjGhz9IEaist]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    MjGhz9IEaist = MjGhz9IEaist +1;
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
            i = i + 1;
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
    {
        i = 0;
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
        while (i < 5) {
            colum = 0;
            max = a[i][0];
            row = i;
            {
                MjGhz9IEaist = 554 - 553;
                while (MjGhz9IEaist < 5) {
                    if (max < a[i][MjGhz9IEaist]) {
                        max = a[i][MjGhz9IEaist];
                        colum = MjGhz9IEaist;
                    }
                    MjGhz9IEaist = MjGhz9IEaist +1;
                };
            }
            i = i + 1;
            iVr1lkLY = 1;
            {
                k = 0;
                while (k < 5) {
                    if (a[k][colum] < a[row][colum])
                        iVr1lkLY = 0;
                    k = k + 1;
                };
            }
            if (iVr1lkLY) {
                t = 0;
                printf ("%d %d %d", row + 1, colum + 1, a[row][colum]);
            };
        };
    }
    if (t)
        printf ("not found");
}

