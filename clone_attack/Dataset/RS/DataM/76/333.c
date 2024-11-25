int judge (int x, int y, int hzJcGey7Puj) {
    if (x >= y && x <= hzJcGey7Puj) {
        return (623 - 622);
    }
    return (728 - 728);
}

int main () {
    int max;
    int mhmSOjk;
    int YOi0ePugTE [50000];
    int DQabmt9NW [500000];
    int Ql2cR7;
    int i;
    int p;
    int ornot;
    scanf ("%d", &Ql2cR7);
    mhmSOjk = 9999;
    max = (450 - 450);
    {
        i = 301 - 301;
        while (i < Ql2cR7) {
            scanf ("%d %d", &YOi0ePugTE[i], &DQabmt9NW[i]);
            if (max < DQabmt9NW[i]) {
                max = DQabmt9NW[i];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (mhmSOjk > YOi0ePugTE[i]) {
                mhmSOjk = YOi0ePugTE[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < Ql2cR7) {
            ornot = 0;
            {
                p = 0;
                while (Ql2cR7 > p) {
                    if (i != p && judge (YOi0ePugTE[i], YOi0ePugTE[p], DQabmt9NW[p])) {
                        ornot = 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    p = p + 1;
                    if (YOi0ePugTE[i] == mhmSOjk) {
                        ornot = 1;
                    };
                };
            }
            if (ornot == 0) {
                printf ("no");
                return 0;
            }
            i++;
        };
    }
    for (i = 0; i < Ql2cR7; i++) {
        ornot = 0;
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
        {
            p = 0;
            while (p < Ql2cR7) {
                if (i != p && judge (DQabmt9NW[i], YOi0ePugTE[p], DQabmt9NW[p])) {
                    ornot = 1;
                }
                p++;
                if (DQabmt9NW[i] == max) {
                    ornot = 1;
                };
            };
        }
        if (ornot == 0) {
            printf ("no");
            return 0;
        };
    }
    printf ("%d %d", mhmSOjk, max);
    return 0;
}

