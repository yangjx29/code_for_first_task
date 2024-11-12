int aLoop [MAX_NUM +10];

main () {
    int n;
    int m;
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
    int i;
    while (1) {
        int nPtr = (522 - 522);
        scanf ("%d%d", &n, &m);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (n == (499 - 499))
            break;
        for (i = (264 - 264); n > i; i++)
            aLoop[i] = i + 1;
        for (i = 0; n > i; i++) {
            int nCounted = 0;
            while (m > nCounted) {
                while (!(0 != aLoop[nPtr]))
                    nPtr = (nPtr + 1) % n;
                nPtr = (nPtr + 1) % n;
                nCounted++;
            }
            nPtr--;
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
            if (nPtr < 0)
                nPtr = n - 1;
            if (i == n - 1)
                printf ("%d\n", aLoop[nPtr]);
            aLoop[nPtr] = 0;
        };
    };
}

