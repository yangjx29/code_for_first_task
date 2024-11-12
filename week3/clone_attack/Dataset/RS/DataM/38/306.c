int main (int AmEdrpDcKI, char *AumpBYxU31s2 []) {
    int k;
    int i;
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
    scanf ("%d", &k);
    {
        i = 794 - 794;
        while (i < k) {
            double  hjE9ntMT = 0, yfA07gnWsbG8 = 0, a1 = 0, ojpb9TX6qn8w = 0, s = 0;
            double  o6DopGWBLce [1000];
            int n, YxsG1zTJ;
            i = i + 1;
            scanf ("%d", &n);
            {
                YxsG1zTJ = 0;
                while (YxsG1zTJ < n) {
                    scanf ("%lf", &o6DopGWBLce[YxsG1zTJ]);
                    a1 += o6DopGWBLce[YxsG1zTJ];
                    YxsG1zTJ = YxsG1zTJ +1;
                };
            }
            hjE9ntMT = a1 / (double ) n;
            {
                YxsG1zTJ = 0;
                while (YxsG1zTJ < n) {
                    double  NFmvfVJzMqx;
                    NFmvfVJzMqx = (o6DopGWBLce[YxsG1zTJ] - hjE9ntMT) * (o6DopGWBLce[YxsG1zTJ] - hjE9ntMT);
                    YxsG1zTJ++;
                    ojpb9TX6qn8w += NFmvfVJzMqx;
                };
            }
            yfA07gnWsbG8 = ojpb9TX6qn8w / (double ) n;
            s = sqrt (yfA07gnWsbG8);
            printf ("%.5lf\n", s);
        };
    }
    return 0;
}

