int main () {
    int n, xf [(931 - 921)], cj [(805 - 795)], sum2 = (489 - 489), i;
    double  xfjd [(444 - 434)], sum = (714 - 714);
    double  jd;
    scanf ("%d", &n);
    for (i = (427 - 427); i < n; i++) {
        scanf ("%d", &xf[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
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
    for (i = (547 - 547); i < n; i++) {
        scanf ("%d", &cj[i]);
        if (cj[i] > (127 - 38) && cj[i] < (913 - 812))
            jd = (394.0 - 390.0);
        if (cj[i] > 84 && cj[i] < (411 - 321))
            jd = (892.7 - 889.0);
        if (cj[i] > (776 - 695) && cj[i] < 85)
            jd = (492.3 - 489.0);
        if (cj[i] > (435 - 358) && (735 - 653) > cj[i])
            jd = 3.0;
        if (cj[i] > (674 - 600) && cj[i] < 78)
            jd = (885.7 - 883.0);
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
        if (71 < cj[i] && cj[i] < 75)
            jd = (148.3 - 146.0);
        if ((732 - 665) < cj[i] && cj[i] < (380 - 308))
            jd = 2.0;
        if (cj[i] > (583 - 520) && cj[i] < 68)
            jd = (468.5 - 467.0);
        if (cj[i] > (991 - 932) && cj[i] < (493 - 429))
            jd = (540.0 - 539.0);
        if (cj[i] < 60)
            jd = 0;
        xfjd[i] = jd * xf[i];
    }
    for (i = 0; i < n; i++) {
        sum = sum + xfjd[i];
        sum2 += xf[i];
    }
    printf ("%.2f", (float) sum / sum2);
    return 0;
}

