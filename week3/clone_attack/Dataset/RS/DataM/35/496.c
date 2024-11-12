void  main () {
    int LxXferwtzF [(293 - 285)] [(871 - 863)];
    int dI46L7i (int g0u6rcxR [8] [8], int AfYLKHFbcy, int C9pTC1JPm, int yN06ZTGdQ, int XxLDNXCzMJ0, int D0DpthE);
    int XxLDNXCzMJ0, D0DpthE, C9pTC1JPm, yN06ZTGdQ;
    scanf ("%d,%d", &XxLDNXCzMJ0, &D0DpthE);
    for (C9pTC1JPm = 0; XxLDNXCzMJ0 > C9pTC1JPm; C9pTC1JPm = C9pTC1JPm +1)
        for (yN06ZTGdQ = 0; D0DpthE > yN06ZTGdQ; yN06ZTGdQ = yN06ZTGdQ + 1)
            scanf ("%d", &LxXferwtzF[C9pTC1JPm][yN06ZTGdQ]);
    for (C9pTC1JPm = 0; XxLDNXCzMJ0 > C9pTC1JPm; C9pTC1JPm = C9pTC1JPm +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (yN06ZTGdQ = 0; D0DpthE > yN06ZTGdQ; yN06ZTGdQ++) {
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
            if (!((652 - 651) != dI46L7i (LxXferwtzF, LxXferwtzF[C9pTC1JPm][yN06ZTGdQ], C9pTC1JPm, yN06ZTGdQ, XxLDNXCzMJ0, D0DpthE))) {
                printf ("%d+%d\n", C9pTC1JPm, yN06ZTGdQ);
                goto l1;
            };
        };
    }
l1 :
    ;
}

int dI46L7i (int g0u6rcxR [8] [8], int AfYLKHFbcy, int C9pTC1JPm, int yN06ZTGdQ, int XxLDNXCzMJ0, int D0DpthE) {
    int grzVkTmt;
    int tK4jFnRJpuQ;
    int Q2z4i0;
    grzVkTmt = g0u6rcxR[C9pTC1JPm][0];
    tK4jFnRJpuQ = g0u6rcxR[0][yN06ZTGdQ];
    {
        Q2z4i0 = 0;
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
        while (D0DpthE -1 > Q2z4i0) {
            if (g0u6rcxR[C9pTC1JPm][Q2z4i0] < g0u6rcxR[C9pTC1JPm][Q2z4i0 +1]) {
                grzVkTmt = g0u6rcxR[C9pTC1JPm][Q2z4i0 +1];
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
            Q2z4i0 = Q2z4i0 +1;
        };
    }
    if (!(grzVkTmt != AfYLKHFbcy)) {
        {
            Q2z4i0 = 0;
            while (Q2z4i0 < XxLDNXCzMJ0 -1) {
                if (g0u6rcxR[Q2z4i0 +1][yN06ZTGdQ] < g0u6rcxR[Q2z4i0][yN06ZTGdQ])
                    tK4jFnRJpuQ = g0u6rcxR[Q2z4i0 +1][yN06ZTGdQ];
                Q2z4i0++;
            };
        }
        if (AfYLKHFbcy == tK4jFnRJpuQ)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

