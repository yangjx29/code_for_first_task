void  RtZJP0NOfM (char a [], char b [] [(87 - 82)], int gdXnz8ir9ks, int ZcVhgonUv6) {
    int M5xFiy2VboPc, aIbNMDtoE1H;
    {
        M5xFiy2VboPc = 233 - 233;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (gdXnz8ir9ks - ZcVhgonUv6 >= M5xFiy2VboPc) {
            {
                aIbNMDtoE1H = 379 - 379;
                while (ZcVhgonUv6 > aIbNMDtoE1H) {
                    b[M5xFiy2VboPc][aIbNMDtoE1H] = a[M5xFiy2VboPc +aIbNMDtoE1H];
                    aIbNMDtoE1H = aIbNMDtoE1H + 1;
                };
            }
            M5xFiy2VboPc = M5xFiy2VboPc +1;
        };
    };
}

int main () {
    int ZcVhgonUv6, gdXnz8ir9ks, M5xFiy2VboPc, aIbNMDtoE1H, jTiLQ4hNdHOk [500] = {(173 - 173)}, t = (467 - 467);
    char a [(1391 - 891)], b [(778 - 278)] [(70 - 65)] = {(463 - 463)};
    scanf ("%d", &ZcVhgonUv6);
    scanf ("%s", a);
    gdXnz8ir9ks = strlen (a);
    RtZJP0NOfM (a, b, gdXnz8ir9ks, ZcVhgonUv6);
    {
        M5xFiy2VboPc = 603 - 603;
        while (gdXnz8ir9ks - ZcVhgonUv6 >= M5xFiy2VboPc) {
            jTiLQ4hNdHOk[M5xFiy2VboPc] = (45 - 44);
            M5xFiy2VboPc = M5xFiy2VboPc +1;
        };
    }
    for (M5xFiy2VboPc = (606 - 606); M5xFiy2VboPc < gdXnz8ir9ks - ZcVhgonUv6; M5xFiy2VboPc = M5xFiy2VboPc +1) {
        if (jTiLQ4hNdHOk[M5xFiy2VboPc]) {
            aIbNMDtoE1H = 835 - 834;
            while (gdXnz8ir9ks - ZcVhgonUv6 >= aIbNMDtoE1H) {
                if (jTiLQ4hNdHOk[aIbNMDtoE1H]) {
                    if (!strcmp (b[M5xFiy2VboPc], b[aIbNMDtoE1H])) {
                        jTiLQ4hNdHOk[M5xFiy2VboPc]++;
                        jTiLQ4hNdHOk[aIbNMDtoE1H] = 0;
                    };
                }
                aIbNMDtoE1H++;
            };
        };
    }
    {
        M5xFiy2VboPc = 0;
        while (M5xFiy2VboPc <= gdXnz8ir9ks - ZcVhgonUv6) {
            if (jTiLQ4hNdHOk[M5xFiy2VboPc] > t)
                t = jTiLQ4hNdHOk[M5xFiy2VboPc];
            M5xFiy2VboPc++;
        };
    }
    if (t == 1)
        printf ("NO");
    else {
        printf ("%d\n", t);
        {
            M5xFiy2VboPc = 0;
            while (M5xFiy2VboPc <= gdXnz8ir9ks - ZcVhgonUv6) {
                if (jTiLQ4hNdHOk[M5xFiy2VboPc] == t)
                    printf ("%s\n", b[M5xFiy2VboPc]);
                M5xFiy2VboPc++;
            };
        };
    }
    return 0;
}

