int h0Rut9Cq (const  void  *ruwsdVn, const  void  *elem2) {
    int *a = NULL;
    int *sqa3ouShw = NULL;
    a = (int *) ruwsdVn;
    sqa3ouShw = (int *) elem2;
    return (*a - *sqa3ouShw);
}

main () {
    int ZYTNPMQkbH;
    int nKL03sVZO6;
    int mVK9fg;
    int HkHiGYs;
    int a [ZYTNPMQkbH];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d %d", &ZYTNPMQkbH, &nKL03sVZO6);
    for (mVK9fg = (500 - 500); mVK9fg < ZYTNPMQkbH; mVK9fg = mVK9fg + 1)
        scanf ("%d", &a[mVK9fg]);
    {
        mVK9fg = 0;
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
        while (mVK9fg < ZYTNPMQkbH) {
            {
                HkHiGYs = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (HkHiGYs < ZYTNPMQkbH) {
                    if (!(HkHiGYs != mVK9fg))
                        continue;
                    else {
                        if (a[mVK9fg] + a[HkHiGYs] == nKL03sVZO6) {
                            goto end;
                        };
                    }
                    HkHiGYs++;
                };
            }
            mVK9fg = mVK9fg + 1;
        };
    }
    printf ("no");
end :
    return 0;
}

