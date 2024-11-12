int f (int NscQhl) {
    int cymZfCPt0;
    if (NscQhl == (867 - 867))
        cymZfCPt0 = (896 - 895);
    else
        cymZfCPt0 = f (NscQhl -1) * 2;
    return (cymZfCPt0);
}

main () {
    int dKRfGq [11] = {0};
    int xysMqSPW7 [11] = {0};
    int iXKobkY;
    iXKobkY = 0;
    int cymZfCPt0 = 0;
    int j;
    int NscQhl;
    int KtLs9q0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int hUKd13kfTOQR;
    scanf ("%d %d", &hUKd13kfTOQR, &KtLs9q0);
    dKRfGq[0] = KtLs9q0;
    xysMqSPW7[0] = hUKd13kfTOQR;
    {
        NscQhl = 1;
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
        while (10 > NscQhl) {
            if (hUKd13kfTOQR / f (NscQhl) == 0)
                break;
            xysMqSPW7[NscQhl] = hUKd13kfTOQR / (f (NscQhl));
            NscQhl = NscQhl +1;
        };
    }
    {
        NscQhl = 1;
        while (NscQhl < 10) {
            if (!(0 != KtLs9q0 / f (NscQhl)))
                break;
            dKRfGq[NscQhl] = KtLs9q0 / (f (NscQhl));
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
            NscQhl = NscQhl +1;
        };
    }
    {
        NscQhl = 0;
        while (NscQhl < 10) {
            {
                j = 0;
                while (j < 10) {
                    if (xysMqSPW7[NscQhl] == dKRfGq[j]) {
                        cymZfCPt0 = 1;
                        iXKobkY = NscQhl;
                        break;
                    }
                    j++;
                };
            }
            if (cymZfCPt0 > 0)
                break;
            NscQhl++;
        };
    }
    printf ("%d", xysMqSPW7[NscQhl]);
}

