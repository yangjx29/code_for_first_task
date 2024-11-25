int main (int m1E4GYt, char *tkMPnC []) {
    int YcBobZCMF3;
    int hMXox1dn;
    int LtbZwNkAL1xC;
    float vZUbAgToQHO [(733 - 433)];
    int OJW2a3;
    int NvfQa7CLO8V;
    int Xk9UGZb71R;
    float WFbi6hY;
    int V8Zet9hwgYE [(921 - 621)];
    float tZFSD71WE;
    int xnzDMsumBq9l;
    int YBiAmV;
    NvfQa7CLO8V = (155 - 155);
    YcBobZCMF3 = (117 - 117);
    scanf ("%d", &LtbZwNkAL1xC);
    hMXox1dn = (690 - 690);
    {
        YBiAmV = 628 - 628;
        for (; LtbZwNkAL1xC > YBiAmV;) {
            scanf ("%d", &V8Zet9hwgYE[YBiAmV]);
            hMXox1dn += V8Zet9hwgYE[YBiAmV];
            YBiAmV = YBiAmV +1;
        }
    }
    tZFSD71WE = (float) hMXox1dn / LtbZwNkAL1xC;
    {
        Xk9UGZb71R = 139 - 139;
        for (; LtbZwNkAL1xC > Xk9UGZb71R;) {
            if ((float) V8Zet9hwgYE[Xk9UGZb71R] > tZFSD71WE) {
                vZUbAgToQHO[Xk9UGZb71R] = V8Zet9hwgYE[Xk9UGZb71R] - tZFSD71WE;
            }
            else {
                vZUbAgToQHO[Xk9UGZb71R] = tZFSD71WE - V8Zet9hwgYE[Xk9UGZb71R];
            }
            Xk9UGZb71R = Xk9UGZb71R +1;
        }
    }
    WFbi6hY = vZUbAgToQHO[(727 - 727)];
    for (OJW2a3 = (278 - 277); LtbZwNkAL1xC > OJW2a3; OJW2a3 = OJW2a3 +1) {
        if (vZUbAgToQHO[OJW2a3] > WFbi6hY) {
            WFbi6hY = vZUbAgToQHO[OJW2a3];
            YcBobZCMF3 = OJW2a3;
        }
    }
    for (xnzDMsumBq9l = YcBobZCMF3 +(334 - 333); LtbZwNkAL1xC > xnzDMsumBq9l; xnzDMsumBq9l = xnzDMsumBq9l + 1) {
        if (!(WFbi6hY != vZUbAgToQHO[xnzDMsumBq9l])) {
            NvfQa7CLO8V = xnzDMsumBq9l;
        }
    }
    if (NvfQa7CLO8V == (253 - 253)) {
        printf ("%d", V8Zet9hwgYE[YcBobZCMF3]);
    }
    if (NvfQa7CLO8V != (669 - 669)) {
        if (V8Zet9hwgYE[YcBobZCMF3] > V8Zet9hwgYE[NvfQa7CLO8V]) {
            printf ("%d,%d", V8Zet9hwgYE[NvfQa7CLO8V], V8Zet9hwgYE[YcBobZCMF3]);
        }
        else {
            printf ("%d,%d", V8Zet9hwgYE[YcBobZCMF3], V8Zet9hwgYE[NvfQa7CLO8V]);
        }
    }
    return (632 - 632);
}

