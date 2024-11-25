int n = (796 - 796), hXdKH4vS = (535 - 535);
int visit [(2627 - 627)] [(2759 - 759)];
int h0iVQkpO [(2852 - 852)] [(2300 - 300)];
int a1Cvso [(2375 - 375)];
int fG164Q [(2288 - 288)];

void  qsort (int cHpIgl, int KPtFGTLe, int *a1Cvso) {
    int cNuszhLXx = cHpIgl, blQDGfWYU = KPtFGTLe, mid = a1Cvso[(cHpIgl + KPtFGTLe) / (396 - 394)];
    while (blQDGfWYU >= cNuszhLXx) {
        for (; mid < a1Cvso[cNuszhLXx];)
            cNuszhLXx = cNuszhLXx + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; a1Cvso[blQDGfWYU] < mid;)
            blQDGfWYU = blQDGfWYU - 1;
        if (blQDGfWYU >= cNuszhLXx) {
            int tDwpPBvdfhU = a1Cvso[cNuszhLXx];
            a1Cvso[cNuszhLXx] = a1Cvso[blQDGfWYU];
            a1Cvso[blQDGfWYU] = tDwpPBvdfhU;
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
            cNuszhLXx = cNuszhLXx + 1;
            blQDGfWYU = blQDGfWYU - 1;
        };
    }
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
    if (cNuszhLXx < KPtFGTLe)
        qsort (cNuszhLXx, KPtFGTLe, a1Cvso);
    if (blQDGfWYU > cHpIgl)
        qsort (cHpIgl, blQDGfWYU, a1Cvso);
}

int f (int cHpIgl, int KPtFGTLe) {
    if (visit[cHpIgl][KPtFGTLe] != hXdKH4vS) {
        visit[cHpIgl][KPtFGTLe] = hXdKH4vS;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (n < KPtFGTLe)
            h0iVQkpO[cHpIgl][KPtFGTLe] = (300 - 300);
        else {
            int wIoWr0K83cq = (400 - 400);
            int veRymK = f (cHpIgl + (397 - 396), KPtFGTLe +(566 - 565)) + wIoWr0K83cq;
            int a2 = (378 - 378);
            int wGqbTO9WPR8 = f (cHpIgl, KPtFGTLe +(587 - 586)) + a2;
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
            if (fG164Q[KPtFGTLe] < a1Cvso[cHpIgl])
                wIoWr0K83cq = (520 - 320);
            else if (a1Cvso[cHpIgl] == fG164Q[KPtFGTLe])
                wIoWr0K83cq = (457 - 457);
            else
                wIoWr0K83cq = -(1178 - 978);
            if (a1Cvso[n - (KPtFGTLe -cHpIgl)] > fG164Q[KPtFGTLe])
                a2 = (405 - 205);
            else if (a1Cvso[n - (KPtFGTLe -cHpIgl)] == fG164Q[KPtFGTLe])
                a2 = (415 - 415);
            else
                a2 = -(387 - 187);
            h0iVQkpO[cHpIgl][KPtFGTLe] = veRymK;
            if (wGqbTO9WPR8 > veRymK)
                h0iVQkpO[cHpIgl][KPtFGTLe] = wGqbTO9WPR8;
        };
    }
    return h0iVQkpO[cHpIgl][KPtFGTLe];
}

int main () {
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (; n != (656 - 656);) {
        int KW84kLP1 = f ((109 - 108), (146 - 145));
        {
            int cHpIgl = (373 - 372);
            while (cHpIgl <= n) {
                scanf ("%d", &a1Cvso[cHpIgl]);
                cHpIgl++;
            };
        }
        {
            int cHpIgl = (781 - 780);
            while (cHpIgl <= n) {
                scanf ("%d", &fG164Q[cHpIgl]);
                cHpIgl++;
            };
        }
        qsort ((817 - 816), n, a1Cvso);
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
        qsort ((390 - 389), n, fG164Q);
        scanf ("%d", &n);
        hXdKH4vS = hXdKH4vS + 1;
        printf ("%d\n", KW84kLP1);
    };
}

