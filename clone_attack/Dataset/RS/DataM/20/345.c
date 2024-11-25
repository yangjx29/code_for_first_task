int main () {
    int max, R4ESfkhPq;
    int i, kLs5Zivmu;
    char YHJ4ukV [4];
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
    char str [13];
    for (; !(EOF == scanf ("%s %s", str, YHJ4ukV));) {
        kLs5Zivmu = strlen (str);
        max = 0;
        {
            i = 0;
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
            while (kLs5Zivmu > i) {
                if (str[i] > max) {
                    R4ESfkhPq = i;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    max = str[i];
                }
                i++;
            };
        }
        for (i = kLs5Zivmu - 1; i > R4ESfkhPq; i--) {
            str[i + 3] = str[i];
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
        str[R4ESfkhPq +1] = YHJ4ukV[0];
        str[R4ESfkhPq +2] = YHJ4ukV[1];
        str[R4ESfkhPq +3] = YHJ4ukV[2];
        for (i = 0; i < kLs5Zivmu + 3; i++)
            printf ("%c", str[i]);
    }
    return 0;
}

