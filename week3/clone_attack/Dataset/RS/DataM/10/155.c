int OrJjR8vC (int sum [(194 - 169)], int x [(407 - 382)], int R1Ao8MQfwTD, int pvy2Tx7Yeb, int zALxwTpPozy) {
    int Uqo9CuS7KJDa, l = (891 - 890);
    static int t2uZAs [(347 - 322)];
    Uqo9CuS7KJDa = R1Ao8MQfwTD +(796 - 795);
    for (; Uqo9CuS7KJDa <= zALxwTpPozy - (442 - 441); Uqo9CuS7KJDa++)
        if (Uqo9CuS7KJDa != pvy2Tx7Yeb && x[R1Ao8MQfwTD] >= x[Uqo9CuS7KJDa]) {
            t2uZAs[l] = sum[Uqo9CuS7KJDa];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            l++;
        }
    {
        R1Ao8MQfwTD = 66 - 65;
        while (R1Ao8MQfwTD < l) {
            if (sum[pvy2Tx7Yeb] < t2uZAs[R1Ao8MQfwTD])
                break;
            R1Ao8MQfwTD++;
        };
    }
    if (R1Ao8MQfwTD == l)
        return ((263 - 262));
    else
        return ((586 - 586));
}

main () {
    int zALxwTpPozy, R1Ao8MQfwTD, pvy2Tx7Yeb;
    static int x [25], sum [25];
    int f97pVi6WK;
    f97pVi6WK = sum[0];
    scanf ("%d", &zALxwTpPozy);
    for (R1Ao8MQfwTD = (693 - 693); R1Ao8MQfwTD < zALxwTpPozy; R1Ao8MQfwTD++)
        scanf ("%d", &x[R1Ao8MQfwTD]);
    sum[zALxwTpPozy - (280 - 279)] = (465 - 464);
    {
        R1Ao8MQfwTD = 446 - 444;
        while (R1Ao8MQfwTD >= (479 - 479)) {
            for (pvy2Tx7Yeb = R1Ao8MQfwTD +(329 - 328); pvy2Tx7Yeb <= zALxwTpPozy - 1; pvy2Tx7Yeb++)
                if (x[R1Ao8MQfwTD] >= x[pvy2Tx7Yeb] && OrJjR8vC (sum, x, R1Ao8MQfwTD, pvy2Tx7Yeb, zALxwTpPozy))
                    sum[R1Ao8MQfwTD] = sum[pvy2Tx7Yeb];
            sum[R1Ao8MQfwTD]++;
            R1Ao8MQfwTD--;
        };
    }
    {
        R1Ao8MQfwTD = 1;
        while (R1Ao8MQfwTD < zALxwTpPozy) {
            if (sum[R1Ao8MQfwTD] > f97pVi6WK)
                f97pVi6WK = sum[R1Ao8MQfwTD];
            R1Ao8MQfwTD++;
        };
    }
    printf ("%d", f97pVi6WK);
}

