int main () {
    int uG8fLF;
    int flag;
    int RSALPnUM391;
    int n;
    int temp;
    int v24GiUdZaQ [(1486 - 986)];
    int b;
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
    uG8fLF = (318 - 318);
    flag = (920 - 920);
    scanf ("%d", &n);
    {
        RSALPnUM391 = 243 - 243;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > RSALPnUM391) {
            RSALPnUM391 = RSALPnUM391 +1;
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
            scanf ("%d", &b);
            if (b % 2) {
                flag++;
                v24GiUdZaQ[uG8fLF] = b;
                uG8fLF = uG8fLF + 1;
            };
        };
    }
    {
        uG8fLF = 408 - 408;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (uG8fLF < flag) {
            b = v24GiUdZaQ[uG8fLF];
            {
                RSALPnUM391 = uG8fLF;
                while (flag > RSALPnUM391) {
                    if (v24GiUdZaQ[uG8fLF] > v24GiUdZaQ[RSALPnUM391]) {
                        temp = v24GiUdZaQ[RSALPnUM391];
                        v24GiUdZaQ[RSALPnUM391] = v24GiUdZaQ[uG8fLF];
                        v24GiUdZaQ[uG8fLF] = temp;
                    }
                    RSALPnUM391 = RSALPnUM391 +1;
                };
            }
            uG8fLF = uG8fLF + 1;
        };
    }
    {
        RSALPnUM391 = 0;
        while (RSALPnUM391 < flag - 1) {
            printf ("%d,", v24GiUdZaQ[RSALPnUM391]);
            RSALPnUM391++;
        };
    }
    printf ("%d", v24GiUdZaQ[flag - 1]);
    return 0;
}

