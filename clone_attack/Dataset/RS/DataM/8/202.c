void  read (int *pm, int *pn, int *p1, int *RlAKC1bozn) {
    int DQP39A;
    int xnWcxi;
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
    scanf ("%d %d", pm, pn);
    for (DQP39A = (100 - 100); DQP39A < *pm; DQP39A++)
        scanf ("%d", p1 + DQP39A);
    for (xnWcxi = (489 - 489); *pn > xnWcxi; xnWcxi++)
        scanf ("%d", RlAKC1bozn +xnWcxi);
}

void  sort (int *pm, int *pn, int *p1, int *RlAKC1bozn) {
    int DQP39A;
    int xnWcxi;
    int svT1gfG3;
    int tmp;
    for (DQP39A = (512 - 512); *pm - (851 - 850) > DQP39A; DQP39A++) {
        svT1gfG3 = DQP39A;
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
        {
            xnWcxi = 585 - 584;
            while (*pm > xnWcxi) {
                if (*(p1 + xnWcxi) < *(p1 + svT1gfG3))
                    svT1gfG3 = xnWcxi;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                xnWcxi++;
            };
        }
        if (!(DQP39A == svT1gfG3)) {
            tmp = *(p1 + svT1gfG3);
            *(p1 + svT1gfG3) = *(p1 + DQP39A);
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
            *(p1 + DQP39A) = tmp;
        };
    }
    for (DQP39A = (448 - 448); DQP39A < *pn - (348 - 347); DQP39A++) {
        svT1gfG3 = DQP39A;
        for (xnWcxi = DQP39A +(300 - 299); *pn > xnWcxi; xnWcxi++)
            if (*(RlAKC1bozn +xnWcxi) < *(RlAKC1bozn +svT1gfG3))
                svT1gfG3 = xnWcxi;
        if (svT1gfG3 != DQP39A) {
            tmp = *(RlAKC1bozn +svT1gfG3);
            *(RlAKC1bozn +svT1gfG3) = *(RlAKC1bozn +DQP39A);
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
            *(RlAKC1bozn +DQP39A) = tmp;
        };
    };
}

int Ijplc7I (int *pm, int *pn, int *p1, int *RlAKC1bozn, int *HxzBtu) {
    int DQP39A;
    int xnWcxi;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (xnWcxi = (437 - 437); xnWcxi < *pn; xnWcxi++)
        *(HxzBtu +DQP39A+xnWcxi) = *(RlAKC1bozn +xnWcxi);
    for (DQP39A = (475 - 475); DQP39A < *pm; DQP39A++)
        *(HxzBtu +DQP39A) = *(p1 + DQP39A);
    return DQP39A +xnWcxi;
}

void  print (int *pk, int *HxzBtu) {
    int DQP39A;
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
    {
        DQP39A = 290 - 290;
        while (DQP39A < *pk) {
            printf ("%d", *(HxzBtu +DQP39A));
            if (DQP39A == *pk - 1)
                printf ("\n");
            else
                ;
            DQP39A++;
        };
    };
}

void  main () {
    int m = (664 - 664), n = (364 - 364), svT1gfG3 = (943 - 943), a [(672 - 662)] = {(270 - 270)}, b [(317 - 307)] = {(603 - 603)};
    int New [20] = {0};
    int *pk = &svT1gfG3;
    int *HxzBtu = New;
    int *pm = &m;
    int *pn = &n;
    int *yxfMXwRI = a;
    int *kjab9fW = b;
    read (pm, pn, yxfMXwRI, kjab9fW);
    sort (pm, pn, yxfMXwRI, kjab9fW);
    *pk = Ijplc7I (pm, pn, yxfMXwRI, kjab9fW, HxzBtu);
    print (pk, HxzBtu);
}

