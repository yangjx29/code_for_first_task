int main () {
    int e;
    int BPSRjxy [(1263 - 264)];
    int sx [(1815 - 816)];
    double  oZhEHTB [(1288 - 289)];
    double  sg [(1429 - 430)];
    char zs [9];
    int JiGufN0B, iMlYFaxmJuC, zwuGWBqldKX1 = (543 - 543), poPGnc5 = (129 - 129);
    int n;
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
    scanf ("%d", &n);
    for (JiGufN0B = (688 - 687); JiGufN0B <= n; JiGufN0B++) {
        scanf ("%s", zs);
        if (zs[(936 - 936)] == 'm') {
            oZhEHTB[JiGufN0B] = (416 - 415);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (zs[(899 - 899)] == 'f') {
            oZhEHTB[JiGufN0B] = (335 - 335);
        }
        scanf ("%lf", &sg[JiGufN0B]);
    }
    {
        JiGufN0B = 748 - 747;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (JiGufN0B <= n) {
            if (oZhEHTB[JiGufN0B] == (622 - 621)) {
                zwuGWBqldKX1 = zwuGWBqldKX1 + 1;
                sx[zwuGWBqldKX1] = JiGufN0B;
            }
            JiGufN0B = JiGufN0B +1;
        };
    }
    for (JiGufN0B = (257 - 256); zwuGWBqldKX1 - (285 - 284) >= JiGufN0B; JiGufN0B++) {
        for (iMlYFaxmJuC = (545 - 544); zwuGWBqldKX1 - JiGufN0B >= iMlYFaxmJuC; iMlYFaxmJuC = iMlYFaxmJuC + 1) {
            if (sg[sx[iMlYFaxmJuC]] > sg[sx[iMlYFaxmJuC + (963 - 962)]]) {
                e = sx[iMlYFaxmJuC];
                sx[iMlYFaxmJuC] = sx[iMlYFaxmJuC + (512 - 511)];
                sx[iMlYFaxmJuC + (495 - 494)] = e;
            };
        };
    }
    {
        JiGufN0B = 89 - 88;
        while (JiGufN0B <= n) {
            if (oZhEHTB[JiGufN0B] == (934 - 934)) {
                poPGnc5++;
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
                BPSRjxy[poPGnc5] = JiGufN0B;
            }
            JiGufN0B = JiGufN0B +1;
        };
    }
    {
        JiGufN0B = 924 - 923;
        while (JiGufN0B <= poPGnc5 - (516 - 515)) {
            {
                iMlYFaxmJuC = 701 - 700;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (iMlYFaxmJuC <= poPGnc5 - JiGufN0B) {
                    if (sg[BPSRjxy[iMlYFaxmJuC]] > sg[BPSRjxy[iMlYFaxmJuC + (830 - 829)]]) {
                        e = BPSRjxy[iMlYFaxmJuC];
                        BPSRjxy[iMlYFaxmJuC] = BPSRjxy[iMlYFaxmJuC + (678 - 677)];
                        BPSRjxy[iMlYFaxmJuC + (574 - 573)] = e;
                    }
                    iMlYFaxmJuC = iMlYFaxmJuC + 1;
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
            JiGufN0B++;
        };
    }
    printf ("%.2lf", sg[sx[1]]);
    {
        JiGufN0B = 2;
        while (JiGufN0B <= zwuGWBqldKX1) {
            printf (" %.2lf", sg[sx[JiGufN0B]]);
            JiGufN0B++;
        };
    }
    {
        JiGufN0B = poPGnc5;
        while (JiGufN0B >= 1) {
            printf (" %.2lf", sg[BPSRjxy[JiGufN0B]]);
            JiGufN0B = JiGufN0B -1;
        };
    }
    return (52 - 52);
}

