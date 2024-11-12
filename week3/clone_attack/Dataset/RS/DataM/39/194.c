int mZQfv0nasW (int p, int q) {
    int z;
    z = (916 - 916);
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
    if ((736 - 656) < p && q >= (690 - 689))
        z = 1;
    return z;
}

int kWMCETOU (int p, int q) {
    int z;
    z = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (85 < p && 80 < q)
        z = 1;
    return z;
}

int CZbUEoBNC (int p) {
    int z = 0;
    if (p > (990 - 900))
        z = 1;
    return z;
}

int xibu (int p, char FScbsL9) {
    int z = 0;
    if (p > 85 && FScbsL9 == 'Y')
        z = 1;
    return z;
}

int P7Ov9apr (int p, char FScbsL9) {
    int z;
    z = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (p > 80 && FScbsL9 == 'Y')
        z = 1;
    return z;
}

void  main () {
    struct   student {
        char MyBDEt60 [20];
        int nz893Vj;
        int gcjLCDtPSf;
        char leader;
        char xibu;
        int XonGthwH0;
        int hKSsvew;
    }
    *XO5iD32;
    int i, crQInWE4Hs, pFT52B1, b, kmIZ3T4Gwi6, d, e, hKSsvew = 0;
    scanf ("%d", &crQInWE4Hs);
    XO5iD32 = (struct   student *) malloc (crQInWE4Hs * sizeof (struct   student));
    for (i = 0; i < crQInWE4Hs; i++) {
        scanf ("%s %d %d %c %c %d", &XO5iD32[i].MyBDEt60, &(*(XO5iD32 +i)).nz893Vj, &(*(XO5iD32 +i)).gcjLCDtPSf, &(*(XO5iD32 +i)).leader, &(*(XO5iD32 +i)).xibu, &(*(XO5iD32 +i)).XonGthwH0);
        (*(XO5iD32 +i)).hKSsvew = 0;
        pFT52B1 = mZQfv0nasW ((*(XO5iD32 +i)).nz893Vj, (*(XO5iD32 +i)).XonGthwH0);
        b = kWMCETOU ((*(XO5iD32 +i)).nz893Vj, (*(XO5iD32 +i)).gcjLCDtPSf);
        kmIZ3T4Gwi6 = CZbUEoBNC ((*(XO5iD32 +i)).nz893Vj);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        d = xibu ((*(XO5iD32 +i)).nz893Vj, (*(XO5iD32 +i)).xibu);
        e = P7Ov9apr ((*(XO5iD32 +i)).gcjLCDtPSf, (*(XO5iD32 +i)).leader);
        (*(XO5iD32 +i)).hKSsvew = 8000 * pFT52B1 + 4000 * b + 2000 * kmIZ3T4Gwi6 + 1000 * d + 850 * e;
        hKSsvew = hKSsvew + (*(XO5iD32 +i)).hKSsvew;
    }
    for (i = 1; i < crQInWE4Hs; i++) {
        if ((*(XO5iD32 +0)).hKSsvew < (*(XO5iD32 +i)).hKSsvew)
            (*(XO5iD32 +0)) = (*(XO5iD32 +i));
    }
    printf ("%s\n%d\n%d", XO5iD32[0].MyBDEt60, (*(XO5iD32 +0)).hKSsvew, hKSsvew);
}

