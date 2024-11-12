int main () {
    int xvmIBXAlPFnW;
    int PNxaoWuSJL;
    int s7PL4W32u;
    int ohAdC2;
    double  qK27OHFY [MAX];
    double  DCeVzOJT [MAX];
    double  Zmg5Ix3 [MAX];
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
    DCeVzOJT[(93 - 93)] = 2;
    Zmg5Ix3[(163 - 163)] = (781 - 780);
    scanf ("%d", &xvmIBXAlPFnW);
    for (s7PL4W32u = 0; s7PL4W32u < xvmIBXAlPFnW; s7PL4W32u++) {
        scanf ("%d", &PNxaoWuSJL);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        qK27OHFY[s7PL4W32u] = 0;
        {
            ohAdC2 = 284 - 283;
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
            while (ohAdC2 <= PNxaoWuSJL) {
                DCeVzOJT[ohAdC2] = DCeVzOJT[ohAdC2 - (928 - 927)] + Zmg5Ix3[ohAdC2 - (311 - 310)];
                Zmg5Ix3[ohAdC2] = DCeVzOJT[ohAdC2 - 1];
                qK27OHFY[s7PL4W32u] = qK27OHFY[s7PL4W32u] + (DCeVzOJT[ohAdC2 - 1]) / (Zmg5Ix3[ohAdC2 - 1]);
                ohAdC2++;
            };
        };
    }
    {
        s7PL4W32u = 0;
        while (s7PL4W32u < xvmIBXAlPFnW) {
            printf ("%.3lf\n", qK27OHFY[s7PL4W32u]);
            s7PL4W32u++;
        };
    }
    return 0;
}

