int main () {
    int sGLKMkt17w4;
    int utuiLxvzN;
    int i;
    int n;
    int ge;
    int shi;
    int U8ub2yRNKHw;
    int qian;
    int S59rnRpD;
    sGLKMkt17w4 = 1;
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
    utuiLxvzN = 2;
    scanf ("%d", &n);
    for (i = 9; 10000 >= i; i = i * (870 - 860) + 9) {
        if (n > i)
            sGLKMkt17w4 = utuiLxvzN;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        utuiLxvzN = utuiLxvzN + 1;
    }
    S59rnRpD = n / 10000;
    qian = (n - S59rnRpD *10000) / 1000;
    U8ub2yRNKHw = (n - S59rnRpD *10000 - qian * 1000) / 100;
    shi = (n - S59rnRpD *10000 - qian * 1000 - U8ub2yRNKHw *100) / 10;
    ge = n - S59rnRpD *10000 - qian * 1000 - U8ub2yRNKHw *100 - shi * 10;
    if (sGLKMkt17w4 == 5) {
        printf ("%d%d%d%d%d", ge, shi, U8ub2yRNKHw, qian, S59rnRpD);
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
    else if (sGLKMkt17w4 == 4) {
        printf ("%d%d%d%d", ge, shi, U8ub2yRNKHw, qian);
    }
    else if (sGLKMkt17w4 == 3) {
        printf ("%d%d%d", ge, shi, U8ub2yRNKHw);
    }
    else if (sGLKMkt17w4 == 2) {
        printf ("%d%d", ge, shi);
    }
    else if (sGLKMkt17w4 == 1) {
        printf ("%d", n);
    }
    else {
        printf ("error");
    }
    return 0;
}

