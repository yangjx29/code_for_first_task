int vOfrIHGPLY (int IyT9QDH0bX) {
    int UQ0uOcVd, bPolL7J;
    UQ0uOcVd = 1;
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
    for (bPolL7J = 2; bPolL7J <= (int) sqrt (IyT9QDH0bX); bPolL7J++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (IyT9QDH0bX % bPolL7J == 0) {
            UQ0uOcVd = 0;
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
            break;
        };
    }
    return (UQ0uOcVd);
}

main () {
    int bPolL7J, pcJIFubS, kKXQcIHs;
    scanf ("%d", &kKXQcIHs);
    for (bPolL7J = 6; bPolL7J <= kKXQcIHs; bPolL7J = bPolL7J + 2) {
        for (pcJIFubS = 3; pcJIFubS <= bPolL7J / 2; pcJIFubS++) {
            if (vOfrIHGPLY (pcJIFubS) == 1 && vOfrIHGPLY (bPolL7J - pcJIFubS) == 1)
                break;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%d=%d+%d\n", bPolL7J, pcJIFubS, bPolL7J - pcJIFubS);
    };
}

