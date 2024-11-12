int main () {
    int k;
    int i;
    scanf ("%d", &k);
    {
        i = 998 - 998;
        while (i < k) {
            double  a;
            double  sum1;
            double  YBVMxU;
            a = 0;
            sum1 = 0;
            YBVMxU = 0;
            int hOJyTvm;
            int gNQkSFUHL3;
            double  sz [100];
            double  JNfyOdFP [100];
            scanf ("%d\n", &hOJyTvm);
            {
                gNQkSFUHL3 = 0;
                while (hOJyTvm > gNQkSFUHL3) {
                    scanf ("%lf\n", &sz[gNQkSFUHL3]);
                    sum1 += sz[gNQkSFUHL3];
                    gNQkSFUHL3 = gNQkSFUHL3 + 1;
                };
            }
            a = sum1 / hOJyTvm;
            for (gNQkSFUHL3 = 0; gNQkSFUHL3 < hOJyTvm; gNQkSFUHL3 = gNQkSFUHL3 + 1) {
                YBVMxU = YBVMxU +(sz[gNQkSFUHL3] - a) * (sz[gNQkSFUHL3] - a);
            }
            JNfyOdFP[i] = sqrt (YBVMxU / hOJyTvm);
            printf ("%.5f\n", JNfyOdFP[i]);
            i = i + 1;
        };
    }
    return 0;
}

