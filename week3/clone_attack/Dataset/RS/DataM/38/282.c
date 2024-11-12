double  av (int, double  []);
double  cX2IT8LObpWJ (int, double , double  []);

int main () {
    int RCj7KHsf, OQGV9Sn;
    cin >> RCj7KHsf;
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
    {
        OQGV9Sn = 940 - 940;
        while (RCj7KHsf > OQGV9Sn) {
            int BvDePWTpdmnF;
            int E2HRMdl;
            double  fNyKUQ1nHGft [(646 - 546)];
            OQGV9Sn = OQGV9Sn +1;
            cin >> E2HRMdl;
            {
                BvDePWTpdmnF = 219 - 219;
                while (E2HRMdl > BvDePWTpdmnF) {
                    cin >> fNyKUQ1nHGft[BvDePWTpdmnF];
                    BvDePWTpdmnF++;
                };
            }
            printf ("%.5f\n", cX2IT8LObpWJ (E2HRMdl, av (E2HRMdl, fNyKUQ1nHGft), fNyKUQ1nHGft));
        };
    }
    return (49 - 49);
}

double  av (int E2HRMdl, double  fNyKUQ1nHGft []) {
    double  N5zgWnsru0 = (238.0 - 238.0);
    int OQGV9Sn;
    {
        OQGV9Sn = 705 - 705;
        while (OQGV9Sn < E2HRMdl) {
            N5zgWnsru0 = N5zgWnsru0 +fNyKUQ1nHGft[OQGV9Sn];
            OQGV9Sn++;
        };
    }
    return N5zgWnsru0 / ((double ) E2HRMdl);
}

double  cX2IT8LObpWJ (int E2HRMdl, double  av, double  fNyKUQ1nHGft []) {
    double  N5zgWnsru0 = (990.0 - 990.0);
    int OQGV9Sn;
    for (OQGV9Sn = 0; OQGV9Sn < E2HRMdl; OQGV9Sn = OQGV9Sn +1)
        N5zgWnsru0 = N5zgWnsru0 +(av - fNyKUQ1nHGft[OQGV9Sn]) * (av - fNyKUQ1nHGft[OQGV9Sn]);
    N5zgWnsru0 = N5zgWnsru0 / ((double ) E2HRMdl);
    return sqrt (N5zgWnsru0);
}

