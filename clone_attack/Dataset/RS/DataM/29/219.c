int main () {
    double  K3N2ACKJ [100];
    int K90P8NE3Y [100];
    int UQxkFBRHWKq [100];
    int hX9bzISFC;
    int rqfSFWkM [100];
    int THPyxqg;
    int wX4EW7;
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
    scanf ("%d", &hX9bzISFC);
    {
        THPyxqg = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hX9bzISFC > THPyxqg) {
            scanf ("%d", &(rqfSFWkM[THPyxqg]));
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
            THPyxqg = THPyxqg +1;
        };
    }
    K90P8NE3Y[0] = 2;
    UQxkFBRHWKq[0] = (346 - 345);
    K3N2ACKJ[0] = (double ) K90P8NE3Y[0] / (double ) UQxkFBRHWKq[0];
    {
        wX4EW7 = 0;
        while (wX4EW7 < hX9bzISFC) {
            {
                THPyxqg = 325 - 324;
                while (rqfSFWkM[wX4EW7] > THPyxqg) {
                    K90P8NE3Y[THPyxqg] = K90P8NE3Y[THPyxqg -1] + UQxkFBRHWKq[THPyxqg -1];
                    UQxkFBRHWKq[THPyxqg] = K90P8NE3Y[THPyxqg -1];
                    K3N2ACKJ[THPyxqg] = K3N2ACKJ[THPyxqg -1] + (double ) K90P8NE3Y[THPyxqg] / (double ) UQxkFBRHWKq[THPyxqg];
                    THPyxqg++;
                };
            }
            printf ("%.3lf\n", K3N2ACKJ[THPyxqg -1]);
            wX4EW7 = wX4EW7 + 1;
        };
    }
    return 0;
}

