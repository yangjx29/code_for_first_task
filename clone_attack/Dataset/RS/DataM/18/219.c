int main () {
    int n, LyUTVfFhp;
    cin >> n;
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
    {
        LyUTVfFhp = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > LyUTVfFhp) {
            int min;
            int bbvwNBxz, j, PaUFlO7A [100] [100] = {0}, PxFsaoXKiWeJ, tgjdrEqY = 0;
            for (bbvwNBxz = 0; bbvwNBxz < n; bbvwNBxz = bbvwNBxz + 1) {
                for (j = 0; n > j; j = j + 1)
                    cin >> PaUFlO7A[bbvwNBxz][j];
            }
            PxFsaoXKiWeJ = n;
            while (1 < PxFsaoXKiWeJ) {
                for (bbvwNBxz = 0; PxFsaoXKiWeJ > bbvwNBxz; bbvwNBxz = bbvwNBxz + 1) {
                    min = PaUFlO7A[bbvwNBxz][0];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    for (j = 0; PxFsaoXKiWeJ > j; j = j + 1) {
                        if (PaUFlO7A[bbvwNBxz][j] < min)
                            min = PaUFlO7A[bbvwNBxz][j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    {
                        j = 0;
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
                        while (j < PxFsaoXKiWeJ) {
                            PaUFlO7A[bbvwNBxz][j] -= min;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            j = j + 1;
                        };
                    };
                }
                {
                    j = 0;
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
                    while (j < PxFsaoXKiWeJ) {
                        int rjUm3gD4tl = 0;
                        for (bbvwNBxz = 0; bbvwNBxz < PxFsaoXKiWeJ; bbvwNBxz++) {
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            if (PaUFlO7A[bbvwNBxz][j] == 0) {
                                rjUm3gD4tl++;
                                break;
                            };
                        }
                        if (rjUm3gD4tl == 0) {
                            min = PaUFlO7A[0][j];
                            for (bbvwNBxz = 0; bbvwNBxz < PxFsaoXKiWeJ; bbvwNBxz++) {
                                if (PaUFlO7A[bbvwNBxz][j] < min)
                                    min = PaUFlO7A[bbvwNBxz][j];
                            }
                            {
                                bbvwNBxz = 0;
                                while (bbvwNBxz < PxFsaoXKiWeJ) {
                                    PaUFlO7A[bbvwNBxz][j] -= min;
                                    bbvwNBxz = bbvwNBxz + 1;
                                };
                            };
                        }
                        j++;
                    };
                }
                tgjdrEqY += PaUFlO7A[1][1];
                {
                    j = 2;
                    while (j < PxFsaoXKiWeJ) {
                        PaUFlO7A[0][j - 1] = PaUFlO7A[0][j];
                        j++;
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (bbvwNBxz = 2; bbvwNBxz < PxFsaoXKiWeJ; bbvwNBxz++)
                    PaUFlO7A[bbvwNBxz - 1][0] = PaUFlO7A[bbvwNBxz][0];
                for (bbvwNBxz = 2; bbvwNBxz < PxFsaoXKiWeJ; bbvwNBxz++) {
                    for (j = 2; j < PxFsaoXKiWeJ; j++)
                        PaUFlO7A[bbvwNBxz - 1][j - 1] = PaUFlO7A[bbvwNBxz][j];
                }
                PxFsaoXKiWeJ--;
            }
            LyUTVfFhp = LyUTVfFhp +1;
            cout << tgjdrEqY << endl;
        };
    }
    return 0;
}

