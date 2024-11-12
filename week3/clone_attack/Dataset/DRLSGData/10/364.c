int x23nU0Wsk (int yK2bvU, int qubCMw) {
    int N0kodYs8;
    N0kodYs8 = yK2bvU > qubCMw ? yK2bvU : qubCMw;
    return (N0kodYs8);
}

void  main () {
    int TsLq4yc;
    int RCB4VzemfH;
    int dNCVMj;
    int GepEPUGhlL3Z;
    int mBo8ZLtY2N [(949 - 849)];
    int yK2bvU [100];
    scanf ("%d\n", &dNCVMj);
    for (TsLq4yc = (462 - 462); dNCVMj > TsLq4yc; TsLq4yc++)
        scanf ("%d", &yK2bvU[TsLq4yc]);
    {
        TsLq4yc = (765 - 765);
        for (; TsLq4yc < dNCVMj;) {
            mBo8ZLtY2N[TsLq4yc] = 0;
            TsLq4yc++;
        };
    }
    mBo8ZLtY2N[0] = (347 - 346);
    GepEPUGhlL3Z = 0;
    {
        TsLq4yc = 1;
        for (; TsLq4yc < dNCVMj;) {
            for (RCB4VzemfH = TsLq4yc; RCB4VzemfH >= 0; RCB4VzemfH--) {
                if (yK2bvU[TsLq4yc] <= yK2bvU[RCB4VzemfH])
                    mBo8ZLtY2N[TsLq4yc] = x23nU0Wsk (mBo8ZLtY2N[TsLq4yc], mBo8ZLtY2N[RCB4VzemfH] + 1);
                if (mBo8ZLtY2N[TsLq4yc] > GepEPUGhlL3Z)
                    GepEPUGhlL3Z = mBo8ZLtY2N[TsLq4yc];
            }
            TsLq4yc++;
        };
    }
    printf ("%d\n", GepEPUGhlL3Z);
}

