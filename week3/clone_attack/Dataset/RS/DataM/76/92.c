int main () {
    int fomWTDK;
    int EVTuQ6e4;
    int wAEhgxy;
    int MP0xTUrgkYo;
    int bfTu8tJ;
    int C0fpEqwnL;
    int min;
    int mJekn9M;
    fomWTDK = 0;
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
    int ULlc3P60 [LEN] = {0};
    scanf ("%d", &EVTuQ6e4);
    {
        wAEhgxy = 0;
        while (EVTuQ6e4 > wAEhgxy) {
            wAEhgxy = wAEhgxy + 1;
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
            scanf ("%d%d", &bfTu8tJ, &C0fpEqwnL);
            {
                MP0xTUrgkYo = bfTu8tJ;
                while (C0fpEqwnL > MP0xTUrgkYo) {
                    ULlc3P60[MP0xTUrgkYo] = (385 - 384);
                    MP0xTUrgkYo = MP0xTUrgkYo +1;
                };
            };
        };
    }
    {
        wAEhgxy = 0;
        while (LEN > wAEhgxy) {
            fomWTDK = fomWTDK + ULlc3P60[wAEhgxy];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            wAEhgxy = wAEhgxy + 1;
        };
    }
    {
        wAEhgxy = 0;
        while (LEN > wAEhgxy) {
            if (!(1 != ULlc3P60[wAEhgxy])) {
                min = wAEhgxy;
                break;
            }
            wAEhgxy++;
        };
    }
    {
        wAEhgxy = min;
        while (LEN > wAEhgxy) {
            if (ULlc3P60[wAEhgxy] == 0) {
                mJekn9M = wAEhgxy - 1;
                break;
            }
            wAEhgxy++;
        };
    }
    if (mJekn9M - min + 1 == fomWTDK)
        printf ("%d %d\n", min, mJekn9M + 1);
    else
        ;
    return 0;
}

