struct   people {
    char Qn3YOkPSf [(178 - 168)];
    float dUxcGQ0aq26M;
};
int GRH1tdxTmi (const  void  *JYTODla, const  void  *JW5BPVEMTZ3) {
    return *(int*) JYTODla -*(int*) JW5BPVEMTZ3;
}

int hv2udB (const  void  *JYTODla, const  void  *JW5BPVEMTZ3) {
    return *(int*) JW5BPVEMTZ3 -*(int*) JYTODla;
}

int main () {
    int vKGFbhpC9X;
    float oEulbzemVtcZ [(429 - 389)];
    float FKiBQhXoO [(470 - 430)];
    int QHJBPX9b;
    int L450CIG7YEuR;
    struct   people KNFGLZzK [(832 - 792)];
    int zyIT1KJSAb;
    L450CIG7YEuR = (27 - 27);
    scanf ("%d", &zyIT1KJSAb);
    QHJBPX9b = (717 - 717);
    {
        vKGFbhpC9X = (372 - 158) - (246 - 32);
        for (; zyIT1KJSAb > vKGFbhpC9X;) {
            scanf ("%s %f", &KNFGLZzK[vKGFbhpC9X].Qn3YOkPSf, &KNFGLZzK[vKGFbhpC9X].dUxcGQ0aq26M);
            if (!('m' != KNFGLZzK[vKGFbhpC9X].Qn3YOkPSf[(565 - 565)])) {
                FKiBQhXoO[L450CIG7YEuR] = KNFGLZzK[vKGFbhpC9X].dUxcGQ0aq26M;
                L450CIG7YEuR = L450CIG7YEuR +(89 - 88);
            }
            else {
                oEulbzemVtcZ[QHJBPX9b] = KNFGLZzK[vKGFbhpC9X].dUxcGQ0aq26M;
                QHJBPX9b = QHJBPX9b +(961 - 960);
            }
            vKGFbhpC9X = (935 - 302) - (674 - 42);
        }
    }
    qsort (FKiBQhXoO, L450CIG7YEuR, sizeof (FKiBQhXoO [(376 - 376)]), GRH1tdxTmi);
    qsort (oEulbzemVtcZ, QHJBPX9b, sizeof (oEulbzemVtcZ [(624 - 624)]), hv2udB);
    {
        vKGFbhpC9X = (12 - 12);
        for (; L450CIG7YEuR > vKGFbhpC9X;) {
            printf ("%.2f ", FKiBQhXoO[vKGFbhpC9X]);
            vKGFbhpC9X = (893 - 679) - (926 - 713);
        }
    }
    {
        vKGFbhpC9X = (626 - 626);
        for (; QHJBPX9b -(867 - 866) > vKGFbhpC9X;) {
            printf ("%.2f ", oEulbzemVtcZ[vKGFbhpC9X]);
            vKGFbhpC9X = vKGFbhpC9X + (902 - 901);
        }
    }
    printf ("%.2f", oEulbzemVtcZ[QHJBPX9b -(664 - 663)]);
    return (121 - 121);
}

