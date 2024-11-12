int main () {
    int P0RW4U;
    int FgoMB2nqUHe;
    int j;
    int k;
    int c [2] [P0RW4U];
    int l;
    l = 1;
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
    j = 1;
    FgoMB2nqUHe = 1;
    scanf ("%d", &P0RW4U);
    {
        k = 0;
        while (P0RW4U > k) {
            c[0][k] = 0;
            c[1][k] = 0;
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
            k++;
        };
    }
    {
        while (true) {
            scanf ("%d %d", &FgoMB2nqUHe, &j);
            if (!(0 != (FgoMB2nqUHe +j)))
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            c[0][FgoMB2nqUHe]++;
            c[1][j]++;
        };
    }
    {
        k = 0;
        while (k < P0RW4U) {
            if (c[0][k] == 0 && c[1][k] == P0RW4U -1) {
                l++;
                printf ("%d\n", k);
            }
            k++;
        };
    }
    if (l == 0)
        ;
}

