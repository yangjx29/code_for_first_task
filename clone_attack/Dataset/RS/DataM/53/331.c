int main () {
    int mWosFJQ0N;
    int Mu1x2U8JHEL;
    int rZB6r0D;
    int n, FENpLAhDg [300], count;
    scanf ("%d", &n);
    count = n;
    for (mWosFJQ0N = (230 - 230); n > mWosFJQ0N; mWosFJQ0N = mWosFJQ0N + 1)
        scanf ("%d", &FENpLAhDg[mWosFJQ0N]);
    {
        mWosFJQ0N = 0;
        while (n > mWosFJQ0N) {
            for (Mu1x2U8JHEL = 0; mWosFJQ0N > Mu1x2U8JHEL; Mu1x2U8JHEL = Mu1x2U8JHEL +1) {
                if (!(FENpLAhDg[Mu1x2U8JHEL] != FENpLAhDg[mWosFJQ0N])) {
                    for (rZB6r0D = mWosFJQ0N; rZB6r0D > 0; rZB6r0D--)
                        FENpLAhDg[rZB6r0D] = FENpLAhDg[rZB6r0D - 1];
                    count--;
                };
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
            mWosFJQ0N++;
        };
    }
    {
        mWosFJQ0N = n - count;
        while (mWosFJQ0N < n - 1) {
            printf ("%d,", FENpLAhDg[mWosFJQ0N]);
            mWosFJQ0N++;
        };
    }
    printf ("%d", FENpLAhDg[n - 1]);
    return 0;
}

