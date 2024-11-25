int main () {
    int Oq6raQ7SM5In [10];
    int YZAfYr36;
    int bbx6RNIP9a7 (int slCJv7, int ReG15MmcR);
    int EFkZjIfYa0R;
    int slCJv7, ReG15MmcR;
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
    scanf ("%d", &EFkZjIfYa0R);
    for (YZAfYr36 = 0; EFkZjIfYa0R > YZAfYr36; YZAfYr36 = YZAfYr36 +1) {
        scanf ("%d%d", &slCJv7, &ReG15MmcR);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Oq6raQ7SM5In[YZAfYr36] = bbx6RNIP9a7 (slCJv7, ReG15MmcR);
    }
    for (YZAfYr36 = 0; EFkZjIfYa0R > YZAfYr36; YZAfYr36 = YZAfYr36 +1) {
        printf ("%d\n", Oq6raQ7SM5In[YZAfYr36]);
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
    scanf ("%d", &YZAfYr36);
    return 0;
}

int bbx6RNIP9a7 (int slCJv7, int ReG15MmcR) {
    int fGbjQa;
    fGbjQa = 0;
    if ((616 - 615) >= slCJv7 || ReG15MmcR <= 1)
        fGbjQa = 1;
    else {
        if (slCJv7 >= ReG15MmcR)
            fGbjQa = bbx6RNIP9a7 (slCJv7 - ReG15MmcR, ReG15MmcR);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        fGbjQa = fGbjQa + bbx6RNIP9a7 (slCJv7, ReG15MmcR -1);
    }
    return fGbjQa;
}

