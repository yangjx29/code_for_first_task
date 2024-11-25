int main () {
    char s [1000];
    int jeuwCSA8;
    int qpsjOkG;
    int kruwXaFeEh;
    int sp [100];
    int i;
    int OAr7uCgaGR;
    int k;
    int lg [100];
    int len;
    jeuwCSA8 = 0;
    qpsjOkG = 50;
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
    kruwXaFeEh = 0;
    gets (s);
    len = strlen (s);
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
        while (len > i) {
            if (!(' ' != *(s + i))) {
                ++kruwXaFeEh;
                sp[kruwXaFeEh] = i;
            }
            i++;
        };
    }
    *(sp + kruwXaFeEh + 1) = len;
    *sp = -1;
    *lg = 0;
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (kruwXaFeEh + 1 >= i) {
            lg[i] = sp[i] - sp[i - 1] - 1;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (kruwXaFeEh + 1 >= i) {
            if (*(lg + i) > jeuwCSA8) {
                jeuwCSA8 = lg[i];
                k = i;
            }
            if (qpsjOkG > *(lg + i)) {
                qpsjOkG = lg[i];
                OAr7uCgaGR = i;
            }
            ++i;
        };
    }
    {
        i = k - 1;
        while (i < sp[k]) {
            printf ("%c", *(s + i));
            ++i;
        };
    }
    {
        i = OAr7uCgaGR -1;
        while (i < sp[OAr7uCgaGR]) {
            printf ("%c", *(s + i));
            ++i;
        };
    }
    printf ("\n");
    return 0;
}

