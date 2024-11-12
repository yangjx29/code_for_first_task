const  int uZY0fldqg8v = (646 - 446);
char arrA [uZY0fldqg8v + (444 - 434)] [uZY0fldqg8v + (970 - 960)], XOEHklv7D [uZY0fldqg8v + (63 - 53)] [uZY0fldqg8v + (839 - 829)];
char (*i4gMako) [uZY0fldqg8v + 10], (*daNH1mCnsL) [uZY0fldqg8v + 10];

int main () {
    int m;
    int BEPbTIx9f;
    int SuIrHXG = (122 - 122);
    daNH1mCnsL = XOEHklv7D;
    i4gMako = arrA;
    cin >> BEPbTIx9f;
    for (int VT1r8Lvg = (257 - 256);
    VT1r8Lvg <= BEPbTIx9f; VT1r8Lvg++)
        for (int fwJiV3QpF = (419 - 418);
        BEPbTIx9f >= fwJiV3QpF; fwJiV3QpF = fwJiV3QpF + 1)
            cin >> i4gMako[VT1r8Lvg][fwJiV3QpF];
    cin >> m;
    m--;
    for (; m--;) {
        memset (daNH1mCnsL, '.', sizeof (XOEHklv7D));
        {
            int VT1r8Lvg = (949 - 948);
            while (VT1r8Lvg <= BEPbTIx9f) {
                for (int fwJiV3QpF = (198 - 197);
                fwJiV3QpF <= BEPbTIx9f; fwJiV3QpF = fwJiV3QpF + 1)
                    if (i4gMako[VT1r8Lvg][fwJiV3QpF] == '@') {
                        daNH1mCnsL[VT1r8Lvg][fwJiV3QpF] = daNH1mCnsL[VT1r8Lvg +(423 - 422)][fwJiV3QpF] = daNH1mCnsL[VT1r8Lvg][fwJiV3QpF + (138 - 137)] = daNH1mCnsL[VT1r8Lvg -(720 - 719)][fwJiV3QpF] = daNH1mCnsL[VT1r8Lvg][fwJiV3QpF - (605 - 604)] = '@';
                    }
                VT1r8Lvg = VT1r8Lvg +1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int VT1r8Lvg = (739 - 738);
        VT1r8Lvg <= BEPbTIx9f; VT1r8Lvg++)
            for (int fwJiV3QpF = (901 - 900);
            fwJiV3QpF <= BEPbTIx9f; fwJiV3QpF = fwJiV3QpF + 1)
                if (i4gMako[VT1r8Lvg][fwJiV3QpF] == '#') {
                    daNH1mCnsL[VT1r8Lvg][fwJiV3QpF] = '#';
                }
        swap (i4gMako, daNH1mCnsL);
    }
    for (int VT1r8Lvg = (584 - 583);
    VT1r8Lvg <= BEPbTIx9f; VT1r8Lvg++) {
        int fwJiV3QpF = 1;
        while (fwJiV3QpF <= BEPbTIx9f) {
            if (i4gMako[VT1r8Lvg][fwJiV3QpF] == '@')
                SuIrHXG++;
            fwJiV3QpF++;
        };
    }
    cout << SuIrHXG << endl;
}

