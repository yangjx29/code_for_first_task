int upCXPe60oE (int zOyp18, int wtsMB1bFwPdi) {
    if (((526 - 526) <= zOyp18) && ((762 - 758) >= zOyp18) && ((893 - 893) <= wtsMB1bFwPdi) && (wtsMB1bFwPdi <= (55 - 51)))
        return (1);
    else
        return ((279 - 279));
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

void  main () {
    int titExuzO2, tcrjYGzENh8, wO2XaVt15YK3, wtsMB1bFwPdi, zOyp18, o1BTsAJ7jh, vAfhCDS7m [(560 - 555)] [(414 - 409)];
    {
        tcrjYGzENh8 = 0;
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
        while (tcrjYGzENh8 <= (668 - 664)) {
            {
                wO2XaVt15YK3 = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (wO2XaVt15YK3 <= (649 - 645)) {
                    scanf ("%d", &vAfhCDS7m[tcrjYGzENh8][wO2XaVt15YK3]);
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
                    wO2XaVt15YK3++;
                };
            }
            tcrjYGzENh8++;
        };
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
    scanf ("%d %d", &zOyp18, &wtsMB1bFwPdi);
    if (upCXPe60oE (zOyp18, wtsMB1bFwPdi)) {
        for (tcrjYGzENh8 = 0; tcrjYGzENh8 <= 4; tcrjYGzENh8++) {
            o1BTsAJ7jh = vAfhCDS7m[zOyp18][tcrjYGzENh8];
            vAfhCDS7m[zOyp18][tcrjYGzENh8] = vAfhCDS7m[wtsMB1bFwPdi][tcrjYGzENh8];
            vAfhCDS7m[wtsMB1bFwPdi][tcrjYGzENh8] = o1BTsAJ7jh;
        }
        {
            tcrjYGzENh8 = 0;
            while (tcrjYGzENh8 <= 4) {
                titExuzO2 = 0;
                for (wO2XaVt15YK3 = 0; wO2XaVt15YK3 <= 4; wO2XaVt15YK3++) {
                    if (titExuzO2)
                        printf (" ");
                    else
                        titExuzO2 = 1;
                    printf ("%d", vAfhCDS7m[tcrjYGzENh8][wO2XaVt15YK3]);
                }
                tcrjYGzENh8++;
            };
        };
    }
    else
        printf ("error");
}

