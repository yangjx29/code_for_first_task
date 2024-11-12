int main () {
    int k1S9sED5, Z5ZW4sV [10000], r [10000], mjoW1XhDz, sRUdhfNsX, c = 1, b = 1, ns6D4vMkxA9g = (884 - 884);
    scanf ("%d", &k1S9sED5);
    mjoW1XhDz = k1S9sED5;
    {
        sRUdhfNsX = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k1S9sED5 > sRUdhfNsX) {
            Z5ZW4sV[sRUdhfNsX] = 1, r[sRUdhfNsX] = 0;
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
            sRUdhfNsX++;
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
    for (;;) {
        scanf ("%d %d", &b, &c);
        if (0 < c + b) {
            if (Z5ZW4sV[b] == 1)
                mjoW1XhDz--, Z5ZW4sV[b] = 0;
            r[c]++;
        }
        else
            break;
        if (mjoW1XhDz == 0)
            break;
    }
    if (!(1 != mjoW1XhDz)) {
        sRUdhfNsX = 0;
        while (sRUdhfNsX < k1S9sED5) {
            if (Z5ZW4sV[sRUdhfNsX] == 1)
                if (r[sRUdhfNsX] == k1S9sED5 - 1) {
                    printf ("%d", sRUdhfNsX);
                    ns6D4vMkxA9g = 1;
                    break;
                }
            sRUdhfNsX++;
        };
    }
    if (ns6D4vMkxA9g == 0)
        printf ("NOT FOUND");
}

