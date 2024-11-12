int main (int fAhjBza1d78Q, char *argv []) {
    int HSa1cb9HYmu [(824 - 724)] [(914 - 814)];
    int b;
    int dD2Prl;
    int Cxqcdr;
    int e;
    int i;
    int HglB0WvN4;
    int n;
    int RIV1UmqGoy;
    b = (832 - 832);
    dD2Prl = (218 - 218);
    Cxqcdr = (94 - 94);
    e = (782 - 782);
    scanf ("%d", &n);
    {
        i = 320 - 320;
        while (n > i) {
            for (HglB0WvN4 = (587 - 587); HglB0WvN4 < n; HglB0WvN4++) {
                scanf ("%d", &HSa1cb9HYmu[i][HglB0WvN4]);
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
            i++;
        };
    }
    {
        i = 387 - 387;
        while (i < n) {
            for (HglB0WvN4 = (973 - 973); HglB0WvN4 < n; HglB0WvN4++) {
                if (HSa1cb9HYmu[i][HglB0WvN4] == (224 - 224)) {
                    goto loop;
                    dD2Prl = i;
                    b = HglB0WvN4;
                };
            }
            i++;
        };
    }
loop :
    for (i = n - (364 - 363); 0 <= i; i--) {
        HglB0WvN4 = 751 - 750;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (HglB0WvN4 >= 0) {
            if (HSa1cb9HYmu[i][HglB0WvN4] == 0) {
                e = i;
                Cxqcdr = HglB0WvN4;
                goto end;
            }
            HglB0WvN4--;
        };
    }
end :
    RIV1UmqGoy = (e - dD2Prl - 1) * (Cxqcdr -b - 1);
    printf ("%d\n", RIV1UmqGoy);
    return 0;
}

