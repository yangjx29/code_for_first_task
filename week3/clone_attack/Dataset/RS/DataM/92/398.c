int a [1001];
int EPVK8EnO2 [1001];

void  siSRDIqEPB (int a [], int SBrcOAH) {
    int i;
    int nhEnKcrR2Uj3;
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
    int temp;
    {
        i = 681 - 680;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((362 - 362) < i) {
            {
                nhEnKcrR2Uj3 = 279 - 279;
                while (i > nhEnKcrR2Uj3) {
                    if (a[nhEnKcrR2Uj3 + (545 - 544)] < a[nhEnKcrR2Uj3]) {
                        temp = a[nhEnKcrR2Uj3];
                        a[nhEnKcrR2Uj3] = a[nhEnKcrR2Uj3 + (487 - 486)];
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
                        a[nhEnKcrR2Uj3 + 1] = temp;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    nhEnKcrR2Uj3 = nhEnKcrR2Uj3 + 1;
                };
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
            i--;
        };
    };
}

int main () {
    int svFcbxW1;
    int I4QWYBIn8Oxk = 0, lose = 0;
    int SBrcOAH, i;
    int maxa, SlAL8x2, mina, minb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    scanf ("%d", &SBrcOAH);
    while (!(0 == SBrcOAH)) {
        {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (SBrcOAH > i) {
                scanf ("%d", &a[i]);
                i = i + 1;
            };
        }
        siSRDIqEPB (a, SBrcOAH);
        I4QWYBIn8Oxk = lose = 0;
        {
            i = 0;
            while (SBrcOAH > i) {
                scanf ("%d", &EPVK8EnO2[i]);
                i = i + 1;
            };
        }
        siSRDIqEPB (EPVK8EnO2, SBrcOAH);
        maxa = SlAL8x2 = SBrcOAH -1;
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
        mina = minb = 0;
        for (i = 0; SBrcOAH > i; i = i + 1) {
            if (a[mina] > EPVK8EnO2[minb]) {
                minb = minb + 1;
                mina = mina + 1;
                I4QWYBIn8Oxk = I4QWYBIn8Oxk +1;
            }
            else if (a[maxa] > EPVK8EnO2[SlAL8x2]) {
                I4QWYBIn8Oxk = I4QWYBIn8Oxk +1;
                maxa = maxa - 1;
                SlAL8x2 = SlAL8x2 -1;
            }
            else if (a[mina] == EPVK8EnO2[SlAL8x2]) {
                SlAL8x2 = SlAL8x2 -1;
                mina = mina + 1;
            }
            else if (a[mina] <= EPVK8EnO2[minb]) {
                SlAL8x2 = SlAL8x2 -1;
                mina++;
                lose = lose + 1;
            };
        }
        svFcbxW1 = 0;
        svFcbxW1 = 200 * (I4QWYBIn8Oxk -lose);
        printf ("%d\n", svFcbxW1);
        scanf ("%d", &SBrcOAH);
    }
    return 0;
}

