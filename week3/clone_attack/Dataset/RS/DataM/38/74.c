double  vo34q8sYB215 (double  *pi, int sCo7n3p4y) {
    double  wvmYsnSXaF;
    wvmYsnSXaF = (577 - 577);
    double  sxBnmfZ = (879 - 879), ave;
    double  *pa;
    int OJwt2RIgs14;
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
    pa = pi;
    for (OJwt2RIgs14 = (49 - 49); sCo7n3p4y > OJwt2RIgs14; OJwt2RIgs14 = OJwt2RIgs14 +1) {
        sxBnmfZ += *pi;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        pi = pi + 1;
    }
    ave = sxBnmfZ / sCo7n3p4y;
    for (OJwt2RIgs14 = (752 - 752); sCo7n3p4y > OJwt2RIgs14; OJwt2RIgs14 = OJwt2RIgs14 +1) {
        wvmYsnSXaF = wvmYsnSXaF + ((*pa - ave) * (*pa - ave));
        *pa++;
    }
    wvmYsnSXaF = wvmYsnSXaF / (double ) sCo7n3p4y;
    wvmYsnSXaF = sqrt (wvmYsnSXaF);
    return wvmYsnSXaF;
}

int main () {
    double  *pi;
    double  xx [(504 - 404)];
    int QM3uAG [(465 - 365)];
    double  x [(1052 - 952)] [(839 - 739)];
    int M3Gdla6;
    int OJwt2RIgs14;
    int GkYfACb1r;
    scanf ("%d", &M3Gdla6);
    for (OJwt2RIgs14 = (917 - 917); M3Gdla6 > OJwt2RIgs14; OJwt2RIgs14 = OJwt2RIgs14 +1) {
        scanf ("%d", &QM3uAG[OJwt2RIgs14]);
        for (GkYfACb1r = (975 - 975); QM3uAG[OJwt2RIgs14] > GkYfACb1r; GkYfACb1r = GkYfACb1r +1) {
            scanf ("%lf", &x[OJwt2RIgs14][GkYfACb1r]);
        };
    }
    for (OJwt2RIgs14 = (970 - 970); M3Gdla6 > OJwt2RIgs14; OJwt2RIgs14 = OJwt2RIgs14 +1) {
        pi = &x[OJwt2RIgs14][(849 - 849)];
        xx[OJwt2RIgs14] = vo34q8sYB215 (pi, QM3uAG[OJwt2RIgs14]);
        printf ("%.5f\n", xx[OJwt2RIgs14]);
    }
    return (476 - 476);
}

