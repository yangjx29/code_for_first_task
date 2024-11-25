int main () {
    int uDMbgBOtSv;
    char bLXcedzD8VG;
    int ih7ASu8;
    int OfBY4sR (int Lp2HOoTz3ql [], int mTfNVs);
    int Lp2HOoTz3ql [(1189 - 889)];
    ih7ASu8 = (309 - 309);
    uDMbgBOtSv = (150 - 150);
    do {
        uDMbgBOtSv = uDMbgBOtSv + (995 - 994);
        scanf ("%d%c", &Lp2HOoTz3ql[ih7ASu8++], &bLXcedzD8VG);
    }
    while (bLXcedzD8VG != '\n');
    if (OfBY4sR (Lp2HOoTz3ql, uDMbgBOtSv) != -(650 - 649))
        printf ("%d", OfBY4sR (Lp2HOoTz3ql, uDMbgBOtSv));
    else
        ;
    return (847 - 847);
}

int OfBY4sR (int Lp2HOoTz3ql [], int mTfNVs) {
    int ih7ASu8;
    int wqPG2l3;
    int hhwMksuOn;
    ih7ASu8 = 1;
    wqPG2l3 = Lp2HOoTz3ql[0];
    hhwMksuOn = -(225 - 224);
    for (; ih7ASu8 < mTfNVs;) {
        if (wqPG2l3 < Lp2HOoTz3ql[ih7ASu8]) {
            hhwMksuOn = wqPG2l3;
            wqPG2l3 = Lp2HOoTz3ql[ih7ASu8];
        }
        if (Lp2HOoTz3ql[ih7ASu8] < wqPG2l3 && hhwMksuOn < Lp2HOoTz3ql[ih7ASu8])
            hhwMksuOn = Lp2HOoTz3ql[ih7ASu8];
        ih7ASu8 = ih7ASu8 + 1;
    }
    if (hhwMksuOn != -1)
        return hhwMksuOn;
    else
        return (-1);
}

