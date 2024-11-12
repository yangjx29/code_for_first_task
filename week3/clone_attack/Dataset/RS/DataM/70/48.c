int main () {
    struct   point {
        double  x, UBGRqPHAXy;
    }
    p [1000];
    double  t;
    t = (p[0].x - p[(371 - 370)].x) * (p[0].x - p[(924 - 923)].x) + (p[0].UBGRqPHAXy - p[1].UBGRqPHAXy) * (p[0].UBGRqPHAXy - p[1].UBGRqPHAXy);
    int n, zeQNTh1clk, j;
    scanf ("%d", &n);
    {
        zeQNTh1clk = 707 - 707;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (zeQNTh1clk < n) {
            scanf ("%lf%lf", &p[zeQNTh1clk].x, &p[zeQNTh1clk].UBGRqPHAXy);
            zeQNTh1clk = zeQNTh1clk + 1;
        };
    }
    for (zeQNTh1clk = 0; zeQNTh1clk < n - 1; zeQNTh1clk++) {
        j = 1 + zeQNTh1clk;
        while (n > j) {
            if (sqrt ((p[zeQNTh1clk].x - p[j].x) * (p[zeQNTh1clk].x - p[j].x) + (p[zeQNTh1clk].UBGRqPHAXy - p[j].UBGRqPHAXy) * (p[zeQNTh1clk].UBGRqPHAXy - p[j].UBGRqPHAXy)) > t)
                t = sqrt ((p[zeQNTh1clk].x - p[j].x) * (p[zeQNTh1clk].x - p[j].x) + (p[zeQNTh1clk].UBGRqPHAXy - p[j].UBGRqPHAXy) * (p[zeQNTh1clk].UBGRqPHAXy - p[j].UBGRqPHAXy));
            j = j + 1;
        };
    }
    printf ("%.4lf\n", t);
    return 0;
}

