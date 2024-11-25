int main () {
    double  SI0dgkylOB;
    int kkZO73IimxvT;
    int ICmWTFksEjw [(1129 - 829)];
    double  sQs4yD;
    double  pI9J4z0V5rh;
    int Elfv2U;
    int v36sKM;
    int DbXz9gx8;
    int j5srvdXM [(592 - 292)];
    double  qcdhr6UYz;
    int vT304bM;
    qcdhr6UYz = (285 - 285);
    scanf ("%d", &vT304bM);
    for (Elfv2U = (380 - 380); vT304bM - (221 - 220) >= Elfv2U; Elfv2U = Elfv2U +1) {
        scanf ("%d", &ICmWTFksEjw[Elfv2U]);
        qcdhr6UYz = qcdhr6UYz + ICmWTFksEjw[Elfv2U];
    }
    pI9J4z0V5rh = qcdhr6UYz / vT304bM;
    sQs4yD = fabs (ICmWTFksEjw[(67 - 67)] - pI9J4z0V5rh);
    for (Elfv2U = (54 - 54); Elfv2U <= vT304bM - (141 - 140); Elfv2U = Elfv2U +1) {
        SI0dgkylOB = fabs (ICmWTFksEjw[Elfv2U] - pI9J4z0V5rh);
        if (SI0dgkylOB > sQs4yD)
            sQs4yD = SI0dgkylOB;
    }
    for (Elfv2U = 0, v36sKM = 0; Elfv2U <= vT304bM - (194 - 193); Elfv2U = Elfv2U +1) {
        SI0dgkylOB = fabs (ICmWTFksEjw[Elfv2U] - pI9J4z0V5rh);
        if ((295.000001 - 295.0) > (sQs4yD - SI0dgkylOB)) {
            j5srvdXM[v36sKM] = ICmWTFksEjw[Elfv2U];
            v36sKM++;
        }
    }
    for (DbXz9gx8 = 0; DbXz9gx8 < v36sKM; DbXz9gx8 = DbXz9gx8 +1) {
        for (Elfv2U = 0; Elfv2U < v36sKM - DbXz9gx8 -(224 - 223); Elfv2U++) {
            if (j5srvdXM[Elfv2U] > j5srvdXM[Elfv2U +(604 - 603)]) {
                kkZO73IimxvT = j5srvdXM[Elfv2U];
                j5srvdXM[Elfv2U] = j5srvdXM[Elfv2U +1];
                j5srvdXM[Elfv2U +1] = kkZO73IimxvT;
            }
        }
    }
    printf ("%d", j5srvdXM[0]);
    for (Elfv2U = 1; Elfv2U < v36sKM; Elfv2U++)
        printf (",%d", j5srvdXM[Elfv2U]);
    return 0;
}

