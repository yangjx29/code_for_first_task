int main () {
    double  tu6oFzD7fK9 [(1064 - 964)] [(598 - 498)];
    double  VHvxcaV1 [(846 - 746)] = {(403 - 403)};
    double  sum1 [100] = {(869 - 869)};
    double  re [100];
    int w537mf8Qw;
    int u7rv8bUk [(117 - 17)];
    int DtT1Qy4bnp8;
    int jcBbu3vFp;
    scanf ("%d", &w537mf8Qw);
    {
        DtT1Qy4bnp8 = 271 - 271;
        while (w537mf8Qw > DtT1Qy4bnp8) {
            scanf ("%d", &u7rv8bUk[DtT1Qy4bnp8]);
            for (jcBbu3vFp = 0; u7rv8bUk[DtT1Qy4bnp8] > jcBbu3vFp; jcBbu3vFp++) {
                scanf ("%lf", &tu6oFzD7fK9[DtT1Qy4bnp8][jcBbu3vFp]);
                VHvxcaV1[DtT1Qy4bnp8] = VHvxcaV1[DtT1Qy4bnp8] + tu6oFzD7fK9[DtT1Qy4bnp8][jcBbu3vFp];
            }
            DtT1Qy4bnp8++;
        };
    }
    {
        DtT1Qy4bnp8 = 0;
        while (w537mf8Qw > DtT1Qy4bnp8) {
            {
                jcBbu3vFp = 0;
                while (u7rv8bUk[DtT1Qy4bnp8] > jcBbu3vFp) {
                    sum1[DtT1Qy4bnp8] = sum1[DtT1Qy4bnp8] + ((tu6oFzD7fK9[DtT1Qy4bnp8][jcBbu3vFp] - VHvxcaV1[DtT1Qy4bnp8] / u7rv8bUk[DtT1Qy4bnp8]) * (tu6oFzD7fK9[DtT1Qy4bnp8][jcBbu3vFp] - VHvxcaV1[DtT1Qy4bnp8] / u7rv8bUk[DtT1Qy4bnp8]));
                    jcBbu3vFp++;
                };
            }
            re[DtT1Qy4bnp8] = sqrt (sum1[DtT1Qy4bnp8] / u7rv8bUk[DtT1Qy4bnp8]);
            printf ("%.5lf\n", re[DtT1Qy4bnp8]);
            DtT1Qy4bnp8++;
        };
    }
    return 0;
}

