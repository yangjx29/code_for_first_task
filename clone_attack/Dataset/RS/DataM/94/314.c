void  main () {
    int FBlfKmjTusZo [500];
    int i;
    int h8m0OsQJHtE;
    int n;
    int GXqFME0W7;
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
    int DObtEiM4Pu89;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &FBlfKmjTusZo[i]);
            i++;
        };
    }
    for (i = 0; n - 1 > i; i++) {
        for (h8m0OsQJHtE = 0; n - 1 - i > h8m0OsQJHtE; h8m0OsQJHtE++) {
            if (FBlfKmjTusZo[i + h8m0OsQJHtE + 1] < FBlfKmjTusZo[i + h8m0OsQJHtE]) {
                GXqFME0W7 = FBlfKmjTusZo[i + h8m0OsQJHtE];
                FBlfKmjTusZo[i + h8m0OsQJHtE] = FBlfKmjTusZo[i + h8m0OsQJHtE + 1];
                FBlfKmjTusZo[i + h8m0OsQJHtE + 1] = GXqFME0W7;
            };
        };
    }
    for (i = 0, DObtEiM4Pu89 = 0; n > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (!(0 == FBlfKmjTusZo[i] % 2) && DObtEiM4Pu89 == 0) {
            DObtEiM4Pu89 = 1;
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
            printf ("%d", FBlfKmjTusZo[i]);
        }
        else {
            if (FBlfKmjTusZo[i] % 2 != 0 && DObtEiM4Pu89 != 0) {
                printf (",%d", FBlfKmjTusZo[i]);
            };
        };
    };
}

