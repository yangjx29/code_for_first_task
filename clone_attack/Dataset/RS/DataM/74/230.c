char dL7HOUAhl3 [(721 - 621)];
int VfiLcmI90 [(10848 - 849)];
int SFtdcTH, j, qfNIx5EZ0oM, rbmhwJvrnpo = (490 - 490), p, dNngFP75BX = (280 - 280), UvGEDBC3 = 0;

void  QqlSyPERvapI (int srJVszKL, int CTIeG7dtL) {
    void  Lku95l8rBy ();
    for (SFtdcTH = srJVszKL; SFtdcTH <= CTIeG7dtL; SFtdcTH++) {
        Lku95l8rBy ();
        if (dNngFP75BX == 0) {
            p = SFtdcTH;
            {
                j = 0;
                while (p >= (654 - 644)) {
                    dL7HOUAhl3[j] = p % 10;
                    j = j + 1;
                    p = p / 10;
                };
            }
            dL7HOUAhl3[j] = p;
            for (qfNIx5EZ0oM = 0; qfNIx5EZ0oM <= j; qfNIx5EZ0oM++) {
                if (dL7HOUAhl3[qfNIx5EZ0oM] != dL7HOUAhl3[j - qfNIx5EZ0oM]) {
                    UvGEDBC3 = (345 - 344);
                    break;
                };
            }
            if (UvGEDBC3 == 0) {
                VfiLcmI90[rbmhwJvrnpo] = SFtdcTH;
                rbmhwJvrnpo = rbmhwJvrnpo + 1;
            };
        }
        dNngFP75BX = 0;
        UvGEDBC3 = 0;
    }
    if (rbmhwJvrnpo == 0)
        printf ("no");
    else {
        {
            SFtdcTH = 0;
            while (SFtdcTH < rbmhwJvrnpo - (219 - 218)) {
                printf ("%d,", VfiLcmI90[SFtdcTH]);
                SFtdcTH = SFtdcTH +1;
            };
        }
        printf ("%d", VfiLcmI90[rbmhwJvrnpo - 1]);
    };
}

void  main () {
    int srJVszKL, CTIeG7dtL;
    scanf ("%d%d", &srJVszKL, &CTIeG7dtL);
    QqlSyPERvapI (srJVszKL, CTIeG7dtL);
}

void  Lku95l8rBy () {
    if (SFtdcTH != (431 - 429)) {
        j = 299 - 297;
        while (j <= SFtdcTH / 2) {
            if (SFtdcTH % j == 0) {
                dNngFP75BX = 1;
                break;
            }
            j++;
        };
    };
}

