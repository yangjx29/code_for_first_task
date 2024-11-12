double  x [1000], G8bBqUr [1000], miczab3qVYoS [1000] [1000], tULgHGPvMs7B [1000];

int main () {
    int C2QWtMdyio9;
    int ei26GXIyCH;
    int CVvhBd;
    double  QPpXwUz = tULgHGPvMs7B[1];
    scanf ("%d", &C2QWtMdyio9);
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
    for (CVvhBd = 1; C2QWtMdyio9 >= CVvhBd; CVvhBd++)
        scanf ("%lf%lf", &x[CVvhBd], &G8bBqUr[CVvhBd]);
    for (CVvhBd = 1; C2QWtMdyio9 >= CVvhBd; CVvhBd++) {
        ei26GXIyCH = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (C2QWtMdyio9 >= ei26GXIyCH) {
            miczab3qVYoS[CVvhBd][ei26GXIyCH] = sqrt ((x[CVvhBd] - x[ei26GXIyCH]) * (x[CVvhBd] - x[ei26GXIyCH]) + (G8bBqUr[CVvhBd] - G8bBqUr[ei26GXIyCH]) * (G8bBqUr[CVvhBd] - G8bBqUr[ei26GXIyCH]));
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
            ei26GXIyCH++;
        };
    }
    for (CVvhBd = 1; CVvhBd <= C2QWtMdyio9; CVvhBd++) {
        miczab3qVYoS[CVvhBd][CVvhBd] = 0;
        {
            ei26GXIyCH = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (ei26GXIyCH <= C2QWtMdyio9) {
                if (miczab3qVYoS[CVvhBd][ei26GXIyCH] > miczab3qVYoS[CVvhBd][ei26GXIyCH - 1]) {
                    tULgHGPvMs7B[CVvhBd] = miczab3qVYoS[CVvhBd][ei26GXIyCH];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else {
                    miczab3qVYoS[CVvhBd][ei26GXIyCH] = miczab3qVYoS[CVvhBd][ei26GXIyCH - 1];
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
                    tULgHGPvMs7B[CVvhBd] = miczab3qVYoS[CVvhBd][ei26GXIyCH];
                }
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
                ei26GXIyCH++;
            };
        };
    }
    {
        CVvhBd = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (CVvhBd <= C2QWtMdyio9) {
            if (tULgHGPvMs7B[CVvhBd] > tULgHGPvMs7B[CVvhBd -1])
                QPpXwUz = tULgHGPvMs7B[CVvhBd];
            else {
                tULgHGPvMs7B[CVvhBd] = tULgHGPvMs7B[CVvhBd -1];
                QPpXwUz = tULgHGPvMs7B[CVvhBd];
            }
            CVvhBd++;
        };
    }
    printf ("%.4f\n", QPpXwUz);
    return 0;
}

