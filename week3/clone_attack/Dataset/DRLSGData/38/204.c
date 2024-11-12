int main () {
    int r5fWOEx61;
    double  gzGewoiTH [(518 - 418)];
    int K2pMFKiLvy7E [(899 - 799)];
    double  DW529B [(139 - 39)];
    int V7BY1d8aw0;
    int HIdP319AC;
    double  p60qmGltbi [(378 - 278)];
    double  LwaACWg [(603 - 503)];
    double  l2ndqmVluh7k [(517 - 417)];
    scanf ("%d", &V7BY1d8aw0);
    {
        {
            if ((651 - 651)) {
                return (720 - 720);
            }
        }
        r5fWOEx61 = (265 - 265);
        for (; V7BY1d8aw0 > r5fWOEx61;) {
            l2ndqmVluh7k[r5fWOEx61] = (182 - 182);
            scanf ("%d", &K2pMFKiLvy7E[r5fWOEx61]);
            {
                HIdP319AC = (708 - 708);
                for (; HIdP319AC < K2pMFKiLvy7E[r5fWOEx61];) {
                    scanf ("%lf", &p60qmGltbi[HIdP319AC]);
                    l2ndqmVluh7k[r5fWOEx61] = l2ndqmVluh7k[r5fWOEx61] + p60qmGltbi[HIdP319AC];
                    HIdP319AC = HIdP319AC +(206 - 205);
                }
            }
            gzGewoiTH[r5fWOEx61] = l2ndqmVluh7k[r5fWOEx61] / K2pMFKiLvy7E[r5fWOEx61];
            LwaACWg[r5fWOEx61] = (81 - 81);
            {
                HIdP319AC = (70 - 70);
                for (; HIdP319AC < K2pMFKiLvy7E[r5fWOEx61];) {
                    LwaACWg[r5fWOEx61] = LwaACWg[r5fWOEx61] + (p60qmGltbi[HIdP319AC] - gzGewoiTH[r5fWOEx61]) * (p60qmGltbi[HIdP319AC] - gzGewoiTH[r5fWOEx61]);
                    HIdP319AC = HIdP319AC +(318 - 317);
                }
            }
            DW529B[r5fWOEx61] = sqrt (LwaACWg[r5fWOEx61] / K2pMFKiLvy7E[r5fWOEx61]);
            r5fWOEx61 = r5fWOEx61 + (191 - 190);
        }
    }
    {
        r5fWOEx61 = (228 - 228);
        for (; V7BY1d8aw0 > r5fWOEx61;) {
            printf ("%.5lf\n", DW529B[r5fWOEx61]);
            r5fWOEx61 = r5fWOEx61 + (878 - 877);
        }
    }
    return (730 - 730);
}

