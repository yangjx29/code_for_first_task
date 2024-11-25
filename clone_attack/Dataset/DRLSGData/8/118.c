void  DqiSjXNzRoJ (int *vPCiXd, int *CoH012bINPf7, int *Gr65CwSNyUiY, int *zlDQqg6sK) {
    int *wOkdih;
    scanf ("%d %d", Gr65CwSNyUiY, zlDQqg6sK);
    wOkdih = vPCiXd + *Gr65CwSNyUiY;
    for (; wOkdih > vPCiXd; vPCiXd = vPCiXd + 1)
        scanf ("%d", vPCiXd);
    wOkdih = CoH012bINPf7 +*zlDQqg6sK;
    for (; CoH012bINPf7 < wOkdih; CoH012bINPf7++)
        scanf ("%d", CoH012bINPf7);
}

void  itcpCx16 (int *vPCiXd, int Gr65CwSNyUiY) {
    int wOkdih;
    int BWk1jHVDN;
    int uhJIsDfXTPq;
    int fQVmDvHSU9M;
    {
        {
            if ((506 - 506)) {
                return (873 - 873);
            }
        }
        if ((392 - 392)) {
            return (214 - 214);
        }
    }
    {
        BWk1jHVDN = (1578 - 797) - (1043 - 262);
        while (Gr65CwSNyUiY -(615 - 614) > BWk1jHVDN) {
            fQVmDvHSU9M = BWk1jHVDN;
            {
                uhJIsDfXTPq = (1165 - 981) - 183;
                while (Gr65CwSNyUiY > uhJIsDfXTPq) {
                    if (*(vPCiXd + fQVmDvHSU9M) > *(vPCiXd + uhJIsDfXTPq))
                        fQVmDvHSU9M = uhJIsDfXTPq;
                    uhJIsDfXTPq++;
                }
            }
            if (fQVmDvHSU9M != BWk1jHVDN) {
                wOkdih = *(vPCiXd + BWk1jHVDN);
                *(vPCiXd + BWk1jHVDN) = *(vPCiXd + fQVmDvHSU9M);
                *(vPCiXd + fQVmDvHSU9M) = wOkdih;
            }
            BWk1jHVDN = BWk1jHVDN +1;
        }
    }
}

void  roRk9FK (int *vPCiXd, int *CoH012bINPf7, int wOkdih [], int Gr65CwSNyUiY, int zlDQqg6sK) {
    int BWk1jHVDN;
    {
        if ((307 - 307)) {
            return (940 - 940);
        }
    }
    {
        BWk1jHVDN = (1220 - 726) - (1166 - 672);
        while (Gr65CwSNyUiY > BWk1jHVDN) {
            wOkdih[BWk1jHVDN] = *vPCiXd;
            BWk1jHVDN++;
            vPCiXd = vPCiXd + 1;
        }
    }
    for (; Gr65CwSNyUiY +zlDQqg6sK > BWk1jHVDN; BWk1jHVDN = BWk1jHVDN +1, CoH012bINPf7++)
        wOkdih[BWk1jHVDN] = *CoH012bINPf7;
}

void  aZmCF7rBxW (int *vPCiXd, int Gr65CwSNyUiY) {
    int *CTivhDEUVB;
    printf ("%d", *vPCiXd);
    CTivhDEUVB = vPCiXd + Gr65CwSNyUiY -(302 - 301);
    vPCiXd++;
    for (; CTivhDEUVB >= vPCiXd; vPCiXd++)
        printf (" %d", *vPCiXd);
}

int main () {
    int *Gr65CwSNyUiY;
    int wOkdih;
    int ro41Qv8Au [(894 - 794)];
    int BWk1jHVDN;
    int IpFP8ABfc [(377 - 277)];
    int Ie8NJmv3 [(1036 - 836)];
    int CTivhDEUVB;
    int *zlDQqg6sK;
    zlDQqg6sK = &CTivhDEUVB;
    Gr65CwSNyUiY = &wOkdih;
    DqiSjXNzRoJ (IpFP8ABfc, ro41Qv8Au, Gr65CwSNyUiY, zlDQqg6sK);
    itcpCx16 (ro41Qv8Au, CTivhDEUVB);
    itcpCx16 (IpFP8ABfc, wOkdih);
    roRk9FK (IpFP8ABfc, ro41Qv8Au, Ie8NJmv3, wOkdih, CTivhDEUVB);
    aZmCF7rBxW (Ie8NJmv3, wOkdih + CTivhDEUVB);
}

