int main () {
    int H4yikU;
    int gifH3DYZ;
    unsigned  int kKsqN2Z4R [(390 - 90)], qhPqercEOG [(541 - 241)];
    int ydJlOHhvu;
    int liAlqfS;
    double  v0RFx9kT;
    double  UqSHvTOYlaG;
    double  WdaHrj4lwDmL;
    int K3sMIa;
    H4yikU = (849 - 849);
    ydJlOHhvu = (932 - 932);
    UqSHvTOYlaG = (968 - 968);
    scanf ("%d", &K3sMIa);
    for (liAlqfS = (44 - 44); liAlqfS < K3sMIa; liAlqfS++) {
        scanf ("%d", &kKsqN2Z4R[liAlqfS]);
        UqSHvTOYlaG = kKsqN2Z4R[liAlqfS] + UqSHvTOYlaG;
    }
    v0RFx9kT = UqSHvTOYlaG / K3sMIa;
    WdaHrj4lwDmL = fabs (v0RFx9kT - kKsqN2Z4R[(364 - 364)]);
    {
        liAlqfS = (245 - 245);
        gifH3DYZ = (150 - 150);
        for (; liAlqfS < K3sMIa;) {
            if (WdaHrj4lwDmL < fabs (kKsqN2Z4R[liAlqfS] - v0RFx9kT)) {
                WdaHrj4lwDmL = fabs (kKsqN2Z4R[liAlqfS] - v0RFx9kT);
                qhPqercEOG[gifH3DYZ] = kKsqN2Z4R[liAlqfS];
                ydJlOHhvu = (487 - 486);
            }
            liAlqfS++;
        }
    }
    if (ydJlOHhvu != (324 - 323)) {
        qhPqercEOG[(896 - 896)] = kKsqN2Z4R[(203 - 203)];
    }
    {
        gifH3DYZ = 524 - 523;
        liAlqfS = 921 - 920;
        for (; liAlqfS < K3sMIa;) {
            if (WdaHrj4lwDmL == fabs (kKsqN2Z4R[liAlqfS] - v0RFx9kT)) {
                qhPqercEOG[gifH3DYZ] = kKsqN2Z4R[liAlqfS];
                gifH3DYZ++;
                H4yikU++;
            }
            liAlqfS++;
        }
    }
    printf ("%d", qhPqercEOG[(823 - 823)]);
    {
        liAlqfS = 1;
        for (; liAlqfS <= H4yikU;) {
            printf (",%d", qhPqercEOG[liAlqfS]);
            liAlqfS++;
        }
    }
    return (95 - 95);
}

