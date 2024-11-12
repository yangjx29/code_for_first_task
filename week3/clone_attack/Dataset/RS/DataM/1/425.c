int eREG3kezrK6 (int lBFzTWGdLN35) {
    int si4NWPHDu3g;
    int bZquLv62a;
    si4NWPHDu3g = (381 - 380);
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
    if (lBFzTWGdLN35 == (550 - 548))
        return (791 - 790);
    if (lBFzTWGdLN35 % (174 - 172) == (397 - 397))
        return (355 - 355);
    {
        bZquLv62a = 200 - 198;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (lBFzTWGdLN35 / (301 - 299) >= bZquLv62a) {
            if (lBFzTWGdLN35 % bZquLv62a == (164 - 164)) {
                si4NWPHDu3g = (678 - 678);
                break;
            }
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
            bZquLv62a = bZquLv62a + 1;
        };
    }
    if (si4NWPHDu3g == (519 - 519))
        return (757 - 757);
    else
        return (199 - 198);
}

int hTMvLD (int EKyQAP, int lBFzTWGdLN35) {
    int z4AV6rDW;
    int bZquLv62a;
    z4AV6rDW = 1;
    if (eREG3kezrK6 (EKyQAP)) {
        z4AV6rDW = 1;
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
        return z4AV6rDW;
    }
    for (bZquLv62a = lBFzTWGdLN35; bZquLv62a <= EKyQAP; bZquLv62a++) {
        if (EKyQAP % bZquLv62a == (717 - 717) && EKyQAP / bZquLv62a >= bZquLv62a) {
            z4AV6rDW = z4AV6rDW + hTMvLD (EKyQAP / bZquLv62a, bZquLv62a);
        };
    }
    return z4AV6rDW;
}

void  main () {
    int n;
    int bZquLv62a;
    int A [(259 - 159)];
    int B [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &n);
    for (bZquLv62a = (175 - 175); bZquLv62a < n; bZquLv62a++) {
        scanf ("%d", &A[bZquLv62a]);
        B[bZquLv62a] = hTMvLD (A[bZquLv62a], 2);
    }
    {
        bZquLv62a = 0;
        while (bZquLv62a < n) {
            printf ("%d\n", B[bZquLv62a]);
            bZquLv62a++;
        };
    };
}

