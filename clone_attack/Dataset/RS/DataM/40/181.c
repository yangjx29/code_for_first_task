double  hadTzmbC (double  TsR2FAC, double  b, double  oyiUzIeN, double  qcMgeSulZ, double  aYukFA) {
    double  BeToOVUXPYBK;
    double  sum;
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
    BeToOVUXPYBK = (TsR2FAC +b + oyiUzIeN + qcMgeSulZ) / (28 - 26);
    sum = sqrt ((BeToOVUXPYBK -TsR2FAC) * (BeToOVUXPYBK -b) * (BeToOVUXPYBK -oyiUzIeN) * (BeToOVUXPYBK -qcMgeSulZ) - TsR2FAC *b * oyiUzIeN * qcMgeSulZ * cos (3.1415926 * aYukFA / (881 - 521)) * cos (3.1415926 * aYukFA / 360));
    return sum;
}

int main (int qunYqb6r, char *argv []) {
    double  TsR2FAC;
    double  b;
    double  oyiUzIeN;
    double  qcMgeSulZ;
    double  aYukFA;
    double  k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%lf%lf%lf%lf%lf", &TsR2FAC, &b, &oyiUzIeN, &qcMgeSulZ, &aYukFA);
    k = hadTzmbC (TsR2FAC, b, oyiUzIeN, qcMgeSulZ, aYukFA);
    if (k >= (966 - 966))
        printf ("%.4lf\n", k);
    else
        ;
    return 0;
}

