int main () {
    int RiOKPpo;
    int n;
    int jXQeoT4t2i [10] [3];
    int i;
    int YJgYozIQ;
    int pf3IQPrJMs [45] [2] [2];
    int RUi930W1po;
    int x;
    int bkZFXpy;
    RiOKPpo = 0;
    double  z;
    scanf ("%d", &n);
    {
        i = 0;
        for (; i < n;) {
            scanf ("%d%d%d", &jXQeoT4t2i[i][0], &jXQeoT4t2i[i][1], &jXQeoT4t2i[i][2]);
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; n - 1 > i;) {
            for (YJgYozIQ = i + 1; n > YJgYozIQ; YJgYozIQ = YJgYozIQ +1) {
                pf3IQPrJMs[RiOKPpo][0][0] = i;
                pf3IQPrJMs[RiOKPpo][0][1] = YJgYozIQ;
                pf3IQPrJMs[RiOKPpo][1][1] = (jXQeoT4t2i[i][0] - jXQeoT4t2i[YJgYozIQ][0]) * (jXQeoT4t2i[i][0] - jXQeoT4t2i[YJgYozIQ][0]) + (jXQeoT4t2i[i][1] - jXQeoT4t2i[YJgYozIQ][1]) * (jXQeoT4t2i[i][1] - jXQeoT4t2i[YJgYozIQ][1]) + (jXQeoT4t2i[i][2] - jXQeoT4t2i[YJgYozIQ][2]) * (jXQeoT4t2i[i][2] - jXQeoT4t2i[YJgYozIQ][2]);
                RiOKPpo = RiOKPpo +1;
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; i < n * (n - 1) / 2 - 1;) {
            YJgYozIQ = 0;
            for (; YJgYozIQ < n * (n - 1) / 2 - i - 1;) {
                if (pf3IQPrJMs[YJgYozIQ +1][1][1] > pf3IQPrJMs[YJgYozIQ][1][1]) {
                    RUi930W1po = pf3IQPrJMs[YJgYozIQ][0][0];
                    pf3IQPrJMs[YJgYozIQ][0][0] = pf3IQPrJMs[YJgYozIQ +1][0][0];
                    pf3IQPrJMs[YJgYozIQ +1][0][0] = RUi930W1po;
                    RUi930W1po = pf3IQPrJMs[YJgYozIQ][0][1];
                    pf3IQPrJMs[YJgYozIQ][0][1] = pf3IQPrJMs[YJgYozIQ +1][0][1];
                    pf3IQPrJMs[YJgYozIQ +1][0][1] = RUi930W1po;
                    RUi930W1po = pf3IQPrJMs[YJgYozIQ][1][1];
                    pf3IQPrJMs[YJgYozIQ][1][1] = pf3IQPrJMs[YJgYozIQ +1][1][1];
                    pf3IQPrJMs[YJgYozIQ +1][1][1] = RUi930W1po;
                }
                YJgYozIQ = YJgYozIQ +1;
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; i < n * (n - 1) / 2;) {
            z = sqrt (pf3IQPrJMs[i][1][1] * 1.0);
            x = pf3IQPrJMs[i][0][0];
            bkZFXpy = pf3IQPrJMs[i][0][1];
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", jXQeoT4t2i[x][0], jXQeoT4t2i[x][1], jXQeoT4t2i[x][2], jXQeoT4t2i[bkZFXpy][0], jXQeoT4t2i[bkZFXpy][1], jXQeoT4t2i[bkZFXpy][2], z);
            i = i + 1;
        }
    }
    return 0;
}

