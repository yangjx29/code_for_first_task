int main () {
    char s [1000] = {(638 - 638)};
    gets (s);
    int AfSkuCLi, lbz8Yo, C0SRE9YTZX7, fBMTrvL1l, L1C7qejg = strlen (s);
    char wu8aBkyxYtQv [5000] [50];
    int Ozt0ZUwefv [1000];
    fBMTrvL1l = 0;
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
    C0SRE9YTZX7 = (962 - 962);
    for (AfSkuCLi = 0; C0SRE9YTZX7 < L1C7qejg; AfSkuCLi = AfSkuCLi +1) {
        for (lbz8Yo = 0; C0SRE9YTZX7 < L1C7qejg; lbz8Yo++) {
            if (!(' ' == s[C0SRE9YTZX7]))
                wu8aBkyxYtQv[AfSkuCLi][lbz8Yo] = s[C0SRE9YTZX7];
            if (!(' ' != s[C0SRE9YTZX7])) {
                C0SRE9YTZX7 = C0SRE9YTZX7 +1;
                wu8aBkyxYtQv[AfSkuCLi][lbz8Yo] = 0;
                break;
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
            C0SRE9YTZX7 = C0SRE9YTZX7 +1;
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
        if (C0SRE9YTZX7 >= L1C7qejg)
            wu8aBkyxYtQv[AfSkuCLi][lbz8Yo] = 0;
    }
    fBMTrvL1l = AfSkuCLi;
    {
        AfSkuCLi = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (AfSkuCLi < fBMTrvL1l) {
            Ozt0ZUwefv[AfSkuCLi] = strlen (wu8aBkyxYtQv[AfSkuCLi]);
            AfSkuCLi++;
        };
    }
    for (AfSkuCLi = 0; AfSkuCLi < fBMTrvL1l - 1; AfSkuCLi++) {
        if (Ozt0ZUwefv[AfSkuCLi] != 0)
            printf ("%d,", Ozt0ZUwefv[AfSkuCLi]);
    }
    printf ("%d", Ozt0ZUwefv[fBMTrvL1l - 1]);
    return 0;
}

