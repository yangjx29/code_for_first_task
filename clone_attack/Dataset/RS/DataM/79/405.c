main () {
    int aIz6vPgyi9wo;
    int n;
    int h [301];
    int OgkHCb8JD;
    int k;
    int num;
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
    int mKFAj430Y7v;
    int last;
    do {
        k = 0;
        num = 0;
        scanf ("%d%d", &n, &aIz6vPgyi9wo);
        {
            OgkHCb8JD = 948 - 948;
            while (n >= OgkHCb8JD) {
                h[OgkHCb8JD] = 1;
                OgkHCb8JD = OgkHCb8JD +1;
            };
        }
        mKFAj430Y7v = n;
        do {
            if (h[num] == 1)
                if (!(aIz6vPgyi9wo == k)) {
                    k++;
                }
                else {
                    h[num] = 0;
                    last = num;
                    k = 1;
                    mKFAj430Y7v = mKFAj430Y7v - 1;
                }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (num != n)
                num++;
            else
                num = 1;
        }
        while (mKFAj430Y7v > 0);
        if (last > 0)
            printf ("%d\n", last);
    }
    while (last > 0);
    return (0);
}

