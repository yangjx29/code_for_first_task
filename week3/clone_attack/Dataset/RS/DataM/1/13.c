void  main () {
    int jKID1fp (int JtQUNlIHm, int HzwvI04MYm);
    int j;
    int bcA5fxVN87y;
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
    int pbhGIU;
    int bHxXPvc;
    scanf ("%d", &bcA5fxVN87y);
    {
        j = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bcA5fxVN87y >= j) {
            j = j + 1;
            scanf ("%d", &pbhGIU);
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
            bHxXPvc = jKID1fp (2, pbhGIU);
            printf ("%d\n", bHxXPvc);
        };
    };
}

int jKID1fp (int JtQUNlIHm, int HzwvI04MYm) {
    int REKvLwdfVhN;
    int i;
    int BaZhIWUj;
    REKvLwdfVhN = 1;
    BaZhIWUj = (62 - 62);
    {
        i = JtQUNlIHm;
        while (i * i <= HzwvI04MYm) {
            if (HzwvI04MYm % i == 0)
                BaZhIWUj = jKID1fp (i, (HzwvI04MYm / i)) + BaZhIWUj;
            i = i + 1;
        };
    }
    if (i * i > HzwvI04MYm)
        BaZhIWUj = BaZhIWUj +1;
    return (BaZhIWUj);
}

