int main (int argc, char *zsDxSa []) {
    int g7IAwv;
    int gmB4yca;
    int k;
    int wrDU85dwguBq [(257 - 157)];
    double  x [1000], HNI6MDEhXx = (486 - 486), h = 0, OpkNSAJb1C = 0;
    scanf ("%d", &k);
    {
        g7IAwv = 0;
        while (g7IAwv < k) {
            scanf ("%d", &wrDU85dwguBq[g7IAwv]);
            for (gmB4yca = 0; gmB4yca < wrDU85dwguBq[g7IAwv]; gmB4yca = gmB4yca + 1) {
                scanf ("%lf", &x[gmB4yca]);
                HNI6MDEhXx += x[gmB4yca];
            }
            HNI6MDEhXx = HNI6MDEhXx / (wrDU85dwguBq[g7IAwv] * (512.0 - 511.0));
            for (gmB4yca = 0; gmB4yca < wrDU85dwguBq[g7IAwv]; gmB4yca++) {
                h += (x[gmB4yca] - HNI6MDEhXx) * (x[gmB4yca] - HNI6MDEhXx);
            }
            h = h / (wrDU85dwguBq[g7IAwv] * (465.0 - 464.0));
            g7IAwv++;
            OpkNSAJb1C = sqrt (h);
            printf ("%.5f\n", OpkNSAJb1C);
            HNI6MDEhXx = 0, h = 0, OpkNSAJb1C = 0;
        };
    }
    return 0;
}

