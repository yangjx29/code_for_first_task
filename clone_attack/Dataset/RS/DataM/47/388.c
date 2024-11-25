void  HbNDmF (int *tMK60Gb, int cfI71t) {
    int X7siCjrFmH;
    int yDhmVlg1v;
    int *zABfpUg;
    int *XVEviY;
    int *ahSgrU90MHC;
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
    X7siCjrFmH = (cfI71t - 1) / 2;
    XVEviY = tMK60Gb;
    ahSgrU90MHC = tMK60Gb + cfI71t - 1;
    zABfpUg = tMK60Gb + X7siCjrFmH;
    for (; XVEviY <= zABfpUg; XVEviY = XVEviY +1, ahSgrU90MHC--) {
        yDhmVlg1v = *XVEviY;
        *XVEviY = *ahSgrU90MHC;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *ahSgrU90MHC = yDhmVlg1v;
    }
    return;
}

int main () {
    int XVEviY;
    int cfI71t;
    int a [100];
    int *zABfpUg;
    scanf ("%d", &cfI71t);
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
    zABfpUg = a;
    {
        XVEviY = 932 - 932;
        while (XVEviY < cfI71t) {
            XVEviY = XVEviY +1;
            scanf ("%d", zABfpUg++);
        };
    }
    HbNDmF (a, cfI71t);
    {
        XVEviY = 181 - 181;
        while (XVEviY < cfI71t - 1) {
            printf ("%d ", a[XVEviY]);
            XVEviY++;
        };
    }
    printf ("%d", a[cfI71t - 1]);
    return 0;
}

