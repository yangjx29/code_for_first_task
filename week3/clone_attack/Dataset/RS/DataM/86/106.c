int main (int argc, char *argv []) {
    int n;
    int JmqbHUMaoG [1000] [60];
    int TQtRKdZ [1000];
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
    scanf ("%d", &n);
    {
        int m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        m = 0;
        while (m < n) {
            int ktTRj3ZqY;
            scanf ("%d", &JmqbHUMaoG[m][0]);
            ktTRj3ZqY = JmqbHUMaoG[m][0];
            if (ktTRj3ZqY == 0)
                ;
            else {
                int b;
                {
                    int j = 1;
                    while (ktTRj3ZqY >= j) {
                        scanf ("%d", &JmqbHUMaoG[m][j]);
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
                        j++;
                    };
                }
                b = 60 - 3 * ktTRj3ZqY - JmqbHUMaoG[m][ktTRj3ZqY];
                if (b >= 0) {
                    TQtRKdZ[m] = b + JmqbHUMaoG[m][ktTRj3ZqY];
                    printf ("%d\n", TQtRKdZ[m]);
                }
                else {
                    int Y8PLQD, z, h1, h2, l;
                    for (int pGb8Pk1x3c = 1;
                    pGb8Pk1x3c <= ktTRj3ZqY; pGb8Pk1x3c++) {
                        Y8PLQD = JmqbHUMaoG[m][pGb8Pk1x3c] + 3 * pGb8Pk1x3c;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        if (Y8PLQD > 60) {
                            h1 = JmqbHUMaoG[m][pGb8Pk1x3c];
                            h2 = JmqbHUMaoG[m][pGb8Pk1x3c - 1];
                            {
                                int xk7KOr6GY = 0;
                                while (xk7KOr6GY <= ktTRj3ZqY) {
                                    JmqbHUMaoG[m][xk7KOr6GY] = -60;
                                    xk7KOr6GY++;
                                };
                            }
                            z = pGb8Pk1x3c;
                        };
                    }
                    l = 60 - 3 * (z - 1) - h2 - (h1 - h2);
                    if (l >= 0)
                        TQtRKdZ[m] = h1;
                    else
                        TQtRKdZ[m] = 60 - 3 * (z - 1);
                    printf ("%d\n", TQtRKdZ[m]);
                };
            }
            m++;
        };
    }
    return 0;
}

