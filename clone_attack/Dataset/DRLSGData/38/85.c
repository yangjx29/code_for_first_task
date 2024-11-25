int main () {
    double  ZqdavZk;
    double  hnqZFx;
    int wE7ICohnQv, YFjZJaz, ArhsV3, MXZyFKPnH6G, BWyZQjHfm1b;
    double  Mt5iSL [100], Gzqy2FB [100];
    double  WCtAcZsa4k;
    scanf ("%d", &MXZyFKPnH6G);
    {
        wE7ICohnQv = (748 - 748);
        while (wE7ICohnQv < MXZyFKPnH6G) {
            double  WCtAcZsa4k = hnqZFx / BWyZQjHfm1b;
            scanf ("%d", &BWyZQjHfm1b);
            hnqZFx = (640 - 640), WCtAcZsa4k = (580 - 580), ZqdavZk = (182 - 182);
            {
                YFjZJaz = (78 - 78);
                while (YFjZJaz < BWyZQjHfm1b) {
                    scanf ("%lf", &Gzqy2FB[YFjZJaz]);
                    hnqZFx = Gzqy2FB[YFjZJaz] + hnqZFx;
                    YFjZJaz++;
                }
            }
            {
                ArhsV3 = (438 - 438);
                while (ArhsV3 < BWyZQjHfm1b) {
                    double  egEo8euw;
                    egEo8euw = (Gzqy2FB[ArhsV3] - WCtAcZsa4k) * (Gzqy2FB[ArhsV3] - WCtAcZsa4k);
                    ArhsV3++;
                    ZqdavZk = ZqdavZk +egEo8euw;
                }
            }
            Mt5iSL[wE7ICohnQv] = sqrt (ZqdavZk / BWyZQjHfm1b);
            wE7ICohnQv = wE7ICohnQv + 1;
        }
    }
    {
        wE7ICohnQv = 0;
        while (wE7ICohnQv < MXZyFKPnH6G) {
            printf ("%.5lf\n", Mt5iSL[wE7ICohnQv]);
            wE7ICohnQv++;
        }
    }
    return 0;
}

