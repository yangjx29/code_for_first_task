int main () {
    int N4CPpxI;
    int ngq1tceofQa;
    int KvEKSi;
    double  jfmOcvk;
    double  YtmoDFIEp8H;
    double  qfbjtg6L9UH [100] [3];
    double  g37iNKv;
    double  RZGrAYsOS8N;
    double  e4FtBAG;
    scanf ("%d", &N4CPpxI);
    for (ngq1tceofQa = 0; ngq1tceofQa < N4CPpxI; ngq1tceofQa = ngq1tceofQa + 1) {
        for (KvEKSi = 0; 3 > KvEKSi; KvEKSi = KvEKSi +1)
            scanf ("%lf", &qfbjtg6L9UH[ngq1tceofQa][KvEKSi]);
    }
    for (ngq1tceofQa = 0; N4CPpxI > ngq1tceofQa; ngq1tceofQa = ngq1tceofQa + 1) {
        g37iNKv = qfbjtg6L9UH[ngq1tceofQa][0];
        RZGrAYsOS8N = qfbjtg6L9UH[ngq1tceofQa][1];
        e4FtBAG = qfbjtg6L9UH[ngq1tceofQa][2];
        if (4 * g37iNKv * e4FtBAG <= RZGrAYsOS8N *RZGrAYsOS8N) {
            jfmOcvk = (-RZGrAYsOS8N+sqrt (RZGrAYsOS8N *RZGrAYsOS8N-4 * g37iNKv * e4FtBAG)) / (2 * g37iNKv);
            YtmoDFIEp8H = (-RZGrAYsOS8N-sqrt (RZGrAYsOS8N *RZGrAYsOS8N-4 * g37iNKv * e4FtBAG)) / (2 * g37iNKv);
            if (jfmOcvk == YtmoDFIEp8H)
                printf ("x1=x2=%.5lf\n", jfmOcvk);
            else
                printf ("x1=%.5lf;x2=%.5lf\n", jfmOcvk, YtmoDFIEp8H);
        }
        else {
            jfmOcvk = (-RZGrAYsOS8N) / (2 * g37iNKv);
            if (jfmOcvk == 0)
                jfmOcvk = 0;
            YtmoDFIEp8H = sqrt (4 * g37iNKv * e4FtBAG - RZGrAYsOS8N *RZGrAYsOS8N) / (2 * g37iNKv);
            YtmoDFIEp8H = fabs (YtmoDFIEp8H);
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", jfmOcvk, YtmoDFIEp8H, jfmOcvk, YtmoDFIEp8H);
        }
    }
    return 0;
}

