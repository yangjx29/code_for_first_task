int main () {
    int bbHr9pmN2WS4 [(10035 - 35)], qz9yfxoR8lB [10000], R4kpugsz, h4UI2h5kLKHW [10000], i, IHjCcR = (732 - 732), gQs4on;
    double  IUbAFITZ5 [10000];
    bbHr9pmN2WS4[(536 - 536)] = 2;
    scanf ("%d", &R4kpugsz);
    {
        i = 506 - 506;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < R4kpugsz) {
            scanf ("%d", &h4UI2h5kLKHW[i]);
            if (IHjCcR < h4UI2h5kLKHW[i])
                IHjCcR = h4UI2h5kLKHW[i];
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
            i = i + 1;
        };
    }
    bbHr9pmN2WS4[(298 - 297)] = 3;
    qz9yfxoR8lB[0] = (84 - 83);
    qz9yfxoR8lB[1] = 2;
    IUbAFITZ5[0] = 2;
    {
        i = 2;
        while (IHjCcR > i) {
            qz9yfxoR8lB[i] = qz9yfxoR8lB[i - 1] + qz9yfxoR8lB[i - 2];
            bbHr9pmN2WS4[i] = bbHr9pmN2WS4[i - 1] + bbHr9pmN2WS4[i - 2];
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < IHjCcR) {
            IUbAFITZ5[i] = IUbAFITZ5[i - 1] + 1.0 * bbHr9pmN2WS4[i] / qz9yfxoR8lB[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < R4kpugsz) {
            gQs4on = h4UI2h5kLKHW[i] - 1;
            i++;
            printf ("%.3lf\n", IUbAFITZ5[gQs4on]);
        };
    }
    return 0;
}

