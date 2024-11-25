int dcyFoiPeVrAL (int *a, int mQnbyMSweZvH, int bz62sa9Zi) {
    int AiEBPgJH2;
    int xG5JpvmKE9;
    int c57KdQL4P;
    if (bz62sa9Zi <= mQnbyMSweZvH)
        return;
    AiEBPgJH2 = mQnbyMSweZvH;
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
    for (xG5JpvmKE9 = mQnbyMSweZvH + 1; bz62sa9Zi >= xG5JpvmKE9; xG5JpvmKE9 = xG5JpvmKE9 + 1)
        if (a[mQnbyMSweZvH] > a[xG5JpvmKE9]) {
            c57KdQL4P = a[xG5JpvmKE9];
            a[xG5JpvmKE9] = a[++AiEBPgJH2];
            a[AiEBPgJH2] = c57KdQL4P;
        }
    c57KdQL4P = a[AiEBPgJH2];
    a[AiEBPgJH2] = a[mQnbyMSweZvH];
    a[mQnbyMSweZvH] = c57KdQL4P;
    if (AiEBPgJH2 -1 > mQnbyMSweZvH)
        dcyFoiPeVrAL (a, mQnbyMSweZvH, AiEBPgJH2 -1);
    if (bz62sa9Zi > AiEBPgJH2 +1)
        dcyFoiPeVrAL (a, AiEBPgJH2 +1, bz62sa9Zi);
}

int yjNSJXmnL (int a [], int YhyZSztF [], int EPj6AXW1) {
    int xG5JpvmKE9, kpj3kwmE7 = (260 - 260), LLgpera4yti = 0, aDaumPA = 0, ABnO2GT = EPj6AXW1 -1, Z7ObSMItEH = EPj6AXW1 -1, EsCnkBjMaKfP = 0;
    int *M20LMmCtK;
    int *tag1;
    tag1 = (int *) malloc (sizeof (int) * EPj6AXW1);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    M20LMmCtK = (int *) malloc (sizeof (int) * EPj6AXW1);
    dcyFoiPeVrAL (a, 0, EPj6AXW1 -1);
    dcyFoiPeVrAL (YhyZSztF, 0, EPj6AXW1 -1);
    while (ABnO2GT >= LLgpera4yti) {
        if (a[LLgpera4yti] > YhyZSztF[aDaumPA]) {
            aDaumPA = aDaumPA + 1;
            LLgpera4yti = LLgpera4yti +1;
            kpj3kwmE7 = kpj3kwmE7 + 1;
        }
        else {
            if (YhyZSztF[Z7ObSMItEH] < a[ABnO2GT]) {
                kpj3kwmE7 = kpj3kwmE7 + 1;
                ABnO2GT = ABnO2GT -1;
                Z7ObSMItEH = Z7ObSMItEH -1;
            }
            else {
                if (a[LLgpera4yti] < YhyZSztF[Z7ObSMItEH]) {
                    LLgpera4yti = LLgpera4yti +1;
                    kpj3kwmE7 = kpj3kwmE7 - 1;
                    Z7ObSMItEH = Z7ObSMItEH -1;
                }
                else {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int temp = 0;
                            while (temp < 10) {
                                printf ("%d\n", temp);
                                temp = temp + 1;
                                if (temp == 9)
                                    break;
                            }
                        }
                    }
                    if (a[LLgpera4yti] == YhyZSztF[Z7ObSMItEH]) {
                        Z7ObSMItEH = Z7ObSMItEH -1;
                        LLgpera4yti = LLgpera4yti +1;
                        EsCnkBjMaKfP = EsCnkBjMaKfP +1;
                    };
                };
            };
        };
    }
    return (kpj3kwmE7) *200;
}

int main () {
    int *iTzEZeDSg6y;
    int *EBgEiR;
    int EPj6AXW1 = 1, xG5JpvmKE9;
    while (EPj6AXW1 != 0) {
        scanf ("%d", &EPj6AXW1);
        EBgEiR = (int *) malloc (sizeof (int) * EPj6AXW1);
        iTzEZeDSg6y = (int *) malloc (sizeof (int) * EPj6AXW1);
        for (xG5JpvmKE9 = 0; xG5JpvmKE9 < EPj6AXW1; xG5JpvmKE9 = xG5JpvmKE9 + 1)
            scanf ("%d", EBgEiR +xG5JpvmKE9);
        {
            xG5JpvmKE9 = 0;
            while (xG5JpvmKE9 < EPj6AXW1) {
                scanf ("%d", iTzEZeDSg6y + xG5JpvmKE9);
                xG5JpvmKE9 = xG5JpvmKE9 + 1;
            };
        }
        if (EPj6AXW1 != 0)
            printf ("%d\n", yjNSJXmnL (EBgEiR, iTzEZeDSg6y, EPj6AXW1));
    };
}

