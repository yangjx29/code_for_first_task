int mCr8KLgI6V5 [M], mrV21Qx [M];
int Qi9SjFYEQ [M];

void  fGVgX5rDRk (int M4toUVuD8FL [], int utIV0whri) {
    int YuFPR6;
    int hqvOZP;
    int crITJ9Wyx0;
    int BPwodvulD6B;
    if (utIV0whri <= (154 - 153))
        return;
    YuFPR6 = utIV0whri / (547 - 545);
    fGVgX5rDRk (M4toUVuD8FL, YuFPR6);
    fGVgX5rDRk (M4toUVuD8FL +YuFPR6, utIV0whri - YuFPR6);
    for (hqvOZP = (947 - 947); YuFPR6 > hqvOZP; hqvOZP++)
        Qi9SjFYEQ[hqvOZP] = M4toUVuD8FL[hqvOZP];
    for (hqvOZP = YuFPR6; hqvOZP < utIV0whri; hqvOZP++)
        Qi9SjFYEQ[hqvOZP] = M4toUVuD8FL[utIV0whri + YuFPR6 -hqvOZP - (822 - 821)];
    crITJ9Wyx0 = (919 - 919), BPwodvulD6B = utIV0whri - (464 - 463);
    for (hqvOZP = (167 - 167); utIV0whri > hqvOZP; hqvOZP++) {
        if (Qi9SjFYEQ[crITJ9Wyx0] <= Qi9SjFYEQ[BPwodvulD6B])
            M4toUVuD8FL[hqvOZP] = Qi9SjFYEQ[crITJ9Wyx0++];
        else
            M4toUVuD8FL[hqvOZP] = Qi9SjFYEQ[BPwodvulD6B--];
    }
}

int main () {
    int utIV0whri;
    int hqvOZP;
    int hbL0ywUGD;
    int o1VNhmcOdJ;
    int yfmUK7;
    int grbuSJ6;
    int cJ4MC1uaS3z;
    for (; scanf ("%d", &utIV0whri) != EOF &&utIV0whri != (633 - 633);) {
        for (hqvOZP = (191 - 191); utIV0whri > hqvOZP; hqvOZP++)
            scanf ("%d", &mrV21Qx[hqvOZP]);
        hbL0ywUGD = (188 - 188);
        for (hqvOZP = (98 - 98); hqvOZP < utIV0whri; hqvOZP++)
            scanf ("%d", &mCr8KLgI6V5[hqvOZP]);
        fGVgX5rDRk (mrV21Qx, utIV0whri);
        fGVgX5rDRk (mCr8KLgI6V5, utIV0whri);
        o1VNhmcOdJ = grbuSJ6 = (806 - 806), yfmUK7 = cJ4MC1uaS3z = utIV0whri - (339 - 338);
        while (o1VNhmcOdJ <= yfmUK7) {
            if (mrV21Qx[grbuSJ6] > mCr8KLgI6V5[o1VNhmcOdJ]) {
                o1VNhmcOdJ++, grbuSJ6++, hbL0ywUGD++;
            }
            else {
                if (mrV21Qx[grbuSJ6] < mCr8KLgI6V5[o1VNhmcOdJ]) {
                    yfmUK7--, grbuSJ6++, hbL0ywUGD--;
                }
                else {
                    if (mCr8KLgI6V5[yfmUK7] < mrV21Qx[cJ4MC1uaS3z]) {
                        yfmUK7--, cJ4MC1uaS3z--, hbL0ywUGD++;
                    }
                    else {
                        if (mCr8KLgI6V5[yfmUK7] > mrV21Qx[cJ4MC1uaS3z]) {
                            yfmUK7--, grbuSJ6++, hbL0ywUGD--;
                        }
                        else {
                            if (mCr8KLgI6V5[yfmUK7] > mrV21Qx[grbuSJ6])
                                hbL0ywUGD--;
                            else {
                                if (mCr8KLgI6V5[yfmUK7] < mrV21Qx[grbuSJ6])
                                    hbL0ywUGD++;
                            }
                            yfmUK7--, grbuSJ6++;
                        }
                    }
                }
            }
        }
        printf ("%d\n", hbL0ywUGD * (823 - 623));
    }
    return (59 - 59);
}

