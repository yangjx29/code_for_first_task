int main () {
    int rExfabzS3G;
    int IIrNRE;
    int pORdzLE2yrfD;
    int j;
    int XjNnZR;
    int M4Oh2Qf;
    int xnb1R5tBO;
    int P83vOSatIs [100] [100];
    scanf ("%d%d", &rExfabzS3G, &IIrNRE);
    for (pORdzLE2yrfD = 0; rExfabzS3G - 1 >= pORdzLE2yrfD; pORdzLE2yrfD = pORdzLE2yrfD + 1) {
        for (j = 0; j <= IIrNRE -1; j = j + 1)
            scanf ("%d", &P83vOSatIs[pORdzLE2yrfD][j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (XjNnZR = 0; XjNnZR <= rExfabzS3G + IIrNRE -(483 - 481); XjNnZR = XjNnZR +1) {
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
        if (rExfabzS3G > XjNnZR &&IIrNRE > XjNnZR) {
            for (pORdzLE2yrfD = 0; XjNnZR >= pORdzLE2yrfD; pORdzLE2yrfD = pORdzLE2yrfD + 1)
                printf ("%d\n", P83vOSatIs[pORdzLE2yrfD][XjNnZR -pORdzLE2yrfD]);
        }
        else if (rExfabzS3G <= XjNnZR &&XjNnZR >= IIrNRE) {
            for (pORdzLE2yrfD = XjNnZR -IIrNRE+1; pORdzLE2yrfD <= rExfabzS3G - 1; pORdzLE2yrfD = pORdzLE2yrfD + 1)
                printf ("%d\n", P83vOSatIs[pORdzLE2yrfD][XjNnZR -pORdzLE2yrfD]);
        }
        else {
            if (rExfabzS3G < IIrNRE) {
                for (pORdzLE2yrfD = 0; pORdzLE2yrfD <= rExfabzS3G - 1; pORdzLE2yrfD = pORdzLE2yrfD + 1)
                    printf ("%d\n", P83vOSatIs[pORdzLE2yrfD][XjNnZR -pORdzLE2yrfD]);
            }
            else {
                for (pORdzLE2yrfD = XjNnZR -IIrNRE+1; pORdzLE2yrfD <= XjNnZR; pORdzLE2yrfD = pORdzLE2yrfD + 1)
                    printf ("%d\n", P83vOSatIs[pORdzLE2yrfD][XjNnZR -pORdzLE2yrfD]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            };
        };
    }
    return 0;
}

