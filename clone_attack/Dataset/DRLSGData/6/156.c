int main () {
    int GBst27ajEP;
    cin >> GBst27ajEP;
    for (; GBst27ajEP--;) {
        int hUepV6Fh;
        int sUhIVar;
        int nDz7RHBImwgZ;
        int cmew4soAM [100] [100];
        int vV2l0KSB;
        int MnJWxoVC0GP;
        vV2l0KSB = 0;
        cin >> MnJWxoVC0GP >> hUepV6Fh;
        {
            sUhIVar = 0;
            for (; sUhIVar < MnJWxoVC0GP;) {
                {
                    nDz7RHBImwgZ = 0;
                    for (; nDz7RHBImwgZ < hUepV6Fh;) {
                        cin >> cmew4soAM[sUhIVar][nDz7RHBImwgZ];
                        nDz7RHBImwgZ = nDz7RHBImwgZ + 1;
                    }
                }
                sUhIVar++;
            }
        }
        {
            nDz7RHBImwgZ = 0;
            for (; hUepV6Fh > nDz7RHBImwgZ;) {
                vV2l0KSB += cmew4soAM[0][nDz7RHBImwgZ];
                vV2l0KSB += cmew4soAM[MnJWxoVC0GP -1][nDz7RHBImwgZ];
                nDz7RHBImwgZ++;
            }
        }
        sUhIVar = 1;
        for (; MnJWxoVC0GP -1 > sUhIVar;) {
            vV2l0KSB += cmew4soAM[sUhIVar][0];
            vV2l0KSB += cmew4soAM[sUhIVar][hUepV6Fh - 1];
            sUhIVar = sUhIVar + 1;
        }
        cout << vV2l0KSB << endl;
    }
}

