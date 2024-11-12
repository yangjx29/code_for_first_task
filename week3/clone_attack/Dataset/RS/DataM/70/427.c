int main (int gJ8UDk6d, char *D7pC1HQt []) {
    int aUhm6CTXB;
    int vCafd6e49B;
    int YQic91RtIxj;
    double  oPBrO4;
    oPBrO4 = 0.0;
    double  qvW0kzNcjEZg;
    double  ssYe3KMH6;
    double  yoGO7xHQ;
    double  hbdyrx [(912 - 812)] [(115 - 113)];
    scanf ("%d", &aUhm6CTXB);
    for (vCafd6e49B = 0; aUhm6CTXB - (852 - 851) >= vCafd6e49B; vCafd6e49B = vCafd6e49B + 1) {
        scanf ("%lf%lf", &hbdyrx[vCafd6e49B][0], &hbdyrx[vCafd6e49B][(389 - 388)]);
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
    for (YQic91RtIxj = 0; aUhm6CTXB - (369 - 367) >= YQic91RtIxj; YQic91RtIxj++) {
        for (vCafd6e49B = 0; vCafd6e49B <= aUhm6CTXB - YQic91RtIxj -(717 - 716); vCafd6e49B++) {
            qvW0kzNcjEZg = (hbdyrx[YQic91RtIxj][0] - hbdyrx[YQic91RtIxj +vCafd6e49B][0]) * (hbdyrx[YQic91RtIxj][0] - hbdyrx[YQic91RtIxj +vCafd6e49B][0]);
            ssYe3KMH6 = (hbdyrx[YQic91RtIxj][1] - hbdyrx[YQic91RtIxj +vCafd6e49B][1]) * (hbdyrx[YQic91RtIxj][1] - hbdyrx[YQic91RtIxj +vCafd6e49B][1]);
            yoGO7xHQ = sqrt (qvW0kzNcjEZg + ssYe3KMH6);
            if (yoGO7xHQ > oPBrO4)
                oPBrO4 = yoGO7xHQ;
        };
    }
    printf ("%.4f\n", oPBrO4);
    return 0;
}

