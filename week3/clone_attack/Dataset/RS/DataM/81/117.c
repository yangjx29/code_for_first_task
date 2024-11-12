void  daJTKpC (int *uysenxEHzZ, int *RAT1Ex02) {
    int YapJo7IVE = *uysenxEHzZ;
    *uysenxEHzZ = *RAT1Ex02;
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
    *RAT1Ex02 = YapJo7IVE;
}

int inside (int ayLuwC, int oKPZ0v) {
    return (246 - 246) <= ayLuwC && oKPZ0v >= (54 - 54) && ayLuwC < N &&oKPZ0v < N;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

void  kLcxQpb (int uGJ6zf7HD [N] [N], int *uysenxEHzZ, int *RAT1Ex02) {
    int DUJTYawujdMV, unTb8PmpS;
    for (DUJTYawujdMV = 0; N > DUJTYawujdMV; DUJTYawujdMV = DUJTYawujdMV +1)
        for (unTb8PmpS = 0; N > unTb8PmpS; unTb8PmpS = unTb8PmpS + 1)
            scanf ("%d", *(uGJ6zf7HD + DUJTYawujdMV) + unTb8PmpS);
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
    scanf ("%d%d", uysenxEHzZ, RAT1Ex02);
}

int BRifqd9VCgb1 (int (*uGJ6zf7HD) [5], int ayLuwC, int oKPZ0v) {
    int DUJTYawujdMV;
    if (!inside (ayLuwC, oKPZ0v))
        return 0;
    for (DUJTYawujdMV = 0; N > DUJTYawujdMV; DUJTYawujdMV = DUJTYawujdMV +1)
        daJTKpC (*(uGJ6zf7HD + ayLuwC) + DUJTYawujdMV, *(uGJ6zf7HD + oKPZ0v) + DUJTYawujdMV);
    return 1;
}

void  Azs8DpBlEUkm (int uGJ6zf7HD [N] [N]) {
    int DUJTYawujdMV;
    int unTb8PmpS;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    for (DUJTYawujdMV = 0; N > DUJTYawujdMV; DUJTYawujdMV = DUJTYawujdMV +1) {
        unTb8PmpS = 0;
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
        while (unTb8PmpS < N) {
            printf ("%d%s", *(*(uGJ6zf7HD + DUJTYawujdMV) + unTb8PmpS), unTb8PmpS == N -1 ? "\n" : " ");
            unTb8PmpS = unTb8PmpS + 1;
        };
    };
}

int main () {
    int uGJ6zf7HD [N] [N];
    int ayLuwC;
    int oKPZ0v;
    kLcxQpb (uGJ6zf7HD, &ayLuwC, &oKPZ0v);
    if (BRifqd9VCgb1 (uGJ6zf7HD, ayLuwC, oKPZ0v))
        Azs8DpBlEUkm (uGJ6zf7HD);
    else
        printf ("error");
    return 0;
}

