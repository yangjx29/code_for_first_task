int main () {
    double  h [(72 - 27)], girl [45], boy [45];
    int nhFIvnLAgzC = (152 - 152), y = 0, dORfa8K2lQxM, pc4efPsaA32, N6zUM127;
    double  t;
    double  HqQ1kvKMbpx;
    char sex [10];
    scanf ("%d", &N6zUM127);
    {
        dORfa8K2lQxM = 0;
        while (dORfa8K2lQxM < N6zUM127) {
            scanf ("%s %lf", sex, &(h[dORfa8K2lQxM]));
            if (sex[0] == 'f') {
                girl[nhFIvnLAgzC] = h[dORfa8K2lQxM];
                nhFIvnLAgzC++;
            }
            else {
                boy[y] = h[dORfa8K2lQxM];
                y++;
            }
            dORfa8K2lQxM++;
        };
    }
    for (dORfa8K2lQxM = nhFIvnLAgzC; dORfa8K2lQxM > 0; dORfa8K2lQxM--) {
        pc4efPsaA32 = 0;
        while (dORfa8K2lQxM - (964 - 963) > pc4efPsaA32) {
            if (girl[pc4efPsaA32 + (801 - 800)] > girl[pc4efPsaA32]) {
                t = girl[pc4efPsaA32];
                girl[pc4efPsaA32] = girl[pc4efPsaA32 + 1];
                girl[pc4efPsaA32 + 1] = t;
            }
            pc4efPsaA32++;
        };
    }
    for (dORfa8K2lQxM = y; dORfa8K2lQxM > 0; dORfa8K2lQxM--) {
        pc4efPsaA32 = 0;
        while (pc4efPsaA32 < dORfa8K2lQxM - 1) {
            if (boy[pc4efPsaA32] > boy[pc4efPsaA32 + 1]) {
                t = boy[pc4efPsaA32];
                boy[pc4efPsaA32] = boy[pc4efPsaA32 + 1];
                boy[pc4efPsaA32 + 1] = t;
            }
            pc4efPsaA32++;
        };
    }
    {
        dORfa8K2lQxM = 0;
        while (dORfa8K2lQxM < y) {
            printf ("%.2lf ", boy[dORfa8K2lQxM]);
            dORfa8K2lQxM++;
        };
    }
    {
        pc4efPsaA32 = 0;
        while (pc4efPsaA32 < nhFIvnLAgzC - 1) {
            printf ("%.2lf ", girl[pc4efPsaA32]);
            pc4efPsaA32++;
        };
    }
    printf ("%.2lf", girl[nhFIvnLAgzC - 1]);
    return 0;
}

