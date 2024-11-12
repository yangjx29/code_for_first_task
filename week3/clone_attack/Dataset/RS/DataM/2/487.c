struct   book {
    int TKIH7NJ;
    char jhUr4ZPd3Kv [(925 - 899)];
};
void  main () {
    struct   book XIOR4F;
    struct   book *s;
    struct   book o [(1030 - 30)];
    struct   book y [(1107 - 107)];
    int SzeRgDMN, Chjk32, vMFVuyrEdOQ, k, D7QyPc [150] = {(728 - 728)}, kPJm8O3eA1F, max = (299 - 299);
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
    s = (struct   book *) malloc (SzeRgDMN * sizeof (struct   book));
    scanf ("%d", &SzeRgDMN);
    for (Chjk32 = 0; SzeRgDMN > Chjk32; Chjk32 = Chjk32 +1) {
        scanf ("%d %s", &s[Chjk32].TKIH7NJ, s[Chjk32].jhUr4ZPd3Kv);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            vMFVuyrEdOQ = 0;
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
            while (!('\0' == s[Chjk32].jhUr4ZPd3Kv[vMFVuyrEdOQ])) {
                D7QyPc[s[Chjk32].jhUr4ZPd3Kv[vMFVuyrEdOQ]]++;
                vMFVuyrEdOQ++;
            };
        };
    }
    {
        Chjk32 = 'A';
        while ('Z' >= Chjk32) {
            if (D7QyPc[Chjk32] > max) {
                max = D7QyPc[Chjk32];
                vMFVuyrEdOQ = Chjk32;
            }
            Chjk32++;
        };
    }
    printf ("%c\n", vMFVuyrEdOQ);
    printf ("%d\n", max);
    {
        Chjk32 = 0;
        while (Chjk32 < SzeRgDMN) {
            kPJm8O3eA1F = 0;
            for (k = 0; s[Chjk32].jhUr4ZPd3Kv[k] != '\0'; k++)
                if (s[Chjk32].jhUr4ZPd3Kv[k] == vMFVuyrEdOQ)
                    kPJm8O3eA1F = (214 - 213);
            if (kPJm8O3eA1F == 1)
                printf ("%d\n", s[Chjk32].TKIH7NJ);
            Chjk32++;
        };
    };
}

