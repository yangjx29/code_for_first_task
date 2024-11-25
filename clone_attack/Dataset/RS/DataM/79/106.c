int main () {
    int num;
    int count;
    num = 0;
    count = 0;
    int mon [300];
    int sum;
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
    int test;
    int UtbqQHiXIUD;
    int uFfDIrMdhJb;
    int j;
    {
        j = 1;
        while (1) {
            num = 0;
            count = 0;
            scanf ("%d%d", &sum, &test);
            if (sum == 0 && test == 0)
                break;
            j = j + 1;
            {
                UtbqQHiXIUD = 0;
                while (UtbqQHiXIUD < sum) {
                    mon[UtbqQHiXIUD] = UtbqQHiXIUD +1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    UtbqQHiXIUD = UtbqQHiXIUD +1;
                };
            }
            while (num < sum) {
                UtbqQHiXIUD = 0;
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
                while (UtbqQHiXIUD < sum) {
                    if (mon[UtbqQHiXIUD] != 0) {
                        count = count + 1;
                        if (count == test) {
                            count = 0;
                            num = num + 1;
                            if (num == sum)
                                uFfDIrMdhJb = mon[UtbqQHiXIUD];
                            mon[UtbqQHiXIUD] = 0;
                        };
                    }
                    UtbqQHiXIUD = UtbqQHiXIUD +1;
                };
            }
            printf ("%d\n", uFfDIrMdhJb);
        };
    }
    return 0;
}

