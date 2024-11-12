int main () {
    double  USIl5yVO4;
    double  BVenw106;
    double  vONCDo;
    double  Q0DV6TSQF;
    double  ABPqkvFCJuU;
    double  CPglTpsb6Ku7;
    double  dowDbW;
    double  nShJbc0;
    ABPqkvFCJuU = 0.0;
    CPglTpsb6Ku7 = 0.0;
    dowDbW = 0.0;
    nShJbc0 = 0.0;
    int RsaEBDH03keh;
    int CxO7kDTci [100] = {0};
    int XVi1GPKx;
    scanf ("%d", &RsaEBDH03keh);
    {
        XVi1GPKx = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (XVi1GPKx < RsaEBDH03keh) {
            scanf ("%d", &CxO7kDTci[XVi1GPKx]);
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
            XVi1GPKx = XVi1GPKx +1;
        };
    }
    {
        XVi1GPKx = 0;
        while (XVi1GPKx < RsaEBDH03keh) {
            if (CxO7kDTci[XVi1GPKx] > 60)
                nShJbc0++;
            else if (CxO7kDTci[XVi1GPKx] > 35)
                dowDbW = dowDbW + 1;
            else if (CxO7kDTci[XVi1GPKx] > 18)
                CPglTpsb6Ku7++;
            else
                ABPqkvFCJuU++;
            XVi1GPKx = XVi1GPKx +1;
        };
    }
    USIl5yVO4 = (ABPqkvFCJuU / RsaEBDH03keh) * 100;
    BVenw106 = (CPglTpsb6Ku7 / RsaEBDH03keh) * 100;
    vONCDo = (dowDbW / RsaEBDH03keh) * 100;
    Q0DV6TSQF = (nShJbc0 / RsaEBDH03keh) * 100;
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%", USIl5yVO4, BVenw106, vONCDo, Q0DV6TSQF);
    return 0;
}

