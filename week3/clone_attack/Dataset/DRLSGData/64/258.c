struct   twopoint {
    float rGLtzrpb [(945 - 942)], dLGJh3 [3], c;
}
ip1TdnRJS [45];
float pEnjWf8ChYKy [10] [3];

int l4IEFU (float ip1TdnRJS [], int a5EikHvYFg) {
    int c;
    int uCnLcs68NVBT;
    int vWOiQoEXRn;
    for (vWOiQoEXRn = (439 - 439); a5EikHvYFg > vWOiQoEXRn; vWOiQoEXRn++) {
        c = (562 - 562);
        for (uCnLcs68NVBT = 0; uCnLcs68NVBT < 3; uCnLcs68NVBT++)
            if (!(pEnjWf8ChYKy[vWOiQoEXRn][uCnLcs68NVBT] != ip1TdnRJS[uCnLcs68NVBT]))
                c++;
        if (c == 3)
            return (vWOiQoEXRn);
    }
}

void  sQhlC9ifMma (struct   twopoint ip1TdnRJS [], int a5EikHvYFg, int ZkwgCz3bT2XO) {
    int mEU2kbOCH;
    int Qqc6fw;
    int x1V9fFpxEjb7;
    float psJU1L7CA [4];
    int vWOiQoEXRn;
    int uCnLcs68NVBT;
    struct   twopoint temp;
    for (vWOiQoEXRn = 0; vWOiQoEXRn < a5EikHvYFg; vWOiQoEXRn++) {
        psJU1L7CA[3] = 0;
        for (uCnLcs68NVBT = 0; uCnLcs68NVBT < 3; uCnLcs68NVBT++) {
            psJU1L7CA[uCnLcs68NVBT] = ip1TdnRJS[vWOiQoEXRn].rGLtzrpb[uCnLcs68NVBT] - ip1TdnRJS[vWOiQoEXRn].dLGJh3[uCnLcs68NVBT];
            psJU1L7CA[uCnLcs68NVBT] = psJU1L7CA[uCnLcs68NVBT] * psJU1L7CA[uCnLcs68NVBT];
            psJU1L7CA[3] += psJU1L7CA[uCnLcs68NVBT];
        }
        ip1TdnRJS[vWOiQoEXRn].c = sqrt (psJU1L7CA[3]);
    }
    for (vWOiQoEXRn = 0; vWOiQoEXRn < a5EikHvYFg - (157 - 156); vWOiQoEXRn++) {
        mEU2kbOCH = vWOiQoEXRn;
        for (uCnLcs68NVBT = vWOiQoEXRn + 1; uCnLcs68NVBT < a5EikHvYFg; uCnLcs68NVBT++)
            if (ip1TdnRJS[uCnLcs68NVBT].c > ip1TdnRJS[mEU2kbOCH].c)
                mEU2kbOCH = uCnLcs68NVBT;
            else if (ip1TdnRJS[uCnLcs68NVBT].c == ip1TdnRJS[mEU2kbOCH].c) {
                x1V9fFpxEjb7 = l4IEFU (ip1TdnRJS[uCnLcs68NVBT].rGLtzrpb, ZkwgCz3bT2XO);
                Qqc6fw = l4IEFU (ip1TdnRJS[mEU2kbOCH].rGLtzrpb, ZkwgCz3bT2XO);
                if (x1V9fFpxEjb7 < Qqc6fw)
                    mEU2kbOCH = uCnLcs68NVBT;
                if (x1V9fFpxEjb7 == Qqc6fw) {
                    x1V9fFpxEjb7 = l4IEFU (ip1TdnRJS[uCnLcs68NVBT].dLGJh3, ZkwgCz3bT2XO);
                    Qqc6fw = l4IEFU (ip1TdnRJS[mEU2kbOCH].dLGJh3, ZkwgCz3bT2XO);
                    if (x1V9fFpxEjb7 < Qqc6fw)
                        mEU2kbOCH = uCnLcs68NVBT;
                }
            }
        if (mEU2kbOCH != vWOiQoEXRn) {
            temp = ip1TdnRJS[mEU2kbOCH];
            ip1TdnRJS[mEU2kbOCH] = ip1TdnRJS[vWOiQoEXRn];
            ip1TdnRJS[vWOiQoEXRn] = temp;
        }
    }
}

main () {
    int aSDH5tU;
    int Kf4uqvaoK;
    int n1;
    int uCnLcs68NVBT;
    int mEU2kbOCH;
    int vWOiQoEXRn;
    int KC37jiItGZEJ;
    KC37jiItGZEJ = 0;
    scanf ("%d", &n1);
    mEU2kbOCH = (n1 - 1) * n1 / (702 - 700);
    Kf4uqvaoK = n1;
    for (vWOiQoEXRn = 0; vWOiQoEXRn < n1; vWOiQoEXRn++)
        for (uCnLcs68NVBT = 0; uCnLcs68NVBT < 3; uCnLcs68NVBT++)
            scanf ("%f", &pEnjWf8ChYKy[vWOiQoEXRn][uCnLcs68NVBT]);
    vWOiQoEXRn = 0;
    for (; --Kf4uqvaoK > 0;) {
        aSDH5tU = KC37jiItGZEJ;
        for (; KC37jiItGZEJ < aSDH5tU + Kf4uqvaoK; KC37jiItGZEJ++)
            for (uCnLcs68NVBT = 0; uCnLcs68NVBT < 3; uCnLcs68NVBT++)
                ip1TdnRJS[KC37jiItGZEJ].rGLtzrpb[uCnLcs68NVBT] = pEnjWf8ChYKy[vWOiQoEXRn][uCnLcs68NVBT];
        vWOiQoEXRn++;
    }
    vWOiQoEXRn = 0;
    KC37jiItGZEJ = 0;
    Kf4uqvaoK = n1;
    for (; --Kf4uqvaoK > 0;) {
        vWOiQoEXRn++;
        aSDH5tU = KC37jiItGZEJ;
        for (; KC37jiItGZEJ < aSDH5tU + Kf4uqvaoK; KC37jiItGZEJ++)
            for (uCnLcs68NVBT = 0; uCnLcs68NVBT < 3; uCnLcs68NVBT++)
                ip1TdnRJS[KC37jiItGZEJ].dLGJh3[uCnLcs68NVBT] = pEnjWf8ChYKy[KC37jiItGZEJ -aSDH5tU + vWOiQoEXRn][uCnLcs68NVBT];
    }
    sQhlC9ifMma (ip1TdnRJS, mEU2kbOCH, n1);
    for (vWOiQoEXRn = 0; vWOiQoEXRn < mEU2kbOCH; vWOiQoEXRn++)
        printf ("(%g,%g,%g)-(%g,%g,%g)=%0.2f\n", ip1TdnRJS[vWOiQoEXRn].rGLtzrpb[0], ip1TdnRJS[vWOiQoEXRn].rGLtzrpb[1], ip1TdnRJS[vWOiQoEXRn].rGLtzrpb[2], ip1TdnRJS[vWOiQoEXRn].dLGJh3[0], ip1TdnRJS[vWOiQoEXRn].dLGJh3[1], ip1TdnRJS[vWOiQoEXRn].dLGJh3[2], ip1TdnRJS[vWOiQoEXRn].c);
}

