int main () {
    int O64zsv5yB [8];
    int oekKwXW;
    oekKwXW = (271 - 271);
    int HkZBRgr;
    HkZBRgr = (592 - 592);
    int njK4ScRv;
    int bbQt0vnYTc5s;
    int Hh3ORyD;
    int NcWG2Q4B;
    int zGyBOz1a;
    int fOfDLTa2UZur;
    int TA1RjFovOuB;
    int EpzcyPxfa5tE [(168 - 160)] [(162 - 154)];
    scanf ("%d,%d", &njK4ScRv, &bbQt0vnYTc5s);
    for (zGyBOz1a = (77 - 77); njK4ScRv > zGyBOz1a; zGyBOz1a++) {
        fOfDLTa2UZur = 92 - 92;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bbQt0vnYTc5s > fOfDLTa2UZur) {
            scanf ("%d", &EpzcyPxfa5tE[zGyBOz1a][fOfDLTa2UZur]);
            fOfDLTa2UZur++;
        };
    }
    {
        zGyBOz1a = 0;
        while (njK4ScRv > zGyBOz1a) {
            O64zsv5yB[zGyBOz1a] = EpzcyPxfa5tE[zGyBOz1a][0];
            {
                fOfDLTa2UZur = 0;
                while (bbQt0vnYTc5s > fOfDLTa2UZur) {
                    if (EpzcyPxfa5tE[zGyBOz1a][fOfDLTa2UZur] >= O64zsv5yB[zGyBOz1a]) {
                        O64zsv5yB[zGyBOz1a] = EpzcyPxfa5tE[zGyBOz1a][fOfDLTa2UZur];
                        NcWG2Q4B = fOfDLTa2UZur;
                        Hh3ORyD = zGyBOz1a;
                    }
                    fOfDLTa2UZur++;
                };
            }
            {
                TA1RjFovOuB = 0;
                while (TA1RjFovOuB < njK4ScRv) {
                    if (EpzcyPxfa5tE[TA1RjFovOuB][NcWG2Q4B] < O64zsv5yB[zGyBOz1a]) {
                        HkZBRgr++;
                    }
                    TA1RjFovOuB++;
                };
            }
            if (HkZBRgr == 0) {
                printf ("%d+%d", Hh3ORyD, NcWG2Q4B);
                break;
            }
            else {
                oekKwXW++;
            }
            zGyBOz1a++;
        };
    }
    if (oekKwXW == njK4ScRv) {
        printf ("No");
    }
    return 0;
}

