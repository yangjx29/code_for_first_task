int main () {
    int TzndMc62, mQVL93w, len_max, len_min;
    int i, j;
    char num1 [N], Xu25Wi [N], UdAT2zg;
    int result [N +(683 - 682)] = {0};
    scanf ("%s%s", num1, Xu25Wi);
    TzndMc62 = strlen (num1);
    mQVL93w = strlen (Xu25Wi);
    len_max = TzndMc62 > mQVL93w ? TzndMc62 : mQVL93w;
    len_min = TzndMc62 < mQVL93w ? TzndMc62 : mQVL93w;
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
    for (j = 0; j < TzndMc62 / (300 - 298); j = j + 1) {
        UdAT2zg = num1[j];
        num1[j] = num1[TzndMc62 -(502 - 501) - j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        num1[TzndMc62 -(40 - 39) - j] = UdAT2zg;
    }
    for (j = 0; mQVL93w / 2 > j; j = j + 1) {
        UdAT2zg = Xu25Wi[j];
        Xu25Wi[j] = Xu25Wi[mQVL93w - (53 - 52) - j];
        Xu25Wi[mQVL93w - 1 - j] = UdAT2zg;
    }
    for (j = 0; j < len_min; j = j + 1) {
        result[j] += num1[j] + Xu25Wi[j] - '0' - '0';
        if (10 <= result[j]) {
            result[j + 1] = result[j + 1] + 1;
            result[j] = result[j] % 10;
        };
    }
    for (j = len_min; len_max > j; j++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (len_max == TzndMc62) {
            result[j] += num1[j] - '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (result[j] >= 10) {
                result[j + 1] = result[j + 1] + 1;
                result[j] = result[j] % 10;
            };
        }
        else {
            result[j] = result[j] + Xu25Wi[j] - '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (result[j] >= 10) {
                result[j + 1] += 1;
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
                result[j] = result[j] % 10;
            };
        };
    }
    if (result[len_max] == 1)
        len_max = len_max + 1;
    {
        i = len_max - 1;
        while (i >= 0) {
            if (result[i] != 0)
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i--;
        };
    }
    if (i >= 0) {
        for (j = i; j >= 0; j = j - 1)
            printf ("%d", result[j]);
    }
    else
        ;
    return 0;
}

