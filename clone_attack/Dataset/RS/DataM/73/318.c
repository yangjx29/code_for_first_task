int main () {
    int i, xcHE706hRPM, bIjydLeDQ7 = 0, address [5] [2], fOzxmtZ = 0, exist2 = 0;
    int lO9frTd5PnKv [(909 - 904)] [5];
    getchar ();
    for (i = (164 - 163); 5 >= i; i = i + 1) {
        bIjydLeDQ7 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (xcHE706hRPM = (785 - 784); 5 >= xcHE706hRPM; xcHE706hRPM = xcHE706hRPM + 1) {
            scanf ("%d", &lO9frTd5PnKv[i - 1][xcHE706hRPM - 1]);
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
            if (bIjydLeDQ7 < lO9frTd5PnKv[i - 1][xcHE706hRPM - 1]) {
                bIjydLeDQ7 = lO9frTd5PnKv[i - 1][xcHE706hRPM - 1];
                address[i - 1][0] = i - 1;
                address[i - 1][1] = xcHE706hRPM - 1;
            };
        };
    }
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
    for (i = 1; 5 >= i; i = i + 1) {
        int hang, lie;
        for (xcHE706hRPM = 1; xcHE706hRPM <= 5; xcHE706hRPM++) {
            hang = address[i - 1][0];
            lie = address[i - 1][1];
            if (lO9frTd5PnKv[xcHE706hRPM - 1][lie] < lO9frTd5PnKv[hang][lie])
                fOzxmtZ = 1;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (fOzxmtZ == 0) {
            exist2 = 1;
            printf ("%d %d %d", hang + 1, lie + 1, lO9frTd5PnKv[hang][lie]);
        }
        fOzxmtZ = 0;
    }
    if (exist2 == 0)
        printf ("%s", "not found");
    return 0;
}

