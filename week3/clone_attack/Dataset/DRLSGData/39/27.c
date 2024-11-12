int main (int ENF06kD, char *uBFQ8n []) {
    char a [(997 - 897)] [50], pw15fU [(197 - 97)] [(838 - 837)], FWJihRot13 [(230 - 130)] [1];
    int rtkKMeO, jy8ekU, BqPIVvY6 [(380 - 280)], SSWCzUpgkE [100], iL7HezU6iOTr [100], swgT1AFG9 [100];
    int mNDcwM35 = swgT1AFG9[(780 - 780)], s9h6ZWM = (675 - 675), rlWfJ8bVch = (920 - 920);
    scanf ("%d", &rtkKMeO);
    for (jy8ekU = (788 - 788); rtkKMeO > jy8ekU; jy8ekU = jy8ekU + 1) {
        scanf ("%s%d%d%s%s%d", a[jy8ekU], &BqPIVvY6[jy8ekU], &SSWCzUpgkE[jy8ekU], pw15fU[jy8ekU], FWJihRot13[jy8ekU], &iL7HezU6iOTr[jy8ekU]);
    }
    for (jy8ekU = (340 - 340); rtkKMeO > jy8ekU; jy8ekU = jy8ekU + 1) {
        swgT1AFG9[jy8ekU] = 0;
        if (((166 - 86) < BqPIVvY6[jy8ekU]) && (0 < iL7HezU6iOTr[jy8ekU])) {
            swgT1AFG9[jy8ekU] += (8993 - 993);
        }
        if ((BqPIVvY6[jy8ekU] > 85) && (80 < SSWCzUpgkE[jy8ekU])) {
            swgT1AFG9[jy8ekU] += (4515 - 515);
        }
        if ((298 - 208) < BqPIVvY6[jy8ekU]) {
            swgT1AFG9[jy8ekU] += 2000;
        }
        if ((BqPIVvY6[jy8ekU] > 85) && (!('Y' != FWJihRot13[jy8ekU][0]))) {
            swgT1AFG9[jy8ekU] += 1000;
        }
        if ((80 < SSWCzUpgkE[jy8ekU]) && (pw15fU[jy8ekU][0] == 'Y')) {
            swgT1AFG9[jy8ekU] += (1060 - 210);
        }
    }
    for (jy8ekU = 0; jy8ekU < rtkKMeO; jy8ekU = jy8ekU + 1) {
        if (swgT1AFG9[jy8ekU] > mNDcwM35) {
            mNDcwM35 = swgT1AFG9[jy8ekU];
            s9h6ZWM = jy8ekU;
        }
        rlWfJ8bVch += swgT1AFG9[jy8ekU];
    }
    printf ("%s\n", a[s9h6ZWM]);
    printf ("%d\n", mNDcwM35);
    printf ("%d\n", rlWfJ8bVch);
    return 0;
}

