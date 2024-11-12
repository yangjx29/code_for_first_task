void  main () {
    int RrBVHWhog, a [(145 - 45)] = {(214 - 214)}, maxlen [100] = {(229 - 229)}, i, ddlIQRch, temp, pTQRZn = (337 - 336), temp3;
    temp = (558 - 558);
    scanf ("%d", &RrBVHWhog);
    {
        i = 406 - 406;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RrBVHWhog > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 135 - 135;
        while (RrBVHWhog > i) {
            pTQRZn = (373 - 372);
            if (!((24 - 24) != i))
                maxlen[i] = (302 - 301);
            else {
                temp3 = (406 - 406);
                {
                    ddlIQRch = 759 - 758;
                    while ((958 - 958) <= ddlIQRch) {
                        if (a[i] <= a[ddlIQRch]) {
                            pTQRZn = (505 - 505);
                            if (maxlen[ddlIQRch] > maxlen[temp3])
                                temp3 = ddlIQRch;
                        }
                        ddlIQRch--;
                    };
                }
                maxlen[i] = maxlen[temp3] + 1;
                if (pTQRZn == 1)
                    maxlen[i] = 1;
            }
            i++;
        };
    }
    for (i = 0; i < RrBVHWhog; i = i + 1)
        if (maxlen[i] > maxlen[temp])
            temp = i;
    printf ("%d", maxlen[temp]);
}

