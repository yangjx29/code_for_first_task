int main () {
    int BJuKoqt;
    int ysKjtV9nH;
    int SBogrZ07L1;
    int LYBiqwS;
    int oCxirObjz05 [(398 - 388)] [10];
    int LnF82D;
    int PLweT5;
    int WmxrjO;
    int VLB1bSWunH;
    scanf ("%d", &LYBiqwS);
    SBogrZ07L1 = (524 - 524);
    VLB1bSWunH = (686 - 686);
    VLB1bSWunH = (364 - 364);
    ysKjtV9nH = (292 - 292);
    for (PLweT5 = (95 - 95); PLweT5 < LYBiqwS; PLweT5++) {
        BJuKoqt = (330 - 330);
        for (WmxrjO = 0; LYBiqwS > WmxrjO; WmxrjO++) {
            scanf ("%d", &oCxirObjz05[PLweT5][WmxrjO]);
            if (!(0 != oCxirObjz05[PLweT5][WmxrjO])) {
                ysKjtV9nH++;
                BJuKoqt++;
            }
        }
        if (BJuKoqt > 1) {
            SBogrZ07L1++;
        }
        if (BJuKoqt > VLB1bSWunH) {
            VLB1bSWunH = BJuKoqt;
        }
    }
    LnF82D = SBogrZ07L1 *VLB1bSWunH-ysKjtV9nH;
    printf ("%d", LnF82D);
    return 0;
}

