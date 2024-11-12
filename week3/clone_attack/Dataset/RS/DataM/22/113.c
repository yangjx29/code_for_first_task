void  main () {
    int d6Y7Qjd1W [300];
    int i = 1, j, VnOtsajB, zbmDO5xp, CCka9H1WRFY = 0;
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
    scanf ("%d", &d6Y7Qjd1W[0]);
    for (; (0 < scanf (",%d", &d6Y7Qjd1W[i]));)
        i = i + 1;
    if (i == 1)
        ;
    else {
        VnOtsajB = d6Y7Qjd1W[0];
        for (j = 1; j < i; j = j + 1) {
            if (d6Y7Qjd1W[j] > VnOtsajB)
                VnOtsajB = d6Y7Qjd1W[j];
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
            };
        }
        zbmDO5xp = 0;
        {
            j = 0;
            while (j < i) {
                if (d6Y7Qjd1W[j] < VnOtsajB &&d6Y7Qjd1W[j] > zbmDO5xp)
                    zbmDO5xp = d6Y7Qjd1W[j];
                j = j + 1;
            };
        }
        if (zbmDO5xp == 0)
            ;
        else
            printf ("%d", zbmDO5xp);
    };
}

