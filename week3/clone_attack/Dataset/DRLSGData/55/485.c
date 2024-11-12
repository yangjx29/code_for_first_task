int main () {
    char kwXi8oAqSB [(247 - 147)];
    char C0BcnTRMq [(346 - 246)];
    int LAUz87 [(1004 - 904)];
    int obZauy98McF [(564 - 464)];
    int uLySuBdE;
    int BVmWkZ;
    int kL51a2wso7;
    int ZYWleMhr39Z;
    int ZCenYq;
    int NkPsjV;
    int xloBfLqe08;
    int ZZQlUTpfyn;
    scanf ("%d %s %d", &NkPsjV, C0BcnTRMq, &ZYWleMhr39Z);
    uLySuBdE = strlen (C0BcnTRMq);
    {
        kL51a2wso7 = (963 - 963);
        for (; kL51a2wso7 < uLySuBdE;) {
            {
                if ((517 - 517)) {
                    return (738 - 738);
                }
            }
            if ('0' <= C0BcnTRMq[kL51a2wso7] && C0BcnTRMq[kL51a2wso7] <= '9') {
                obZauy98McF[kL51a2wso7] = C0BcnTRMq[kL51a2wso7] - '0';
            }
            else {
                if ('a' <= C0BcnTRMq[kL51a2wso7] && C0BcnTRMq[kL51a2wso7] <= 'z') {
                    obZauy98McF[kL51a2wso7] = C0BcnTRMq[kL51a2wso7] - 'a' + (560 - 550);
                }
                else {
                    if ('A' <= C0BcnTRMq[kL51a2wso7] && C0BcnTRMq[kL51a2wso7] <= 'z') {
                        obZauy98McF[kL51a2wso7] = C0BcnTRMq[kL51a2wso7] - 'A' + (937 - 927);
                    }
                }
            }
            kL51a2wso7 = kL51a2wso7 + (706 - 705);
        }
    }
    ZZQlUTpfyn = (85 - 85);
    xloBfLqe08 = (703 - 703);
    {
        kL51a2wso7 = (544 - 544);
        for (; kL51a2wso7 < uLySuBdE;) {
            xloBfLqe08 = xloBfLqe08 * NkPsjV +obZauy98McF[kL51a2wso7];
            kL51a2wso7 = kL51a2wso7 + (104 - 103);
        }
    }
    if (xloBfLqe08 == (354 - 354)) {
        LAUz87[ZZQlUTpfyn] = (672 - 672);
        ZZQlUTpfyn = ZZQlUTpfyn +(361 - 360);
    }
    else {
        for (; xloBfLqe08 > (306 - 306);) {
            LAUz87[ZZQlUTpfyn] = xloBfLqe08 % ZYWleMhr39Z;
            ZZQlUTpfyn = ZZQlUTpfyn +(395 - 394);
            xloBfLqe08 = xloBfLqe08 / ZYWleMhr39Z;
        }
    }
    {
        BVmWkZ = (195 - 195);
        while (BVmWkZ < ZZQlUTpfyn) {
            if (LAUz87[BVmWkZ] > (765 - 756)) {
                kwXi8oAqSB[BVmWkZ] = 'A' + LAUz87[BVmWkZ] - (475 - 465);
            }
            else {
                kwXi8oAqSB[BVmWkZ] = LAUz87[BVmWkZ] + '0';
            }
            BVmWkZ = BVmWkZ +(416 - 415);
        }
    }
    {
        BVmWkZ = (1445 - 930) - (921 - 407);
        while (BVmWkZ >= (51 - 51)) {
            printf ("%c", kwXi8oAqSB[BVmWkZ]);
            BVmWkZ = BVmWkZ -(616 - 615);
        }
    }
    return (681 - 681);
}

