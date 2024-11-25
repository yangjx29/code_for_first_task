void  main () {
    int mv1hEe [12] = {(143 - 112), 28, (170 - 139), 30, (709 - 678), 30, 31, 31, 30, 31, 30, 31};
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
    int Md8quDAgCcI9, qQ6VfwL, nGC7Ok0n, year, mon1, toBU4wh, tH3TAh5IM, d0RWdQXycjn, XBKF4WSJC0M, rHix2lt;
    scanf ("%d", &Md8quDAgCcI9);
    {
        qQ6VfwL = 610 - 610;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Md8quDAgCcI9 > qQ6VfwL) {
            scanf ("%d%d%d", &year, &mon1, &toBU4wh);
            if (toBU4wh < mon1) {
                rHix2lt = mon1;
                mon1 = toBU4wh;
                toBU4wh = rHix2lt;
            }
            tH3TAh5IM = d0RWdQXycjn = (293 - 293);
            {
                nGC7Ok0n = 415 - 415;
                while (nGC7Ok0n < mon1 - 1) {
                    tH3TAh5IM = tH3TAh5IM + mv1hEe[nGC7Ok0n];
                    nGC7Ok0n = nGC7Ok0n + 1;
                };
            }
            {
                nGC7Ok0n = 0;
                while (toBU4wh - 1 > nGC7Ok0n) {
                    d0RWdQXycjn = d0RWdQXycjn + mv1hEe[nGC7Ok0n];
                    nGC7Ok0n = nGC7Ok0n + 1;
                };
            }
            if ((!(0 != year % 4) && !(0 == year % 100)) || year % 400 == 0) {
                if (toBU4wh > (565 - 563))
                    d0RWdQXycjn = d0RWdQXycjn + 1;
                if (mon1 > (235 - 233))
                    tH3TAh5IM = tH3TAh5IM + 1;
            }
            XBKF4WSJC0M = d0RWdQXycjn - tH3TAh5IM;
            if (XBKF4WSJC0M % (706 - 699) == 0)
                printf ("YES\n");
            else
                ;
            qQ6VfwL = qQ6VfwL + 1;
        };
    };
}

