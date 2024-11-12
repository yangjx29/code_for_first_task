int RoYRawEIZ2fM [MAX_N +10];
int aMaxLen [MAX_N +10];

int main () {
    int tg3p8l = -1;
    int N, i, j;
    aMaxLen[1] = 1;
    scanf ("%d", &N);
    for (i = N; 1 <= i; i--)
        scanf ("%d", &RoYRawEIZ2fM[i]);
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
    for (i = 2; N >= i; i++) {
        int sXaHThV60tM;
        sXaHThV60tM = 0;
        for (j = 1; i > j; j++) {
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
            if (RoYRawEIZ2fM[j] <= RoYRawEIZ2fM[i]) {
                if (sXaHThV60tM < aMaxLen[j])
                    sXaHThV60tM = aMaxLen[j];
            };
        }
        aMaxLen[i] = sXaHThV60tM + 1;
    }
    {
        i = 1;
        while (i <= N) {
            if (tg3p8l < aMaxLen[i])
                tg3p8l = aMaxLen[i];
            i++;
        };
    }
    printf ("%d\n", tg3p8l);
    return 0;
}

