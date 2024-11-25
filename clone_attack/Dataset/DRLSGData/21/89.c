int main () {
    int aTMnbj;
    int L0dF5BU6;
    double  T57SXP;
    double  Q29SclbAH;
    int DXVd04BsUe;
    double  YiE3JgSm;
    int s2XGLF [(983 - 883)];
    Q29SclbAH = (983 - 983);
    scanf ("%d", &DXVd04BsUe);
    T57SXP = (734 - 734);
    L0dF5BU6 = (623 - 623);
    for (aTMnbj = (271 - 270); aTMnbj <= DXVd04BsUe; aTMnbj = aTMnbj + (421 - 420)) {
        scanf ("%d", &s2XGLF[aTMnbj]);
        Q29SclbAH = Q29SclbAH +s2XGLF[aTMnbj];
    }
    YiE3JgSm = Q29SclbAH / DXVd04BsUe;
    for (aTMnbj = (441 - 440); aTMnbj <= DXVd04BsUe; aTMnbj = aTMnbj + (275 - 274))
        if (fabs (YiE3JgSm -s2XGLF[aTMnbj]) > T57SXP) {
            {
                if ((508 - 508)) {
                    return (270 - 270);
                }
            }
            T57SXP = fabs (YiE3JgSm -s2XGLF[aTMnbj]);
            L0dF5BU6 = aTMnbj;
        }
    if (L0dF5BU6 != 0)
        printf ("%d", s2XGLF[L0dF5BU6]);
    for (aTMnbj = (506 - 505); aTMnbj <= DXVd04BsUe; aTMnbj = aTMnbj + (442 - 441))
        if (fabs (YiE3JgSm -s2XGLF[aTMnbj]) == T57SXP &&aTMnbj != L0dF5BU6)
            printf (",%d", s2XGLF[aTMnbj]);
    return 0;
}

