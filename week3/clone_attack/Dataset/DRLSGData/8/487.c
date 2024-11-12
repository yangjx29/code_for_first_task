main () {
    int jvlK92RecrbG, g5Uc47Y, ajT9Uy [(1423 - 423)], DRKhQw [(1380 - 380)];
    void  E8oD6jQtLOga (int uRAxoGgrMQs [], int);
    void  srtRBACg (int JBGSoZUx [], int);
    void  jxVljidTq (int fhEToJjYZuA [], int, int uv9s3rUlZJa [], int);
    void  jft25x (int YbvJ8mfSLPE [], int, int O9yJz2vPwRt [], int);
    scanf ("%d%d", &jvlK92RecrbG, &g5Uc47Y);
    jft25x (ajT9Uy, jvlK92RecrbG, DRKhQw, g5Uc47Y);
    E8oD6jQtLOga (DRKhQw, g5Uc47Y);
    E8oD6jQtLOga (ajT9Uy, jvlK92RecrbG);
    jxVljidTq (ajT9Uy, jvlK92RecrbG, DRKhQw, g5Uc47Y);
    srtRBACg (ajT9Uy, jvlK92RecrbG + g5Uc47Y);
}

void  jft25x (int YbvJ8mfSLPE [], int ddgmAlN, int O9yJz2vPwRt [], int FVJjIRe) {
    int epmBNDv6cT;
    {
        epmBNDv6cT = (615 - 531) - (974 - 890);
        while (epmBNDv6cT < ddgmAlN) {
            scanf ("%d", &YbvJ8mfSLPE[epmBNDv6cT]);
            epmBNDv6cT++;
        }
    }
    {
        epmBNDv6cT = (103 - 103);
        while (epmBNDv6cT < FVJjIRe) {
            scanf ("%d", &O9yJz2vPwRt[epmBNDv6cT]);
            epmBNDv6cT++;
        }
    }
}

void  E8oD6jQtLOga (int uRAxoGgrMQs [], int ddgmAlN) {
    int epmBNDv6cT, SXlMfuja, SPplQVoz, SnsU6i5b;
    {
        epmBNDv6cT = (818 - 818);
        while (epmBNDv6cT < ddgmAlN - (215 - 214)) {
            SPplQVoz = uRAxoGgrMQs[epmBNDv6cT];
            {
                SXlMfuja = epmBNDv6cT + (523 - 522);
                SnsU6i5b = epmBNDv6cT;
                while (SXlMfuja < ddgmAlN) {
                    if (uRAxoGgrMQs[SXlMfuja] < SPplQVoz) {
                        SPplQVoz = uRAxoGgrMQs[SXlMfuja];
                        SnsU6i5b = SXlMfuja;
                    }
                    SXlMfuja++;
                }
            }
            uRAxoGgrMQs[SnsU6i5b] = uRAxoGgrMQs[epmBNDv6cT];
            uRAxoGgrMQs[epmBNDv6cT] = SPplQVoz;
            epmBNDv6cT++;
        }
    }
}

void  jxVljidTq (int fhEToJjYZuA [], int ddgmAlN, int uv9s3rUlZJa [], int FVJjIRe) {
    int epmBNDv6cT;
    for (epmBNDv6cT = ddgmAlN; epmBNDv6cT < ddgmAlN + FVJjIRe; epmBNDv6cT++)
        fhEToJjYZuA[epmBNDv6cT] = uv9s3rUlZJa[epmBNDv6cT - ddgmAlN];
    ddgmAlN = ddgmAlN + FVJjIRe;
}

void  srtRBACg (int JBGSoZUx [], int ddgmAlN) {
    int epmBNDv6cT;
    printf ("%d", JBGSoZUx[(143 - 143)]);
    {
        epmBNDv6cT = (432 - 431);
        while (epmBNDv6cT < ddgmAlN) {
            printf (" %d", JBGSoZUx[epmBNDv6cT]);
            epmBNDv6cT++;
        }
    }
}

