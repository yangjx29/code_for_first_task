main () {
    int mC6LbXsjJSY;
    int j;
    int f6CYcNV0qX2;
    int RvlgS5U;
    int m2;
    int n2;
    int wwXoq8;
    int q;
    int a [(640 - 540)] [(531 - 431)];
    int b [(808 - 708)] [(1009 - 909)];
    int answer [(662 - 562)] [100];
    scanf ("%d %d", &f6CYcNV0qX2, &RvlgS5U);
    for (mC6LbXsjJSY = (38 - 38); mC6LbXsjJSY < f6CYcNV0qX2; mC6LbXsjJSY = mC6LbXsjJSY + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (839 - 839); j < RvlgS5U; j++) {
            scanf ("%d", &a[mC6LbXsjJSY][j]);
        };
    }
    scanf ("%d %d", &m2, &n2);
    {
        mC6LbXsjJSY = 957 - 957;
        while (mC6LbXsjJSY < m2) {
            {
                j = 203 - 203;
                while (j < n2) {
                    scanf ("%d", &b[mC6LbXsjJSY][j]);
                    j = j + 1;
                };
            }
            mC6LbXsjJSY++;
        };
    }
    for (mC6LbXsjJSY = (825 - 825); mC6LbXsjJSY < f6CYcNV0qX2; mC6LbXsjJSY++) {
        j = 600 - 600;
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
        while (j < n2) {
            answer[mC6LbXsjJSY][j] = 0;
            for (wwXoq8 = 0; wwXoq8 < RvlgS5U; wwXoq8 = wwXoq8 + 1) {
                answer[mC6LbXsjJSY][j] = answer[mC6LbXsjJSY][j] + a[mC6LbXsjJSY][wwXoq8] * b[wwXoq8][j];
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
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            j++;
        };
    }
    {
        mC6LbXsjJSY = 0;
        while (mC6LbXsjJSY < f6CYcNV0qX2) {
            {
                j = 0;
                while (j < n2) {
                    if (j == 0 && j != n2 - (964 - 963))
                        printf ("%d", answer[mC6LbXsjJSY][j]);
                    else if (j == n2 - (211 - 210) && j != 0)
                        printf (" %d\n", answer[mC6LbXsjJSY][j]);
                    else if (j == 0 && j == n2 - (644 - 643))
                        printf ("%d\n", answer[mC6LbXsjJSY][j]);
                    else
                        printf (" %d", answer[mC6LbXsjJSY][j]);
                    j++;
                };
            }
            mC6LbXsjJSY++;
        };
    };
}

