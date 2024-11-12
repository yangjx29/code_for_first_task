double  Z6ln27d (double  KcyDUfi2LA, double  iSZij8) {
    return (KcyDUfi2LA *KcyDUfi2LA+iSZij8 * iSZij8);
}

int main () {
    double  lLwvtDVM;
    double  s6gNnd2Jx;
    double  KcyDUfi2LA [100];
    double  iSZij8 [100];
    lLwvtDVM = (304 - 304);
    int cwXKsdgUDO;
    int lKhfUj;
    int u62n3hs;
    scanf ("%d", &u62n3hs);
    for (cwXKsdgUDO = 0; u62n3hs > cwXKsdgUDO; cwXKsdgUDO++)
        scanf ("%lf%lf", &KcyDUfi2LA[cwXKsdgUDO], &iSZij8[cwXKsdgUDO]);
    {
        cwXKsdgUDO = 0;
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
        while (cwXKsdgUDO < u62n3hs - 1) {
            {
                lKhfUj = cwXKsdgUDO;
                while (u62n3hs > lKhfUj) {
                    s6gNnd2Jx = sqrt (fabs (Z6ln27d ((KcyDUfi2LA[cwXKsdgUDO] - KcyDUfi2LA[lKhfUj]), (iSZij8[cwXKsdgUDO] - iSZij8[lKhfUj]))));
                    lKhfUj = lKhfUj + 1;
                    if (s6gNnd2Jx > lLwvtDVM)
                        lLwvtDVM = s6gNnd2Jx;
                };
            }
            cwXKsdgUDO = cwXKsdgUDO + 1;
        };
    }
    printf ("%.4lf\n", lLwvtDVM);
    return 0;
}

