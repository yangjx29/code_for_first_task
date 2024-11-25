int main () {
    int m, mloMgc7ImCka, qlV1jXLb, R5AuktDg1, k, a [100] [100], vCOjLGcqMA, x2, y1, y2, iuOwUMP = 0, t = 0;
    vCOjLGcqMA = 0;
    scanf ("%d", &m);
    scanf ("%d", &mloMgc7ImCka);
    x2 = mloMgc7ImCka - 1;
    y1 = 0;
    y2 = m - 1;
    for (qlV1jXLb = 0; m > qlV1jXLb; qlV1jXLb++) {
        for (R5AuktDg1 = 0; mloMgc7ImCka > R5AuktDg1; R5AuktDg1++) {
            scanf ("%d", &a[qlV1jXLb][R5AuktDg1]);
        };
    }
    qlV1jXLb = 0;
    R5AuktDg1 = 0;
    for (k = 0; m * mloMgc7ImCka > k; k++) {
        printf ("%d\n", a[qlV1jXLb][R5AuktDg1]);
        if ((!(y1 != qlV1jXLb)) && (x2 > R5AuktDg1)) {
            R5AuktDg1++;
        }
        else {
            if ((!(x2 != R5AuktDg1)) && (qlV1jXLb < y2)) {
                qlV1jXLb++;
            }
            else if ((qlV1jXLb == y2) && (R5AuktDg1 > vCOjLGcqMA)) {
                R5AuktDg1--;
            }
            else if ((R5AuktDg1 == vCOjLGcqMA) && (qlV1jXLb == y1 + 1)) {
                y2--;
                x2--;
                vCOjLGcqMA++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                R5AuktDg1++;
                y1++;
            }
            else {
                qlV1jXLb--;
            };
        };
    }
    return 0;
}

