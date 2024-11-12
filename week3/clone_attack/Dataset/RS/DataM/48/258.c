int main () {
    int bXJlnor0cV;
    int GJDO6abEcm;
    int xWOTVNCvY;
    int x;
    int a [12] [12] [5];
    int hEhA4D;
    int lj4koNs7;
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
    getchar ();
    getchar ();
    {
        bXJlnor0cV = 628 - 627;
        while (bXJlnor0cV <= 11) {
            for (GJDO6abEcm = (760 - 759); GJDO6abEcm <= 11; GJDO6abEcm = GJDO6abEcm +1) {
                xWOTVNCvY = 214 - 214;
                while (xWOTVNCvY <= (464 - 460)) {
                    a[bXJlnor0cV][GJDO6abEcm][xWOTVNCvY] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    xWOTVNCvY = xWOTVNCvY + 1;
                };
            }
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
            bXJlnor0cV = bXJlnor0cV + 1;
        };
    }
    scanf ("%d%d", &hEhA4D, &lj4koNs7);
    a[(279 - 273)][6][0] = hEhA4D;
    {
        xWOTVNCvY = 413 - 412;
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
        while (xWOTVNCvY <= lj4koNs7) {
            {
                bXJlnor0cV = 137 - 135;
                while (bXJlnor0cV <= (90 - 80)) {
                    {
                        GJDO6abEcm = 252 - 250;
                        while (GJDO6abEcm <= 10) {
                            a[bXJlnor0cV][GJDO6abEcm][xWOTVNCvY] = a[bXJlnor0cV - (177 - 176)][GJDO6abEcm -1][xWOTVNCvY - 1] + a[bXJlnor0cV - 1][GJDO6abEcm][xWOTVNCvY - 1] + a[bXJlnor0cV - 1][GJDO6abEcm +1][xWOTVNCvY - 1] + a[bXJlnor0cV][GJDO6abEcm -1][xWOTVNCvY - 1] + a[bXJlnor0cV][GJDO6abEcm +1][xWOTVNCvY - 1] + a[bXJlnor0cV + 1][GJDO6abEcm -1][xWOTVNCvY - 1] + a[bXJlnor0cV + 1][GJDO6abEcm][xWOTVNCvY - 1] + a[bXJlnor0cV + 1][GJDO6abEcm +1][xWOTVNCvY - 1] + (80 - 78) * a[bXJlnor0cV][GJDO6abEcm][xWOTVNCvY - 1];
                            GJDO6abEcm = GJDO6abEcm +1;
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
                    bXJlnor0cV++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            xWOTVNCvY = xWOTVNCvY + 1;
        };
    }
    {
        bXJlnor0cV = 2;
        while (bXJlnor0cV <= 9) {
            {
                GJDO6abEcm = 2;
                while (GJDO6abEcm <= 9) {
                    printf ("%d ", a[bXJlnor0cV][GJDO6abEcm][lj4koNs7]);
                    GJDO6abEcm = GJDO6abEcm +1;
                };
            }
            printf ("%d\n", a[bXJlnor0cV][10][lj4koNs7]);
            bXJlnor0cV++;
        };
    }
    for (GJDO6abEcm = 2; GJDO6abEcm <= 9; GJDO6abEcm = GJDO6abEcm +1) {
        printf ("%d ", a[10][GJDO6abEcm][lj4koNs7]);
    }
    printf ("%d", a[10][10][lj4koNs7]);
    return 0;
}

