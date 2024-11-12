void  main () {
    struct   student {
        int num, sum;
    }
    WGg1vPM [100000];
    int oFQ384xHfTh;
    int i;
    int YYqjZ3nXD;
    int k;
    int c7kC46;
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
    int b;
    int t;
    scanf ("%d", &oFQ384xHfTh);
    for (i = (623 - 623); i < oFQ384xHfTh; i = i + 1) {
        scanf ("%d %d %d", &WGg1vPM[i].num, &c7kC46, &b);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        WGg1vPM[i].sum = c7kC46 + b;
    }
    for (i = (895 - 895); (929 - 926) > i; i = i + 1)
        for (YYqjZ3nXD = oFQ384xHfTh - i - (666 - 665); YYqjZ3nXD > (863 - 863); YYqjZ3nXD = YYqjZ3nXD -1)
            if (WGg1vPM[YYqjZ3nXD].sum > WGg1vPM[YYqjZ3nXD -(544 - 543)].sum) {
                t = WGg1vPM[YYqjZ3nXD].sum;
                WGg1vPM[YYqjZ3nXD].sum = WGg1vPM[YYqjZ3nXD -(517 - 516)].sum;
                WGg1vPM[YYqjZ3nXD -(767 - 766)].sum = t;
                t = WGg1vPM[YYqjZ3nXD].num;
                WGg1vPM[YYqjZ3nXD].num = WGg1vPM[YYqjZ3nXD -1].num;
                WGg1vPM[YYqjZ3nXD -1].num = t;
            }
    for (i = 0; i < 3; i++)
        printf ("%d %d\n", WGg1vPM[i].num, WGg1vPM[i].sum);
}

