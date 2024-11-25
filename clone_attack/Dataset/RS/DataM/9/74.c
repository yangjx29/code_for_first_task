struct   pa {
    char wKDrnaLd [(32 - 22)];
    int ztgNbHLQDSJv;
    struct   pa *pafXs56U;
};
void  X72wlak (struct   pa *qJFYLvXh5fB, struct   pa *kXUC6A) {
    struct   pa *JCd4AUlw;
    struct   pa *zr92AMaLdQie;
    JCd4AUlw = qJFYLvXh5fB->pafXs56U;
    zr92AMaLdQie = qJFYLvXh5fB;
    while (JCd4AUlw &&JCd4AUlw->ztgNbHLQDSJv >= kXUC6A->ztgNbHLQDSJv) {
        zr92AMaLdQie = JCd4AUlw;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        JCd4AUlw = JCd4AUlw->pafXs56U;
    }
    zr92AMaLdQie->pafXs56U = kXUC6A;
    kXUC6A->pafXs56U = JCd4AUlw;
}

void  CeTimhrn0WV (struct   pa *qJFYLvXh5fB, struct   pa *kXUC6A) {
    struct   pa *zr92AMaLdQie, *JCd4AUlw;
    JCd4AUlw = qJFYLvXh5fB->pafXs56U;
    zr92AMaLdQie = qJFYLvXh5fB;
    for (; JCd4AUlw;) {
        zr92AMaLdQie = JCd4AUlw;
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
        JCd4AUlw = JCd4AUlw->pafXs56U;
    }
    zr92AMaLdQie->pafXs56U = kXUC6A;
    kXUC6A->pafXs56U = JCd4AUlw;
}

struct   pa *xwn0BIWVEDq () {
    struct   pa *kXUC6A, *pxyInM, *aVFTeYm, *JCd4AUlw, *zr92AMaLdQie;
    int YqEf4V, QbgaZs9dcUJ4;
    pxyInM = (struct   pa *) malloc (len);
    aVFTeYm = (struct   pa *) malloc (len);
    pxyInM->pafXs56U = NULL;
    aVFTeYm->pafXs56U = NULL;
    scanf ("%d", &QbgaZs9dcUJ4);
    {
        YqEf4V = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (YqEf4V < QbgaZs9dcUJ4) {
            YqEf4V = YqEf4V +1;
            kXUC6A = (struct   pa *) malloc (len);
            scanf ("%s%d", kXUC6A->wKDrnaLd, &kXUC6A->ztgNbHLQDSJv);
            if (kXUC6A->ztgNbHLQDSJv >= 60)
                X72wlak (pxyInM, kXUC6A);
            else
                CeTimhrn0WV (aVFTeYm, kXUC6A);
        };
    }
    JCd4AUlw = pxyInM->pafXs56U;
    zr92AMaLdQie = pxyInM;
    while (JCd4AUlw) {
        zr92AMaLdQie = JCd4AUlw;
        JCd4AUlw = JCd4AUlw->pafXs56U;
    }
    zr92AMaLdQie->pafXs56U = aVFTeYm->pafXs56U;
    return (pxyInM);
}

void  ZuxivJ5peN8F (struct   pa *qJFYLvXh5fB) {
    struct   pa *CUrqu9v;
    CUrqu9v = qJFYLvXh5fB->pafXs56U;
    while (CUrqu9v) {
        printf ("%s\n", CUrqu9v->wKDrnaLd);
        CUrqu9v = CUrqu9v->pafXs56U;
    };
}

void  main () {
    struct   pa *qJFYLvXh5fB;
    ZuxivJ5peN8F (qJFYLvXh5fB);
    qJFYLvXh5fB = xwn0BIWVEDq ();
}

