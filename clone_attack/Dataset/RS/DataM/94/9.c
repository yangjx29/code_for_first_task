int main () {
    int yVCmz31u8Pvl;
    int FENL7Uzl4 [500];
    int TiECLF4YvX8;
    int i;
    int uuI5HNZbLvWF;
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
    scanf ("%d", &yVCmz31u8Pvl);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (yVCmz31u8Pvl > i) {
            scanf ("%d", &FENL7Uzl4[i]);
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
            i++;
        };
    }
    {
        TiECLF4YvX8 = 0;
        while (yVCmz31u8Pvl > TiECLF4YvX8) {
            {
                i = TiECLF4YvX8 +1;
                while (yVCmz31u8Pvl > i) {
                    if (FENL7Uzl4[TiECLF4YvX8] > FENL7Uzl4[i]) {
                        uuI5HNZbLvWF = FENL7Uzl4[i];
                        FENL7Uzl4[i] = FENL7Uzl4[TiECLF4YvX8];
                        FENL7Uzl4[TiECLF4YvX8] = uuI5HNZbLvWF;
                    }
                    i++;
                };
            }
            TiECLF4YvX8++;
        };
    }
    uuI5HNZbLvWF = 0;
    {
        i = 0;
        while (i < yVCmz31u8Pvl) {
            if (FENL7Uzl4[i] % 2 != 0) {
                if (uuI5HNZbLvWF == 0)
                    printf ("%d", FENL7Uzl4[i]);
                else
                    printf (",%d", FENL7Uzl4[i]);
            }
            i++;
            uuI5HNZbLvWF++;
        };
    }
    return 0;
}

