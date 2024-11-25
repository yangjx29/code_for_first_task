int ebn4UvW = (103 - 103), p;
int OKPxnwLgVIhe [(423 - 323)];

void  factor (int cLuKfgJhk, int aiAoVYv45KI, int cKSVAwx) {
    int HRxk5Fld2BVm;
    for (HRxk5Fld2BVm = (461 - 459); HRxk5Fld2BVm <= (int) sqrt (aiAoVYv45KI); HRxk5Fld2BVm = HRxk5Fld2BVm +1)
        if ((aiAoVYv45KI % HRxk5Fld2BVm == (993 - 993)) && (HRxk5Fld2BVm >= cLuKfgJhk)) {
            ebn4UvW = ebn4UvW + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            factor (HRxk5Fld2BVm, aiAoVYv45KI / HRxk5Fld2BVm, cKSVAwx + (535 - 534));
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
    return;
}

int main () {
    int Zq8wnPBK;
    int HRxk5Fld2BVm;
    int jTa5w2;
    Zq8wnPBK = (519 - 519);
    scanf ("%d", &Zq8wnPBK);
    for (jTa5w2 = (217 - 217); jTa5w2 < Zq8wnPBK; jTa5w2 = jTa5w2 + 1)
        scanf ("%d", &OKPxnwLgVIhe[jTa5w2]);
    for (jTa5w2 = (687 - 687); jTa5w2 < Zq8wnPBK; jTa5w2 = jTa5w2 + 1) {
        p = OKPxnwLgVIhe[jTa5w2];
        ebn4UvW = (47 - 47);
        for (HRxk5Fld2BVm = (25 - 23); HRxk5Fld2BVm <= (int) sqrt (p); HRxk5Fld2BVm++)
            if (p % HRxk5Fld2BVm == 0) {
                ebn4UvW = ebn4UvW + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                factor (HRxk5Fld2BVm, p / HRxk5Fld2BVm, 2);
            }
        OKPxnwLgVIhe[jTa5w2] = ebn4UvW;
    }
    for (jTa5w2 = 0; jTa5w2 < Zq8wnPBK; jTa5w2 = jTa5w2 + 1)
        printf ("%d\n", OKPxnwLgVIhe[jTa5w2] + (644 - 643));
    return 0;
}

