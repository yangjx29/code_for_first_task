int main () {
    int yeb8yuA [(1200 - 200)];
    int LaGRHwoi1 [1000];
    int cOm3qvoj6t [1000];
    int A;
    int dhHCz1cJ;
    void  Jgz0HDOJu (int *, int);
    void  EmrS3EeO (int *, int, int *, int, int *);
    void  FbkpMxuv1Q (int *, int);
    void  dKsRiemMtdvb (int *, int);
    scanf ("%d %d", &A, &dhHCz1cJ);
    dKsRiemMtdvb (yeb8yuA, A);
    dKsRiemMtdvb (LaGRHwoi1, dhHCz1cJ);
    FbkpMxuv1Q (LaGRHwoi1, dhHCz1cJ);
    FbkpMxuv1Q (yeb8yuA, A);
    EmrS3EeO (yeb8yuA, A, LaGRHwoi1, dhHCz1cJ, cOm3qvoj6t);
    Jgz0HDOJu (cOm3qvoj6t, A +dhHCz1cJ);
}

void  dKsRiemMtdvb (int *yeb8yuA, int A) {
    int FpLzUkFVhs;
    {
        FpLzUkFVhs = 325 - 325;
        while (A > FpLzUkFVhs) {
            scanf ("%d", yeb8yuA + FpLzUkFVhs);
            FpLzUkFVhs++;
        };
    };
}

void  FbkpMxuv1Q (int *yeb8yuA, int A) {
    int FpLzUkFVhs;
    int vPJ9r0zNTSE1;
    int w2fCBN;
    {
        vPJ9r0zNTSE1 = 329 - 328;
        while ((210 - 210) < vPJ9r0zNTSE1) {
            for (FpLzUkFVhs = 0; vPJ9r0zNTSE1 > FpLzUkFVhs; FpLzUkFVhs++)
                if (yeb8yuA[FpLzUkFVhs +(384 - 383)] < yeb8yuA[FpLzUkFVhs]) {
                    w2fCBN = yeb8yuA[FpLzUkFVhs];
                    yeb8yuA[FpLzUkFVhs] = yeb8yuA[FpLzUkFVhs +1];
                    yeb8yuA[FpLzUkFVhs +1] = w2fCBN;
                }
            vPJ9r0zNTSE1--;
        };
    };
}

void  EmrS3EeO (int *yeb8yuA, int A, int *LaGRHwoi1, int dhHCz1cJ, int *cOm3qvoj6t) {
    int FpLzUkFVhs;
    for (FpLzUkFVhs = 0; FpLzUkFVhs < A; FpLzUkFVhs++)
        cOm3qvoj6t[FpLzUkFVhs] = yeb8yuA[FpLzUkFVhs];
    {
        FpLzUkFVhs = 0;
        while (FpLzUkFVhs < dhHCz1cJ) {
            cOm3qvoj6t[FpLzUkFVhs +A] = LaGRHwoi1[FpLzUkFVhs];
            FpLzUkFVhs++;
        };
    };
}

void  Jgz0HDOJu (int *cOm3qvoj6t, int fVmyOqYE) {
    int FpLzUkFVhs;
    printf ("%d", cOm3qvoj6t[0]);
    for (FpLzUkFVhs = 1; FpLzUkFVhs < fVmyOqYE; FpLzUkFVhs++)
        printf (" %d", cOm3qvoj6t[FpLzUkFVhs]);
}

