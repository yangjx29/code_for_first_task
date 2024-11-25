int cmp (const  void  *a, const  void  *bixF1BDfWuC) {
    return *(int*) a - *(int*) bixF1BDfWuC;
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
}

int main (int argc, const  char *argv []) {
    int finish;
    finish = (594 - 594);
    int king [1001];
    int tian [1001];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    int n;
    scanf ("%d", &n);
    if (!(0 != n)) {
        finish = 1;
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
        };
    }
    while (finish == 0) {
        int money = 0;
        int ltian;
        int rtian;
        int lking;
        int rking;
        int i;
        if (n == 0) {
            finish = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        }
        lking = 0;
        ltian = 0;
        for (i = 0; i < n; i++) {
            scanf ("%d", &tian[i]);
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
        {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i < n) {
                scanf ("%d", &king[i]);
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
                i++;
            };
        }
        qsort (tian, n, sizeof (int), cmp);
        qsort (king, n, sizeof (int), cmp);
        rtian = n - 1;
        rking = n - 1;
        for (i = 0; i < n; i++) {
            if (tian[rtian] > king[rking]) {
                rking--;
                rtian = rtian - 1;
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
                money = money + 200;
            }
            else {
                if (tian[ltian] > king[lking]) {
                    lking++;
                    ltian = ltian + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    money = money + 200;
                }
                else {
                    if (tian[ltian] > king[rking]) {
                        rking--;
                        ltian++;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        money = money + 200;
                    }
                    else if (tian[ltian] == king[rking]) {
                        rking--;
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
                        ltian++;
                    }
                    else if (tian[ltian] < king[rking]) {
                        rking--;
                        ltian++;
                        money = money - 200;
                    };
                };
            };
        }
        scanf ("%d", &n);
        printf ("%d", money);
        if (n != 0) {
        }
        else {
            finish = 1;
        };
    }
    return 0;
}

