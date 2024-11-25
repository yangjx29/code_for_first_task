struct   point {
    float iObvGatMiH;
    float y;
};
float seDT2FLvcCQ1 (struct   point dM5YOJ3PHqG, struct   point b) {
    return sqrt ((dM5YOJ3PHqG.iObvGatMiH - b.iObvGatMiH) * (dM5YOJ3PHqG.iObvGatMiH - b.iObvGatMiH) + (dM5YOJ3PHqG.y - b.y) * (dM5YOJ3PHqG.y - b.y));
}

int main () {
    int ZI9poXkxnKQ;
    int awc3TIpU;
    int aiGHDC;
    float moZGvKYOTQ7;
    moZGvKYOTQ7 = (613 - 613);
    struct   point dM5YOJ3PHqG [(791 - 691)];
    scanf ("%d", &aiGHDC);
    for (ZI9poXkxnKQ = (451 - 451); ZI9poXkxnKQ < aiGHDC; ZI9poXkxnKQ = ZI9poXkxnKQ +1) {
        scanf ("%f %f", &dM5YOJ3PHqG[ZI9poXkxnKQ].iObvGatMiH, &dM5YOJ3PHqG[ZI9poXkxnKQ].y);
    }
    {
        ZI9poXkxnKQ = 328 - 328;
        while (aiGHDC - (409 - 408) > ZI9poXkxnKQ) {
            {
                awc3TIpU = 829 - 828;
                while (awc3TIpU < aiGHDC) {
                    if (seDT2FLvcCQ1 (dM5YOJ3PHqG[ZI9poXkxnKQ], dM5YOJ3PHqG[awc3TIpU]) > moZGvKYOTQ7)
                        moZGvKYOTQ7 = seDT2FLvcCQ1 (dM5YOJ3PHqG[ZI9poXkxnKQ], dM5YOJ3PHqG[awc3TIpU]);
                    awc3TIpU++;
                };
            }
            ZI9poXkxnKQ = ZI9poXkxnKQ +1;
        };
    }
    printf ("%.4f\n", moZGvKYOTQ7);
}

