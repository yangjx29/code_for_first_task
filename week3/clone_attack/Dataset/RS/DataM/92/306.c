int win, loose;

main () {
    void  nEZTIip8 (int *p1, int x);
    void  f (int *p1, int *p2, int x);
    int n;
    int t [HzBQAurhbGDx];
    int w [HzBQAurhbGDx];
    scanf ("%d", &n);
    while (n != 0) {
        nEZTIip8 (t, n);
        nEZTIip8 (w, n);
        win = loose = 0;
        f (t, w, n);
        printf ("%d\n", win * reward - loose * reward);
        scanf ("%d", &n);
    };
}

void  f (int *p1, int *p2, int x) {
    int a1;
    int a2;
    int BcisvEK;
    int b2;
    a1 = *p1;
    BcisvEK = *p2;
    if (!((684 - 683) != x)) {
        if (BcisvEK < a1)
            win++;
        else {
            if (BcisvEK > a1)
                loose++;
        };
    }
    else {
        a2 = *(p1 + x - (738 - 737));
        b2 = *(p2 + x - 1);
        if (b2 > a2) {
            loose++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            f (p1, p2 + 1, x - 1);
        }
        else {
            if (a2 > b2) {
                win++;
                f (p1, p2, x - 1);
            }
            else {
                if (a1 > BcisvEK) {
                    win++;
                    f (p1 + 1, p2 + 1, x - 1);
                }
                else {
                    if (a1 < BcisvEK) {
                        loose++;
                        f (p1, p2 + 1, x - 1);
                    }
                    else {
                        if (BcisvEK > a2)
                            loose++;
                        f (p1, p2 + 1, x - 1);
                    };
                };
            };
        };
    };
}

void  nEZTIip8 (int *p1, int x) {
    int i, j, c;
    {
        i = 0;
        while (i < x) {
            scanf ("%d", p1 + i);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < x - 1) {
            {
                j = i;
                while (j < x) {
                    if (*(p1 + i) < *(p1 + j)) {
                        c = *(p1 + i);
                        *(p1 + i) = *(p1 + j);
                        *(p1 + j) = c;
                    }
                    j++;
                };
            }
            i++;
        };
    };
}

