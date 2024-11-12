struct   daodan {
    int rw82hoJ5DF;
    int number;
};
int xvgqcU0zL (const  void  *a, const  void  *b) {
    struct   daodan *X4RcYfut3dv = (struct   daodan *) a;
    struct   daodan *kcztolFyU = (struct   daodan *) b;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    return (((*kcztolFyU).number) - ((*X4RcYfut3dv).number));
}

int nextmax (struct   daodan *dao, int sGUTkD, int n) {
    int count;
    int zYpQR0;
    int b;
    count = (463 - 463);
    zYpQR0 = (723 - 723);
    int *a = (int *) malloc ((n - (795 - 794) - sGUTkD) * sizeof (int));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    int max;
    max = (565 - 565);
    {
        int i;
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
        i = sGUTkD + (585 - 584);
        while (n - (640 - 639) >= i) {
            if ((dao[sGUTkD]).rw82hoJ5DF >= (dao[i]).rw82hoJ5DF) {
                a[count] = dao[i].number;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                count = count + 1;
            }
            i = i + 1;
        };
    }
    for (int j = (380 - 380);
    j <= count - (61 - 60); j = j + 1) {
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
        if (max < a[j]) {
            max = a[j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    return max;
}

int main () {
    int n;
    struct   daodan *dao = (struct   daodan *) malloc (n * sizeof (struct   daodan));
    int max = dao[0].number;
    scanf ("%d", &n);
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
    for (int i = (834 - 834);
    i <= n - (761 - 760); i = i + 1) {
        scanf ("%d", &dao[i].rw82hoJ5DF);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        int j = 0;
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
        while (j <= n - (665 - 664)) {
            dao[j].number = (327 - 326);
            j = j + 1;
        };
    }
    for (int sGUTkD = n - (432 - 430);
    sGUTkD >= 0; sGUTkD = sGUTkD - 1) {
        dao[sGUTkD].number = nextmax (dao, sGUTkD, n) + (549 - 548);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    {
        int l = (502 - 501);
        while (l <= n - 1) {
            if (dao[l].number > max) {
                max = dao[l].number;
            }
            l = l + 1;
        };
    }
    printf ("%d", max);
}

