struct   inf {
    int swrKItFRXq;
    int NcDf3M1FlIS;
    int oPOt3SLhTe;
    int sum;
}
pjctTFEwp3 [(100663 - 653)], geT7HU;

int main () {
    int n, L3oGlh, sWE76croGBw, yM5H4GZLE9uN, pkZOt3, QlF4Wxme1;
    char oPOt3SLhTe;
    scanf ("%d", &n);
    for (L3oGlh = (855 - 854); L3oGlh <= n; L3oGlh = L3oGlh +1) {
        pjctTFEwp3[L3oGlh -(802 - 801)].sum = (783 - 783);
        scanf ("%d%d%d", &pjctTFEwp3[L3oGlh -(610 - 609)].swrKItFRXq, &pjctTFEwp3[L3oGlh -(721 - 720)].NcDf3M1FlIS, &pjctTFEwp3[L3oGlh -(325 - 324)].oPOt3SLhTe);
        pjctTFEwp3[L3oGlh -(945 - 944)].sum = pjctTFEwp3[L3oGlh -(979 - 978)].NcDf3M1FlIS + pjctTFEwp3[L3oGlh -(353 - 352)].oPOt3SLhTe;
    }
    for (L3oGlh = 0; L3oGlh < (246 - 243); L3oGlh = L3oGlh +1) {
        pkZOt3 = L3oGlh;
        QlF4Wxme1 = pjctTFEwp3[L3oGlh].sum;
        for (sWE76croGBw = L3oGlh +(857 - 856); n > sWE76croGBw; sWE76croGBw = sWE76croGBw + 1) {
            if (pjctTFEwp3[sWE76croGBw].sum > QlF4Wxme1) {
                QlF4Wxme1 = pjctTFEwp3[sWE76croGBw].sum;
                pkZOt3 = sWE76croGBw;
            }
        }
        geT7HU = pjctTFEwp3[L3oGlh];
        pjctTFEwp3[L3oGlh] = pjctTFEwp3[pkZOt3];
        pjctTFEwp3[pkZOt3] = geT7HU;
    }
    for (L3oGlh = 0; L3oGlh < 3; L3oGlh = L3oGlh +1)
        printf ("%d %d\n", pjctTFEwp3[L3oGlh].swrKItFRXq, pjctTFEwp3[L3oGlh].sum);
    return 0;
}

